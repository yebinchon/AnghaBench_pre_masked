
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int dummy; } ;
struct video_device {scalar_t__ vfl_dir; } ;
struct v4l2_dv_timings_cap {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct video_device* FUNC_0 (struct file*) ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 struct v4l2_dv_timings_cap VAR_2 ;
 int FUNC_2 (struct vivid_dev*) ;
 int FUNC_3 (struct vivid_dev*) ;

int FUNC_4(struct file *VAR_3, void *VAR_4,
        struct v4l2_dv_timings_cap *VAR_5)
{
 struct vivid_dev *VAR_6 = FUNC_1(VAR_3);
 struct video_device *VAR_7 = FUNC_0(VAR_3);

 if (VAR_7->vfl_dir == VAR_1) {
  if (!FUNC_2(VAR_6))
   return -VAR_0;
 } else {
  if (!FUNC_3(VAR_6))
   return -VAR_0;
 }
 *VAR_5 = VAR_2;
 return 0;
}
