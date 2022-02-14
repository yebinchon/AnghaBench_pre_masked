
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; int name; } ;
struct ov965x {scalar_t__ power; int lock; } ;


 int VAR_0 ;
 struct v4l2_subdev* FUNC_0 (struct v4l2_ctrl*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ov965x*,int ) ;
 int FUNC_4 (struct ov965x*,int ) ;
 int FUNC_5 (struct ov965x*,int ) ;
 int FUNC_6 (struct ov965x*) ;
 int FUNC_7 (struct ov965x*,int ) ;
 int FUNC_8 (struct ov965x*,int ) ;
 int FUNC_9 (struct ov965x*,int ) ;
 int FUNC_10 (struct ov965x*,int ) ;
 int FUNC_11 (struct ov965x*,int ) ;
 struct ov965x* FUNC_12 (struct v4l2_subdev*) ;
 int FUNC_13 (int,int ,struct v4l2_subdev*,char*,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct v4l2_ctrl *VAR_2)
{
 struct v4l2_subdev *VAR_3 = FUNC_0(VAR_2);
 struct ov965x *VAR_4 = FUNC_12(VAR_3);
 int VAR_5 = -VAR_0;

 FUNC_13(1, VAR_1, VAR_3, "s_ctrl: %s, value: %d. power: %d\n",
   VAR_2->name, VAR_2->val, VAR_4->power);

 FUNC_1(&VAR_4->lock);




 if (VAR_4->power == 0) {
  FUNC_2(&VAR_4->lock);
  return 0;
 }

 switch (VAR_2->id) {
 case 135:
  VAR_5 = FUNC_11(VAR_4, VAR_2->val);
  break;

 case 134:
  VAR_5 = FUNC_4(VAR_4, VAR_2->val);
  break;

 case 133:
  VAR_5 = FUNC_5(VAR_4, VAR_2->val);
  break;

 case 136:
  VAR_5 = FUNC_7(VAR_4, VAR_2->val);
  break;

 case 132:
  VAR_5 = FUNC_6(VAR_4);
  break;

 case 131:
  VAR_5 = FUNC_3(VAR_4, VAR_2->val);
  break;

 case 130:
  VAR_5 = FUNC_8(VAR_4, VAR_2->val);
  break;

 case 129:
  VAR_5 = FUNC_9(VAR_4, VAR_2->val);
  break;

 case 128:
  VAR_5 = FUNC_10(VAR_4, VAR_2->val);
  break;
 }

 FUNC_2(&VAR_4->lock);
 return VAR_5;
}
