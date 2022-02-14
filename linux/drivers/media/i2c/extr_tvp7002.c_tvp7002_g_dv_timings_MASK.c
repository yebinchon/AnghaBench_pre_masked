
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings {int dummy; } ;
struct tvp7002 {TYPE_1__* current_timings; } ;
struct TYPE_2__ {struct v4l2_dv_timings timings; } ;


 struct tvp7002* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0,
     struct v4l2_dv_timings *VAR_1)
{
 struct tvp7002 *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->current_timings->timings;
 return 0;
}
