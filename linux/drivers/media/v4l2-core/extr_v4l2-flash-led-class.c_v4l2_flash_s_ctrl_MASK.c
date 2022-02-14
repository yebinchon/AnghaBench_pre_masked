
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_flash {struct v4l2_ctrl** ctrls; struct led_classdev_flash* fled_cdev; } ;
struct v4l2_ctrl {int id; int const val; } ;
struct led_classdev {int dummy; } ;
struct led_classdev_flash {struct led_classdev led_cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int const VAR_6 ;
 int FUNC_0 (struct v4l2_ctrl**) ;
 int FUNC_1 (struct v4l2_flash*,int ,int) ;
 int VAR_7 ;
 int FUNC_2 (struct led_classdev*,int ) ;
 int FUNC_3 (struct led_classdev_flash*,int const) ;
 int FUNC_4 (struct led_classdev_flash*,int) ;
 int FUNC_5 (struct led_classdev_flash*,int const) ;
 struct v4l2_flash* FUNC_6 (struct v4l2_ctrl*) ;
 int FUNC_7 (struct v4l2_flash*,struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_ctrl *VAR_8)
{
 struct v4l2_flash *VAR_9 = FUNC_6(VAR_8);
 struct led_classdev_flash *VAR_10 = VAR_9->fled_cdev;
 struct led_classdev *VAR_11 = VAR_10 ? &VAR_10->led_cdev : ((void*)0);
 struct v4l2_ctrl **VAR_12 = VAR_9->ctrls;
 bool VAR_13;
 int VAR_14 = 0;

 switch (VAR_8->id) {
 case 136:
  switch (VAR_8->val) {
  case 129:
   FUNC_2(VAR_11, VAR_3);
   return FUNC_4(VAR_10, 0);
  case 130:

   FUNC_2(VAR_11, VAR_3);
   if (VAR_12[VAR_4]) {
    VAR_13 = (VAR_12[VAR_4]->val ==
     VAR_6);

    VAR_14 = FUNC_1(VAR_9,
      VAR_7,
      VAR_13);
   }
   return VAR_14;
  case 128:
   if (VAR_12[VAR_4]) {
    VAR_14 = FUNC_1(VAR_9,
      VAR_7,
      0);
    if (VAR_14 < 0)
     return VAR_14;
   }

   VAR_14 = FUNC_4(VAR_10, 0);
   if (VAR_14 < 0)
    return VAR_14;

   FUNC_7(VAR_9,
       VAR_12[VAR_5]);
   return 0;
  }
  break;
 case 134:
  VAR_13 = (VAR_8->val == VAR_6);






  if (VAR_12[VAR_2]->val != 130)
   return 0;

  return FUNC_1(VAR_9, VAR_7,
     VAR_13);
 case 135:
  if (FUNC_0(VAR_12))
   return -VAR_0;
  return FUNC_4(VAR_10, 1);
 case 133:
  if (FUNC_0(VAR_12))
   return -VAR_0;
  return FUNC_4(VAR_10, 0);
 case 132:




  return FUNC_5(VAR_10, VAR_8->val);
 case 137:




  return FUNC_3(VAR_10, VAR_8->val);
 case 131:
 case 138:
  FUNC_7(VAR_9, VAR_8);
  return 0;
 }

 return -VAR_1;
}
