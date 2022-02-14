
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct vivid_dev {size_t input; int std_out; int * std_cap; } ;
struct video_device {scalar_t__ vfl_dir; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct video_device* FUNC_0 (struct file*) ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 int FUNC_2 (struct vivid_dev*) ;
 int FUNC_3 (struct vivid_dev*) ;

int FUNC_4(struct file *VAR_2, void *VAR_3, v4l2_std_id *VAR_4)
{
 struct vivid_dev *VAR_5 = FUNC_1(VAR_2);
 struct video_device *VAR_6 = FUNC_0(VAR_2);

 if (VAR_6->vfl_dir == VAR_1) {
  if (!FUNC_2(VAR_5))
   return -VAR_0;
  *VAR_4 = VAR_5->std_cap[VAR_5->input];
 } else {
  if (!FUNC_3(VAR_5))
   return -VAR_0;
  *VAR_4 = VAR_5->std_out;
 }
 return 0;
}
