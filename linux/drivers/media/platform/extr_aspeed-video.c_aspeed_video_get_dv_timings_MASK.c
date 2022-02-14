
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dv_timings {int bt; int type; } ;
struct file {int dummy; } ;
struct aspeed_video {int active_timings; } ;


 int VAR_0 ;
 struct aspeed_video* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
           struct v4l2_dv_timings *VAR_3)
{
 struct aspeed_video *VAR_4 = FUNC_0(VAR_1);

 VAR_3->type = VAR_0;
 VAR_3->bt = VAR_4->active_timings;

 return 0;
}
