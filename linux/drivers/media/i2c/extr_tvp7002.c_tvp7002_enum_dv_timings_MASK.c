
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_enum_dv_timings {scalar_t__ pad; size_t index; int timings; } ;
struct TYPE_2__ {int timings; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_3,
  struct v4l2_enum_dv_timings *VAR_4)
{
 if (VAR_4->pad != 0)
  return -VAR_0;


 if (VAR_4->index >= VAR_1)
  return -VAR_0;

 VAR_4->timings = VAR_2[VAR_4->index].timings;
 return 0;
}
