
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_flash {struct led_classdev* iled_cdev; TYPE_1__* fled_cdev; struct v4l2_ctrl** ctrls; } ;
struct v4l2_ctrl {scalar_t__ val; } ;
struct led_classdev {int brightness; } ;
struct TYPE_2__ {struct led_classdev led_cdev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct v4l2_ctrl*,int ) ;
 scalar_t__ FUNC_1 (struct v4l2_flash*,int ,int ) ;
 scalar_t__ FUNC_2 (struct v4l2_flash*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_flash *VAR_4,
     struct v4l2_ctrl *VAR_5)
{
 struct v4l2_ctrl **VAR_6 = VAR_4->ctrls;
 struct led_classdev *VAR_7;
 int VAR_8;

 if (VAR_5 == VAR_6[VAR_1]) {






  if (VAR_6[VAR_0]->val != VAR_2)
   return 0;
  VAR_7 = &VAR_4->fled_cdev->led_cdev;
 } else {
  VAR_7 = VAR_4->iled_cdev;
 }

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (FUNC_2(VAR_4, VAR_3))
  VAR_5->val = FUNC_1(VAR_4,
      VAR_3,
      VAR_7->brightness);
 else
  VAR_5->val = FUNC_0(VAR_5,
      VAR_7->brightness);

 return 0;
}
