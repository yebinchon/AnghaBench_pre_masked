
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings {int dummy; } ;
struct TYPE_2__ {struct v4l2_dv_timings timings; } ;


 int FUNC_0 (struct v4l2_subdev*,int*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
     struct v4l2_dv_timings *VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_0(VAR_1, &VAR_3);

 if (VAR_4)
  return VAR_4;
 *VAR_2 = VAR_0[VAR_3].timings;
 return 0;
}
