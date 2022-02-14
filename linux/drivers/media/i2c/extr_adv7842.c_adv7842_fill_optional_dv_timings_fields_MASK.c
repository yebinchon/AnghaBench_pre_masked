
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct v4l2_dv_timings {TYPE_1__ bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_dv_timings*,int ,int,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct v4l2_subdev *VAR_2,
  struct v4l2_dv_timings *VAR_3)
{
 FUNC_2(VAR_3, FUNC_0(VAR_2),
   FUNC_1(VAR_2) ? 250000 : 1000000,
   VAR_1, ((void*)0));
 VAR_3->bt.flags |= VAR_0;
}
