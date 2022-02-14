
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int dummy; } ;
struct video_device {scalar_t__ vfl_dir; } ;
struct v4l2_enum_dv_timings {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_enum_dv_timings*,int *,int *,int *) ;
 struct video_device* FUNC_1 (struct file*) ;
 struct vivid_dev* FUNC_2 (struct file*) ;
 int VAR_2 ;
 int FUNC_3 (struct vivid_dev*) ;
 int FUNC_4 (struct vivid_dev*) ;

int FUNC_5(struct file *VAR_3, void *VAR_4,
        struct v4l2_enum_dv_timings *VAR_5)
{
 struct vivid_dev *VAR_6 = FUNC_2(VAR_3);
 struct video_device *VAR_7 = FUNC_1(VAR_3);

 if (VAR_7->vfl_dir == VAR_1) {
  if (!FUNC_3(VAR_6))
   return -VAR_0;
 } else {
  if (!FUNC_4(VAR_6))
   return -VAR_0;
 }
 return FUNC_0(VAR_5, &VAR_2,
   ((void*)0), ((void*)0));
}
