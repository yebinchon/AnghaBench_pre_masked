
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct v4l2_ioctl_ops {int (* vidioc_s_frequency ) (struct file*,void*,struct v4l2_frequency const*) ;} ;
struct v4l2_frequency {scalar_t__ type; } ;
struct file {int dummy; } ;
typedef enum v4l2_tuner_type { ____Placeholder_v4l2_tuner_type } v4l2_tuner_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct file*,void*,struct v4l2_frequency const*) ;
 int FUNC_1 (struct video_device*) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(const struct v4l2_ioctl_ops *VAR_7,
    struct file *VAR_8, void *VAR_9, void *VAR_10)
{
 struct video_device *VAR_11 = FUNC_2(VAR_8);
 const struct v4l2_frequency *VAR_12 = VAR_10;
 enum v4l2_tuner_type VAR_13;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_11);
 if (VAR_14)
  return VAR_14;
 if (VAR_11->vfl_type == VAR_6) {
  if (VAR_12->type != VAR_4 && VAR_12->type != VAR_3)
   return -VAR_0;
 } else {
  VAR_13 = (VAR_11->vfl_type == VAR_5) ?
    VAR_2 : VAR_1;
  if (VAR_13 != VAR_12->type)
   return -VAR_0;
 }
 return VAR_7->vidioc_s_frequency(VAR_8, VAR_9, VAR_12);
}
