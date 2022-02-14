
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct v4l2_ioctl_ops {int (* vidioc_s_hw_freq_seek ) (struct file*,void*,struct v4l2_hw_freq_seek*) ;} ;
struct v4l2_hw_freq_seek {int type; } ;
struct file {int dummy; } ;
typedef enum v4l2_tuner_type { ____Placeholder_v4l2_tuner_type } v4l2_tuner_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct file*,void*,struct v4l2_hw_freq_seek*) ;
 int FUNC_1 (struct video_device*) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(const struct v4l2_ioctl_ops *VAR_5,
    struct file *VAR_6, void *VAR_7, void *VAR_8)
{
 struct video_device *VAR_9 = FUNC_2(VAR_6);
 struct v4l2_hw_freq_seek *VAR_10 = VAR_8;
 enum v4l2_tuner_type VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_9);
 if (VAR_12)
  return VAR_12;

 if (VAR_9->vfl_type == VAR_4)
  return -VAR_0;

 VAR_11 = (VAR_9->vfl_type == VAR_3) ?
  VAR_2 : VAR_1;
 if (VAR_10->type != VAR_11)
  return -VAR_0;
 return VAR_5->vidioc_s_hw_freq_seek(VAR_6, VAR_7, VAR_10);
}
