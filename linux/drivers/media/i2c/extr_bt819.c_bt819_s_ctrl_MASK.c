
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct bt819 {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct bt819*,int,int,int) ;
 int FUNC_1 (struct bt819*,int,int) ;
 struct bt819* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_subdev* FUNC_3 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_3(VAR_1);
 struct bt819 *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 switch (VAR_1->id) {
 case 131:
  FUNC_1(VAR_3, 0x0a, VAR_1->val);
  break;

 case 130:
  FUNC_1(VAR_3, 0x0c, VAR_1->val & 0xff);
  FUNC_0(VAR_3, 0x0b, 2, ((VAR_1->val >> 8) & 0x01));
  break;

 case 128:
  FUNC_1(VAR_3, 0x0d, (VAR_1->val >> 7) & 0xff);
  FUNC_0(VAR_3, 0x0b, 1, ((VAR_1->val >> 15) & 0x01));



  VAR_4 = (VAR_1->val * 180) / 254;
  FUNC_1(VAR_3, 0x0e, (VAR_4 >> 7) & 0xff);
  FUNC_0(VAR_3, 0x0b, 0, (VAR_4 >> 15) & 0x01);
  break;

 case 129:
  FUNC_1(VAR_3, 0x0f, VAR_1->val);
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
