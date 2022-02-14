
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;


 int VAR_0 ;


 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_1(VAR_1);

 switch (VAR_1->id) {
 case 129:
  FUNC_0(VAR_2, 0x04, VAR_1->val ? 0x80 : 0);
  return 0;
 case 128:
  FUNC_0(VAR_2, 0x07, ((u8)VAR_1->val) & 0x3f);
  FUNC_0(VAR_2, 0x08, ((u8)VAR_1->val) & 0x3f);
  return 0;
 }
 return -VAR_0;
}
