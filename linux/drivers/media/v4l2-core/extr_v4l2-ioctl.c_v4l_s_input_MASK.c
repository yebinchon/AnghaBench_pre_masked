
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct v4l2_ioctl_ops {int (* vidioc_s_input ) (struct file*,void*,unsigned int) ;} ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,void*,unsigned int) ;
 int FUNC_1 (struct video_device*) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(const struct v4l2_ioctl_ops *VAR_0,
    struct file *VAR_1, void *VAR_2, void *VAR_3)
{
 struct video_device *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;
 return VAR_0->vidioc_s_input(VAR_1, VAR_2, *(unsigned int *)VAR_3);
}
