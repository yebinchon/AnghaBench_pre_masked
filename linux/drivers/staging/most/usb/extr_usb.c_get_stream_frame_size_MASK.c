
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_channel_config {unsigned int subbuffer_size; int data_type; int packets_per_xact; } ;


 unsigned int VAR_0 ;


 unsigned int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static unsigned int FUNC_1(struct most_channel_config *VAR_2)
{
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = VAR_2->subbuffer_size;

 if (!VAR_4) {
  FUNC_0("Misconfig: Subbuffer size zero.\n");
  return VAR_3;
 }
 switch (VAR_2->data_type) {
 case 129:
  VAR_3 = VAR_0 * VAR_4;
  break;
 case 128:
  if (VAR_2->packets_per_xact == 0) {
   FUNC_0("Misconfig: Packets per XACT zero\n");
   VAR_3 = 0;
  } else if (VAR_2->packets_per_xact == 0xFF) {
   VAR_3 = (VAR_1 / VAR_4) * VAR_4;
  } else {
   VAR_3 = VAR_2->packets_per_xact * VAR_4;
  }
  break;
 default:
  FUNC_0("Query frame size of non-streaming channel\n");
  break;
 }
 return VAR_3;
}
