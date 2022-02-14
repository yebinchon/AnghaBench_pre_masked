
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings_cap {int dummy; } ;


 struct v4l2_dv_timings_cap const VAR_0 ;
 struct v4l2_dv_timings_cap const VAR_1 ;
 scalar_t__ FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static inline const struct v4l2_dv_timings_cap *
FUNC_1(struct v4l2_subdev *VAR_2)
{
 return FUNC_0(VAR_2) ? &VAR_1 :
          &VAR_0;
}
