
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct tvp5150 {int enable; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int ,int ,int ) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;
 struct tvp5150* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_5)
{
 struct v4l2_subdev *VAR_6 = FUNC_1(VAR_5);
 struct tvp5150 *VAR_7 = FUNC_2(VAR_6);

 switch (VAR_5->id) {
 case 132:
  FUNC_0(VAR_7->regmap, VAR_1, VAR_5->val);
  return 0;
 case 131:
  FUNC_0(VAR_7->regmap, VAR_2, VAR_5->val);
  return 0;
 case 129:
  FUNC_0(VAR_7->regmap, VAR_4,
        VAR_5->val);
  return 0;
 case 130:
  FUNC_0(VAR_7->regmap, VAR_3, VAR_5->val);
  return 0;
 case 128:
  VAR_7->enable = VAR_5->val ? 0 : 1;
  FUNC_3(VAR_6);
  return 0;
 }
 return -VAR_0;
}
