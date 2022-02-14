
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings {int dummy; } ;
struct gs {struct v4l2_dv_timings current_timings; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_dv_timings*) ;
 struct gs* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
      struct v4l2_dv_timings *VAR_2)
{
 struct gs *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == 0x0)
  return -VAR_0;

 VAR_3->current_timings = *VAR_2;
 return 0;
}
