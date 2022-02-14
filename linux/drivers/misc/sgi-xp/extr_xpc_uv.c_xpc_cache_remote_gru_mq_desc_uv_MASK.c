
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_message_queue_desc {int * mq; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (struct gru_message_queue_desc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned long,int) ;

__attribute__((used)) static enum xp_retval
FUNC_2(struct gru_message_queue_desc *VAR_1,
    unsigned long VAR_2)
{
 enum xp_retval VAR_3;

 VAR_3 = FUNC_1(FUNC_0(VAR_1), VAR_2,
          sizeof(struct gru_message_queue_desc));
 if (VAR_3 == VAR_0)
  VAR_1->mq = ((void*)0);

 return VAR_3;
}
