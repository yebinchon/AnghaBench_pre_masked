
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct v4l2_modulator {int capability; int type; } ;
struct v4l2_ioctl_ops {int (* vidioc_g_modulator ) (struct file*,void*,struct v4l2_modulator*) ;} ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct file*,void*,struct v4l2_modulator*) ;
 struct video_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(const struct v4l2_ioctl_ops *VAR_3,
    struct file *VAR_4, void *VAR_5, void *VAR_6)
{
 struct video_device *VAR_7 = FUNC_1(VAR_4);
 struct v4l2_modulator *VAR_8 = VAR_6;
 int VAR_9;

 if (VAR_7->vfl_type == VAR_2)
  VAR_8->type = VAR_1;

 VAR_9 = VAR_3->vidioc_g_modulator(VAR_4, VAR_5, VAR_8);
 if (!VAR_9)
  VAR_8->capability |= VAR_0;
 return VAR_9;
}
