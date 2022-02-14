
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int val; int id; } ;
struct s5k6aa {scalar_t__ power; int lock; TYPE_1__* preset; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct s5k6aa*,int) ;
 int FUNC_5 (struct s5k6aa*,int) ;
 int FUNC_6 (struct s5k6aa*,int) ;
 int FUNC_7 (struct s5k6aa*,int) ;
 int FUNC_8 (struct s5k6aa*,int) ;
 int FUNC_9 (struct i2c_client*,int ,int) ;
 struct s5k6aa* FUNC_10 (struct v4l2_subdev*) ;
 int FUNC_11 (int,int ,struct v4l2_subdev*,char*,int ,int) ;
 struct i2c_client* FUNC_12 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_13(struct v4l2_ctrl *VAR_6)
{
 struct v4l2_subdev *VAR_7 = FUNC_1(VAR_6);
 struct i2c_client *VAR_8 = FUNC_12(VAR_7);
 struct s5k6aa *VAR_9 = FUNC_10(VAR_7);
 int VAR_10, VAR_11 = 0;

 FUNC_11(1, VAR_5, VAR_7, "ctrl: 0x%x, value: %d\n", VAR_6->id, VAR_6->val);

 FUNC_2(&VAR_9->lock);





 if (VAR_9->power == 0)
  goto unlock;
 VAR_10 = VAR_9->preset->index;

 switch (VAR_6->id) {
 case 137:
  VAR_11 = FUNC_6(VAR_9, VAR_6->val);
  break;

 case 136:
  VAR_11 = FUNC_9(VAR_8, VAR_1, VAR_6->val);
  break;

 case 135:
  VAR_11 = FUNC_7(VAR_9, VAR_6->val);
  break;

 case 134:
  VAR_11 = FUNC_9(VAR_8, VAR_2, VAR_6->val);
  break;

 case 133:
  VAR_11 = FUNC_5(VAR_9, VAR_6->val);
  break;

 case 132:
  VAR_11 = FUNC_8(VAR_9, VAR_6->val);
  if (VAR_11)
   break;
  VAR_11 = FUNC_9(VAR_8, VAR_0, 1);
  break;

 case 131:
  VAR_11 = FUNC_4(VAR_9, VAR_6->val);
  break;

 case 130:
  VAR_11 = FUNC_9(VAR_8, VAR_3, VAR_6->val);
  break;

 case 129:
  VAR_11 = FUNC_9(VAR_8, VAR_4, VAR_6->val);
  break;

 case 128:
  VAR_11 = FUNC_9(VAR_8, FUNC_0(VAR_10), VAR_6->val);
  if (VAR_11)
   break;
  VAR_11 = FUNC_9(VAR_8, VAR_0, 1);
  break;
 }
unlock:
 FUNC_3(&VAR_9->lock);
 return VAR_11;
}
