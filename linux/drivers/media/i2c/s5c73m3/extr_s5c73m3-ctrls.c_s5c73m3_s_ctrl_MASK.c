
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int val; int flags; int id; int name; } ;
struct s5c73m3 {scalar_t__ power; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct v4l2_subdev* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct s5c73m3*,struct v4l2_ctrl*) ;
 int VAR_4 ;
 int FUNC_4 (struct s5c73m3*,int ,int) ;
 int FUNC_5 (struct s5c73m3*,int) ;
 int FUNC_6 (struct s5c73m3*,int) ;
 int FUNC_7 (struct s5c73m3*,int) ;
 int FUNC_8 (struct s5c73m3*,int) ;
 int FUNC_9 (struct s5c73m3*,int) ;
 int FUNC_10 (struct s5c73m3*,int) ;
 int FUNC_11 (struct s5c73m3*,int) ;
 int FUNC_12 (struct s5c73m3*,int) ;
 int FUNC_13 (struct s5c73m3*,int) ;
 int FUNC_14 (struct s5c73m3*,int) ;
 int FUNC_15 (struct s5c73m3*,int) ;
 int FUNC_16 (struct s5c73m3*,int) ;
 struct s5c73m3* FUNC_17 (struct v4l2_subdev*) ;
 int FUNC_18 (int,int ,struct v4l2_subdev*,char*,int ,int) ;

__attribute__((used)) static int FUNC_19(struct v4l2_ctrl *VAR_5)
{
 struct v4l2_subdev *VAR_6 = FUNC_0(VAR_5);
 struct s5c73m3 *VAR_7 = FUNC_17(VAR_6);
 int VAR_8 = 0;

 FUNC_18(1, VAR_4, VAR_6, "set_ctrl: %s, value: %d\n",
   VAR_5->name, VAR_5->val);

 FUNC_1(&VAR_7->lock);





 if (VAR_7->power == 0)
  goto unlock;

 if (VAR_5->flags & VAR_3) {
  VAR_8 = -VAR_2;
  goto unlock;
 }

 switch (VAR_5->id) {
 case 142:
  VAR_8 = FUNC_3(VAR_7, VAR_5);
  break;

 case 141:
  VAR_8 = FUNC_16(VAR_7, VAR_5->val);
  break;

 case 139:
  VAR_8 = FUNC_7(VAR_7, VAR_5->val);
  break;

 case 140:
  VAR_8 = FUNC_6(VAR_7, VAR_5->val);
  break;

 case 138:
  VAR_8 = FUNC_8(VAR_7, VAR_5->val);
  break;

 case 137:
  VAR_8 = FUNC_5(VAR_7, VAR_5->val);
  break;

 case 136:
  VAR_8 = FUNC_15(VAR_7, VAR_5->val);
  break;

 case 135:
  VAR_8 = FUNC_9(VAR_7, VAR_5->val);
  break;

 case 134:
  VAR_8 = FUNC_10(VAR_7, VAR_5->val);
  break;

 case 133:
  VAR_8 = FUNC_11(VAR_7, VAR_5->val);
  break;

 case 132:
  VAR_8 = FUNC_12(VAR_7, VAR_5->val);
  break;

 case 131:
  VAR_8 = FUNC_13(VAR_7, VAR_5->val);
  break;

 case 130:
  VAR_8 = FUNC_14(VAR_7, VAR_5->val);
  break;

 case 129:
  VAR_8 = FUNC_4(VAR_7, VAR_0, !!VAR_5->val);
  break;

 case 128:
  VAR_8 = FUNC_4(VAR_7, VAR_1, VAR_5->val);
  break;
 }
unlock:
 FUNC_2(&VAR_7->lock);
 return VAR_8;
}
