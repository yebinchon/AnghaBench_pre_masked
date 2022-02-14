
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int val; int id; } ;
struct adv7180_state {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_0 (struct adv7180_state*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct v4l2_subdev* FUNC_3 (struct v4l2_ctrl*) ;
 struct adv7180_state* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_ctrl *VAR_8)
{
 struct v4l2_subdev *VAR_9 = FUNC_3(VAR_8);
 struct adv7180_state *VAR_10 = FUNC_4(VAR_9);
 int VAR_11 = FUNC_1(&VAR_10->mutex);
 int VAR_12;

 if (VAR_11)
  return VAR_11;
 VAR_12 = VAR_8->val;
 switch (VAR_8->id) {
 case 131:
  VAR_11 = FUNC_0(VAR_10, VAR_1, VAR_12);
  break;
 case 129:

  VAR_11 = FUNC_0(VAR_10, VAR_4, -VAR_12);
  break;
 case 130:
  VAR_11 = FUNC_0(VAR_10, VAR_2, VAR_12);
  break;
 case 128:




  VAR_11 = FUNC_0(VAR_10, VAR_5, VAR_12);
  if (VAR_11 < 0)
   break;
  VAR_11 = FUNC_0(VAR_10, VAR_6, VAR_12);
  break;
 case 132:
  if (VAR_8->val) {

   FUNC_0(VAR_10, 0x80d9, 0x44);
   FUNC_0(VAR_10, VAR_3,
    VAR_0);
  } else {

   FUNC_0(VAR_10, 0x80d9, 0xc4);
   FUNC_0(VAR_10, VAR_3, 0x00);
  }
  break;
 default:
  VAR_11 = -VAR_7;
 }

 FUNC_2(&VAR_10->mutex);
 return VAR_11;
}
