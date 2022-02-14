
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_bt_timings {int standards; } ;
struct v4l2_dv_timings {struct v4l2_bt_timings bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct v4l2_dv_timings*,int *,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_1(struct v4l2_dv_timings *VAR_3)
{
 struct v4l2_bt_timings *VAR_4 = &VAR_3->bt;

 if ((VAR_4->standards & (VAR_0 | VAR_1)) &&
     FUNC_0(VAR_3, &VAR_2, ((void*)0), ((void*)0)))
  return 1;

 return 0;
}
