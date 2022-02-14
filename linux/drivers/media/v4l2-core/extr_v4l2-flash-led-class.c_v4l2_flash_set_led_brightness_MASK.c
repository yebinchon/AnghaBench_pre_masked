
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_flash {int * iled_cdev; TYPE_1__* fled_cdev; struct v4l2_ctrl** ctrls; } ;
struct v4l2_ctrl {int val; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int led_cdev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_ctrl*,int) ;
 void* FUNC_1 (struct v4l2_flash*,int ,int) ;
 scalar_t__ FUNC_2 (struct v4l2_flash*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct v4l2_flash *VAR_5,
     struct v4l2_ctrl *VAR_6)
{
 struct v4l2_ctrl **VAR_7 = VAR_5->ctrls;
 enum led_brightness VAR_8;

 if (FUNC_2(VAR_5, VAR_3))
  VAR_8 = FUNC_1(VAR_5,
     VAR_3,
     VAR_6->val);
 else
  VAR_8 = FUNC_0(VAR_6, VAR_6->val);







 if (FUNC_2(VAR_5, VAR_4))
  VAR_6->val = FUNC_1(VAR_5,
     VAR_4,
     VAR_8);

 if (VAR_6 == VAR_7[VAR_1]) {
  if (VAR_7[VAR_0]->val != VAR_2)
   return;

  FUNC_3(&VAR_5->fled_cdev->led_cdev,
     VAR_8);
 } else {
  FUNC_3(VAR_5->iled_cdev,
     VAR_8);
 }
}
