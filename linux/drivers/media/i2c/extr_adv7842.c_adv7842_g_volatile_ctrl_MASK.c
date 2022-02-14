
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {scalar_t__ id; int val; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;
 struct v4l2_subdev* FUNC_2 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_3)
{
 struct v4l2_subdev *VAR_4 = FUNC_2(VAR_3);

 if (VAR_3->id == VAR_1) {
  VAR_3->val = VAR_2;
  if ((FUNC_1(VAR_4, 0x60) & 1) && (FUNC_0(VAR_4, 0x03) & 0x80))
   VAR_3->val = (FUNC_0(VAR_4, 0x05) >> 4) & 3;
  return 0;
 }
 return -VAR_0;
}
