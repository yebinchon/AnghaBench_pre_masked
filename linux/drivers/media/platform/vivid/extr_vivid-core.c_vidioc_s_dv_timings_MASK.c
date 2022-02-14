
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_dir; } ;
struct v4l2_dv_timings {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct video_device* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_dv_timings*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_dv_timings*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_dv_timings *VAR_3)
{
 struct video_device *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->vfl_dir == VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
