
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_enum_dv_timings {size_t index; scalar_t__ pad; int timings; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
         struct v4l2_enum_dv_timings *VAR_3)
{
 if (VAR_3->index >= FUNC_0(VAR_1))
  return -VAR_0;

 if (VAR_3->pad != 0)
  return -VAR_0;

 VAR_3->timings = VAR_1[VAR_3->index];
 return 0;
}
