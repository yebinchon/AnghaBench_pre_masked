
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_chip {scalar_t__* alsa_stream; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct bcm2835_chip *VAR_1)
{
 int VAR_2, VAR_3 = 0;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->alsa_stream[VAR_2]) {
   VAR_3 = FUNC_0(VAR_1->alsa_stream[VAR_2]);
   if (VAR_3 < 0)
    break;
  }
 }
 return VAR_3;
}
