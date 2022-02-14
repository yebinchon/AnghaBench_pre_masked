
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int response_code; } ;
struct ap_queue {int state; int interrupt; int qid; } ;
typedef enum ap_wait { ____Placeholder_ap_wait } ap_wait ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ap_queue_status FUNC_0 (int ) ;

__attribute__((used)) static enum ap_wait FUNC_1(struct ap_queue *VAR_5)
{
 struct ap_queue_status VAR_6;

 VAR_6 = FUNC_0(VAR_5->qid);
 switch (VAR_6.response_code) {
 case 130:
 case 128:
  VAR_5->state = VAR_2;
  VAR_5->interrupt = VAR_0;
  return VAR_4;
 case 133:
  return VAR_4;
 case 129:
 case 131:
 case 132:
 default:
  VAR_5->state = VAR_1;
  return VAR_3;
 }
}
