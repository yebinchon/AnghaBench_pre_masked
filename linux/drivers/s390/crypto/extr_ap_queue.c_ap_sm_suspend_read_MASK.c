
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int response_code; } ;
struct ap_queue {int queue_count; int reply; } ;
typedef enum ap_wait { ____Placeholder_ap_wait } ap_wait ;



 int VAR_0 ;
 int VAR_1 ;
 struct ap_queue_status FUNC_0 (struct ap_queue*) ;

__attribute__((used)) static enum ap_wait FUNC_1(struct ap_queue *VAR_2)
{
 struct ap_queue_status VAR_3;

 if (!VAR_2->reply)
  return VAR_1;
 VAR_3 = FUNC_0(VAR_2);
 switch (VAR_3.response_code) {
 case 128:
  if (VAR_2->queue_count > 0)
   return VAR_0;

 default:
  return VAR_1;
 }
}
