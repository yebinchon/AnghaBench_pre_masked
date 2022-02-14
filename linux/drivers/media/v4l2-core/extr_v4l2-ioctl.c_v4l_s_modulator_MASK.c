
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct v4l2_modulator {int type; } ;
struct v4l2_ioctl_ops {int (* vidioc_s_modulator ) (struct file*,void*,struct v4l2_modulator*) ;} ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct file*,void*,struct v4l2_modulator*) ;
 struct video_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(const struct v4l2_ioctl_ops *VAR_2,
    struct file *VAR_3, void *VAR_4, void *VAR_5)
{
 struct video_device *VAR_6 = FUNC_1(VAR_3);
 struct v4l2_modulator *VAR_7 = VAR_5;

 if (VAR_6->vfl_type == VAR_1)
  VAR_7->type = VAR_0;

 return VAR_2->vidioc_s_modulator(VAR_3, VAR_4, VAR_7);
}
