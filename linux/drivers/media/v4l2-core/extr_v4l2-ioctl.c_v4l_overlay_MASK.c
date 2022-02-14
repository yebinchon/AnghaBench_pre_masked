
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ioctl_ops {int (* vidioc_overlay ) (struct file*,void*,unsigned int) ;} ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,void*,unsigned int) ;

__attribute__((used)) static int FUNC_1(const struct v4l2_ioctl_ops *VAR_0,
    struct file *VAR_1, void *VAR_2, void *VAR_3)
{
 return VAR_0->vidioc_overlay(VAR_1, VAR_2, *(unsigned int *)VAR_3);
}
