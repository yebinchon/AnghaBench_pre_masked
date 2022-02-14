
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dv_timings {int dummy; } ;
struct vivid_dev {size_t input; struct v4l2_dv_timings dv_timings_out; struct v4l2_dv_timings* dv_timings_cap; } ;
struct video_device {scalar_t__ vfl_dir; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct video_device* FUNC_0 (struct file*) ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 int FUNC_2 (struct vivid_dev*) ;
 int FUNC_3 (struct vivid_dev*) ;

int FUNC_4(struct file *VAR_2, void *VAR_3,
        struct v4l2_dv_timings *VAR_4)
{
 struct vivid_dev *VAR_5 = FUNC_1(VAR_2);
 struct video_device *VAR_6 = FUNC_0(VAR_2);

 if (VAR_6->vfl_dir == VAR_1) {
  if (!FUNC_2(VAR_5))
   return -VAR_0;
  *VAR_4 = VAR_5->dv_timings_cap[VAR_5->input];
 } else {
  if (!FUNC_3(VAR_5))
   return -VAR_0;
  *VAR_4 = VAR_5->dv_timings_out;
 }
 return 0;
}
