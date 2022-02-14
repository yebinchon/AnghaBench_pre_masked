
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct ov5640_dev {scalar_t__ power_count; } ;


 int VAR_0 ;
 struct v4l2_subdev* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct ov5640_dev*,int ) ;
 int FUNC_2 (struct ov5640_dev*,int ) ;
 int FUNC_3 (struct ov5640_dev*,int ) ;
 int FUNC_4 (struct ov5640_dev*,int ) ;
 int FUNC_5 (struct ov5640_dev*,int ) ;
 int FUNC_6 (struct ov5640_dev*,int ) ;
 int FUNC_7 (struct ov5640_dev*,int ) ;
 int FUNC_8 (struct ov5640_dev*,int ) ;
 int FUNC_9 (struct ov5640_dev*,int ) ;
 int FUNC_10 (struct ov5640_dev*,int ) ;
 struct ov5640_dev* FUNC_11 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_12(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_0(VAR_1);
 struct ov5640_dev *VAR_3 = FUNC_11(VAR_2);
 int VAR_4;
 if (VAR_3->power_count == 0)
  return 0;

 switch (VAR_1->id) {
 case 137:
  VAR_4 = FUNC_3(VAR_3, VAR_1->val);
  break;
 case 134:
  VAR_4 = FUNC_2(VAR_3, VAR_1->val);
  break;
 case 136:
  VAR_4 = FUNC_10(VAR_3, VAR_1->val);
  break;
 case 132:
  VAR_4 = FUNC_5(VAR_3, VAR_1->val);
  break;
 case 135:
  VAR_4 = FUNC_1(VAR_3, VAR_1->val);
  break;
 case 130:
  VAR_4 = FUNC_7(VAR_3, VAR_1->val);
  break;
 case 129:
  VAR_4 = FUNC_8(VAR_3, VAR_1->val);
  break;
 case 131:
  VAR_4 = FUNC_6(VAR_3, VAR_1->val);
  break;
 case 133:
  VAR_4 = FUNC_4(VAR_3, VAR_1->val);
  break;
 case 128:
  VAR_4 = FUNC_9(VAR_3, VAR_1->val);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
