
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct v4l2_tuner {int capability; int type; } ;
struct v4l2_ioctl_ops {int (* vidioc_g_tuner ) (struct file*,void*,struct v4l2_tuner*) ;} ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct file*,void*,struct v4l2_tuner*) ;
 struct video_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(const struct v4l2_ioctl_ops *VAR_4,
    struct file *VAR_5, void *VAR_6, void *VAR_7)
{
 struct video_device *VAR_8 = FUNC_1(VAR_5);
 struct v4l2_tuner *VAR_9 = VAR_7;
 int VAR_10;

 VAR_9->type = (VAR_8->vfl_type == VAR_3) ?
   VAR_2 : VAR_0;
 VAR_10 = VAR_4->vidioc_g_tuner(VAR_5, VAR_6, VAR_9);
 if (!VAR_10)
  VAR_9->capability |= VAR_1;
 return VAR_10;
}
