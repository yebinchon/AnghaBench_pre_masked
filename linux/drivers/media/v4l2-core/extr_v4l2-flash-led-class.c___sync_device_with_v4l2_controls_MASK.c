
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_flash {struct v4l2_ctrl** ctrls; struct led_classdev_flash* fled_cdev; } ;
struct v4l2_ctrl {scalar_t__ val; } ;
struct led_classdev_flash {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct v4l2_flash*,int ,scalar_t__) ;
 int VAR_7 ;
 int FUNC_1 (struct led_classdev_flash*,scalar_t__) ;
 int FUNC_2 (struct led_classdev_flash*,scalar_t__) ;
 int FUNC_3 (struct v4l2_flash*,struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_flash *VAR_8)
{
 struct led_classdev_flash *VAR_9 = VAR_8->fled_cdev;
 struct v4l2_ctrl **VAR_10 = VAR_8->ctrls;
 int VAR_11 = 0;

 if (VAR_10[VAR_5])
  FUNC_3(VAR_8,
           VAR_10[VAR_5]);

 if (VAR_10[VAR_2])
  FUNC_3(VAR_8,
      VAR_10[VAR_2]);

 if (VAR_10[VAR_1]) {
  VAR_11 = FUNC_2(VAR_9,
     VAR_10[VAR_1]->val);
  if (VAR_11 < 0)
   return VAR_11;
 }

 if (VAR_10[VAR_0]) {
  VAR_11 = FUNC_1(VAR_9,
     VAR_10[VAR_0]->val);
  if (VAR_11 < 0)
   return VAR_11;
 }







 if (VAR_10[VAR_4] &&
     VAR_10[VAR_3]->val != VAR_6)
  VAR_11 = FUNC_0(VAR_8, VAR_7,
     VAR_10[VAR_4]->val);

 return VAR_11;
}
