
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_message_queue_desc {int dummy; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct gru_message_queue_desc*,void*,size_t) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum xp_retval
FUNC_4(struct gru_message_queue_desc *VAR_6, void *VAR_7,
   size_t VAR_8)
{
 enum xp_retval VAR_9;
 int VAR_10;

 while (1) {
  VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8);
  if (VAR_10 == VAR_1) {
   VAR_9 = VAR_4;
   break;
  }

  if (VAR_10 == VAR_2) {
   FUNC_0(VAR_5, "gru_send_message_gpa() returned "
    "error=MQE_QUEUE_FULL\n");


   (void)FUNC_3(10);
  } else if (VAR_10 == VAR_0) {
   FUNC_0(VAR_5, "gru_send_message_gpa() returned "
    "error=MQE_CONGESTION\n");


  } else {

   FUNC_1(VAR_5, "gru_send_message_gpa() returned "
    "error=%d\n", VAR_10);
   VAR_9 = VAR_3;
   break;
  }
 }
 return VAR_9;
}
