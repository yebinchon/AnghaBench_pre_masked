
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int response_code; int queue_empty; } ;


 int FUNC_0 (unsigned int,unsigned int) ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct ap_queue_status FUNC_2 (int,int *) ;
 struct ap_queue_status FUNC_3 (int) ;
 int FUNC_4 (int) ;

int FUNC_5(unsigned int VAR_2, unsigned int VAR_3,
        unsigned int VAR_4)
{
 struct ap_queue_status VAR_5;
 int VAR_6 = 2;
 int VAR_7 = FUNC_0(VAR_2, VAR_3);

 do {
  VAR_5 = FUNC_3(VAR_7);
  switch (VAR_5.response_code) {
  case 129:
   while (!VAR_5.queue_empty && VAR_6--) {
    FUNC_4(20);
    VAR_5 = FUNC_2(VAR_7, ((void*)0));
   }
   FUNC_1(VAR_6 <= 0);
   return 0;
  case 128:
  case 130:
   FUNC_4(20);
   break;
  default:

   return -VAR_1;
  }
 } while (VAR_4--);

 return -VAR_0;
}
