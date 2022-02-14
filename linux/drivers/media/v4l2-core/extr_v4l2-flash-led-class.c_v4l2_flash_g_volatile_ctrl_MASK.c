
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_flash {struct led_classdev_flash* fled_cdev; } ;
struct v4l2_ctrl {int id; int val; } ;
struct TYPE_2__ {int val; } ;
struct led_classdev_flash {TYPE_1__ brightness; } ;


 int VAR_0 ;





 int FUNC_0 (struct led_classdev_flash*,int*) ;
 int FUNC_1 (struct led_classdev_flash*,int*) ;
 int FUNC_2 (struct led_classdev_flash*) ;
 struct v4l2_flash* FUNC_3 (struct v4l2_ctrl*) ;
 int FUNC_4 (struct v4l2_flash*,struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_flash *VAR_2 = FUNC_3(VAR_1);
 struct led_classdev_flash *VAR_3 = VAR_2->fled_cdev;
 bool VAR_4;
 int VAR_5;

 switch (VAR_1->id) {
 case 128:
 case 131:
  return FUNC_4(VAR_2, VAR_1);
 case 130:
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 < 0)
   return VAR_5;




  VAR_1->val = VAR_3->brightness.val;
  return 0;
 case 129:
  VAR_5 = FUNC_1(VAR_3, &VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_1->val = VAR_4;
  return 0;
 case 132:

  return FUNC_0(VAR_3, &VAR_1->val);
 default:
  return -VAR_0;
 }
}
