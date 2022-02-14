
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int irq_enabled; int response_code; } ;
struct ap_queue {scalar_t__ queue_count; int state; int interrupt; int qid; scalar_t__ reply; } ;
typedef enum ap_wait { ____Placeholder_ap_wait } ap_wait ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ap_queue_status FUNC_0 (struct ap_queue*) ;
 struct ap_queue_status FUNC_1 (int ,int *) ;

__attribute__((used)) static enum ap_wait FUNC_2(struct ap_queue *VAR_7)
{
 struct ap_queue_status VAR_8;

 if (VAR_7->queue_count > 0 && VAR_7->reply)

  VAR_8 = FUNC_0(VAR_7);
 else

  VAR_8 = FUNC_1(VAR_7->qid, ((void*)0));

 if (VAR_8.irq_enabled == 1) {

  VAR_7->interrupt = VAR_0;
  VAR_7->state = (VAR_7->queue_count > 0) ?
   VAR_3 : VAR_2;
 }

 switch (VAR_8.response_code) {
 case 129:
  if (VAR_7->queue_count > 0)
   return VAR_4;

 case 128:
  return VAR_6;
 default:
  VAR_7->state = VAR_1;
  return VAR_5;
 }
}
