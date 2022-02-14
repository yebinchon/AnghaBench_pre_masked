
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_dv_timings*,int ,int,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_1,
  struct v4l2_dv_timings *VAR_2)
{
 FUNC_2(VAR_2, FUNC_0(VAR_1, -1),
     FUNC_1(VAR_1) ? 250000 : 1000000,
     VAR_0, ((void*)0));
}
