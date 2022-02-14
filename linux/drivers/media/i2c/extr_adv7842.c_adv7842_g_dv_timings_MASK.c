
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings {int dummy; } ;
struct adv7842_state {scalar_t__ mode; struct v4l2_dv_timings timings; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct adv7842_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
    struct v4l2_dv_timings *VAR_3)
{
 struct adv7842_state *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->mode == VAR_0)
  return -VAR_1;
 *VAR_3 = VAR_4->timings;
 return 0;
}
