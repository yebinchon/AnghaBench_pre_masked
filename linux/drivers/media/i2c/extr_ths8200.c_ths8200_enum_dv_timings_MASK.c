
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_enum_dv_timings {scalar_t__ pad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_enum_dv_timings*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
       struct v4l2_enum_dv_timings *VAR_3)
{
 if (VAR_3->pad != 0)
  return -VAR_0;

 return FUNC_0(VAR_3, &VAR_1,
   ((void*)0), ((void*)0));
}
