
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct v4l2_ioctl_ops {int (* vidioc_g_frequency ) (struct file*,void*,struct v4l2_frequency*) ;} ;
struct v4l2_frequency {int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct file*,void*,struct v4l2_frequency*) ;
 struct video_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(const struct v4l2_ioctl_ops *VAR_5,
    struct file *VAR_6, void *VAR_7, void *VAR_8)
{
 struct video_device *VAR_9 = FUNC_1(VAR_6);
 struct v4l2_frequency *VAR_10 = VAR_8;

 if (VAR_9->vfl_type == VAR_4)
  VAR_10->type = VAR_2;
 else
  VAR_10->type = (VAR_9->vfl_type == VAR_3) ?
    VAR_1 : VAR_0;
 return VAR_5->vidioc_g_frequency(VAR_6, VAR_7, VAR_10);
}
