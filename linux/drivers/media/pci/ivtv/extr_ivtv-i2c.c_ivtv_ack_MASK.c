
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ivtv*) ;
 int FUNC_3 (struct ivtv*) ;
 int FUNC_4 (struct ivtv*,int) ;
 int FUNC_5 (struct ivtv*,int) ;
 int FUNC_6 (struct ivtv*,int ) ;
 int FUNC_7 (struct ivtv*,int ) ;

__attribute__((used)) static int FUNC_8(struct ivtv *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_2(VAR_1) == 1) {
  FUNC_0("SCL was high starting an ack\n");
  FUNC_4(VAR_1, 0);
  if (!FUNC_6(VAR_1, 0)) {
   FUNC_1("Could not set SCL low starting an ack\n");
   return -VAR_0;
  }
 }
 FUNC_5(VAR_1, 1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1, 1);
 if (!FUNC_7(VAR_1, 0)) {
  FUNC_1("Slave did not ack\n");
  VAR_2 = -VAR_0;
 }
 FUNC_4(VAR_1, 0);
 if (!FUNC_6(VAR_1, 0)) {
  FUNC_1("Failed to set SCL low after ACK\n");
  VAR_2 = -VAR_0;
 }
 return VAR_2;
}
