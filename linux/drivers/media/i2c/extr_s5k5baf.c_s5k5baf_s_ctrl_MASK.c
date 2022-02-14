
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; int name; } ;
struct s5k5baf {scalar_t__ power; int lock; int apply_cfg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct s5k5baf*) ;
 int FUNC_5 (struct s5k5baf*,int ) ;
 int FUNC_6 (struct s5k5baf*,int ) ;
 int FUNC_7 (struct s5k5baf*,int ) ;
 int FUNC_8 (struct s5k5baf*,int ) ;
 int FUNC_9 (struct s5k5baf*) ;
 int FUNC_10 (struct s5k5baf*,int ) ;
 int FUNC_11 (struct s5k5baf*) ;
 int FUNC_12 (struct s5k5baf*,int ,int ) ;
 struct s5k5baf* FUNC_13 (struct v4l2_subdev*) ;
 int FUNC_14 (int,int ,struct v4l2_subdev*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct v4l2_ctrl *VAR_5)
{
 struct v4l2_subdev *VAR_6 = FUNC_1(VAR_5);
 struct s5k5baf *VAR_7 = FUNC_13(VAR_6);
 int VAR_8;

 FUNC_14(1, VAR_4, VAR_6, "ctrl: %s, value: %d\n", VAR_5->name, VAR_5->val);

 FUNC_2(&VAR_7->lock);

 if (VAR_7->power == 0)
  goto unlock;

 switch (VAR_5->id) {
 case 138:
  FUNC_7(VAR_7, VAR_5->val);
  break;

 case 137:
  FUNC_12(VAR_7, VAR_0, VAR_5->val);
  break;

 case 136:
  FUNC_8(VAR_7, VAR_5->val);
  break;

 case 135:
  FUNC_12(VAR_7, VAR_1, VAR_5->val);
  break;

 case 134:
  FUNC_6(VAR_7, VAR_5->val);
  break;

 case 133:
  FUNC_9(VAR_7);
  break;

 case 132:
  FUNC_5(VAR_7, VAR_5->val);
  break;

 case 131:
  FUNC_12(VAR_7, VAR_2, VAR_5->val);
  break;

 case 130:
  FUNC_12(VAR_7, VAR_3, VAR_5->val);
  break;

 case 128:
  FUNC_12(VAR_7, FUNC_0(0), VAR_5->val);
  if (VAR_7->apply_cfg)
   FUNC_11(VAR_7);
  break;

 case 129:
  FUNC_10(VAR_7, VAR_5->val);
  break;
 }
unlock:
 VAR_8 = FUNC_4(VAR_7);
 FUNC_3(&VAR_7->lock);
 return VAR_8;
}
