
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov7670_info {int on; int hdl; } ;


 int FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*) ;
 struct ov7670_info* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct ov7670_info *VAR_2 = FUNC_5(VAR_0);

 if (VAR_2->on == VAR_1)
  return 0;

 if (VAR_1) {
  FUNC_3 (VAR_0);
  FUNC_1(VAR_0, 0);
  FUNC_0(VAR_0);
  FUNC_4(VAR_0);
  FUNC_6(&VAR_2->hdl);
 } else {
  FUNC_2 (VAR_0);
 }

 return 0;
}
