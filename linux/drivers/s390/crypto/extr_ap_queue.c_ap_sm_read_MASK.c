
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int response_code; } ;
struct ap_queue {void* state; int queue_count; int reply; } ;
typedef enum ap_wait { ____Placeholder_ap_wait } ap_wait ;




 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ap_queue_status FUNC_0 (struct ap_queue*) ;

__attribute__((used)) static enum ap_wait FUNC_1(struct ap_queue *VAR_6)
{
 struct ap_queue_status VAR_7;

 if (!VAR_6->reply)
  return VAR_5;
 VAR_7 = FUNC_0(VAR_6);
 switch (VAR_7.response_code) {
 case 129:
  if (VAR_6->queue_count > 0) {
   VAR_6->state = VAR_2;
   return VAR_3;
  }
  VAR_6->state = VAR_1;
  return VAR_5;
 case 128:
  if (VAR_6->queue_count > 0)
   return VAR_4;
  VAR_6->state = VAR_1;
  return VAR_5;
 default:
  VAR_6->state = VAR_0;
  return VAR_5;
 }
}
