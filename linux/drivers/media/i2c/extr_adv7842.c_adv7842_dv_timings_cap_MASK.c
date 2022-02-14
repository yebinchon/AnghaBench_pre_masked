
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings_cap {scalar_t__ pad; } ;


 int VAR_0 ;
 struct v4l2_dv_timings_cap* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
      struct v4l2_dv_timings_cap *VAR_2)
{
 if (VAR_2->pad != 0)
  return -VAR_0;

 *VAR_2 = *FUNC_0(VAR_1);
 return 0;
}
