
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knav_queue_notify_config {int dummy; } ;
struct knav_queue {TYPE_2__* inst; } ;
typedef enum knav_queue_ctrl_cmd { ____Placeholder_knav_queue_ctrl_cmd } knav_queue_ctrl_cmd ;
struct TYPE_4__ {int id; TYPE_1__* kdev; } ;
struct TYPE_3__ {int base_id; } ;


 int VAR_0 ;






 int FUNC_0 (struct knav_queue*) ;
 int FUNC_1 (struct knav_queue*) ;
 int FUNC_2 (struct knav_queue*) ;
 int FUNC_3 (struct knav_queue*) ;
 int FUNC_4 (struct knav_queue*,struct knav_queue_notify_config*) ;

int FUNC_5(void *VAR_1, enum knav_queue_ctrl_cmd VAR_2,
    unsigned long VAR_3)
{
 struct knav_queue *VAR_4 = VAR_1;
 struct knav_queue_notify_config *VAR_5;
 int VAR_6;

 switch ((int)VAR_2) {
 case 129:
  VAR_6 = VAR_4->inst->kdev->base_id + VAR_4->inst->id;
  break;

 case 131:
  VAR_6 = FUNC_2(VAR_4);
  break;

 case 128:
  VAR_5 = (void *)VAR_3;
  VAR_6 = FUNC_4(VAR_4, VAR_5);
  break;

 case 132:
  VAR_6 = FUNC_1(VAR_4);
  break;

 case 133:
  VAR_6 = FUNC_0(VAR_4);
  break;

 case 130:
  VAR_6 = FUNC_3(VAR_4);
  break;

 default:
  VAR_6 = -VAR_0;
  break;
 }
 return VAR_6;
}
