
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ioctl_ops {int (* vidioc_unsubscribe_event ) (void*,void*) ;} ;
struct file {int dummy; } ;


 int FUNC_0 (void*,void*) ;

__attribute__((used)) static int FUNC_1(const struct v4l2_ioctl_ops *VAR_0,
    struct file *VAR_1, void *VAR_2, void *VAR_3)
{
 return VAR_0->vidioc_unsubscribe_event(VAR_2, VAR_3);
}
