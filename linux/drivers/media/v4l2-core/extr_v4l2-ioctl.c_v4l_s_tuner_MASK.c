
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct v4l2_tuner {int type; } ;
struct v4l2_ioctl_ops {int (* vidioc_s_tuner ) (struct file*,void*,struct v4l2_tuner*) ;} ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct file*,void*,struct v4l2_tuner*) ;
 int FUNC_1 (struct video_device*) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(const struct v4l2_ioctl_ops *VAR_3,
    struct file *VAR_4, void *VAR_5, void *VAR_6)
{
 struct video_device *VAR_7 = FUNC_2(VAR_4);
 struct v4l2_tuner *VAR_8 = VAR_6;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9)
  return VAR_9;
 VAR_8->type = (VAR_7->vfl_type == VAR_2) ?
   VAR_1 : VAR_0;
 return VAR_3->vidioc_s_tuner(VAR_4, VAR_5, VAR_8);
}
