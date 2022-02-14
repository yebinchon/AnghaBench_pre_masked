
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ioctl_ops {int (* vidioc_querybuf ) (struct file*,void*,struct v4l2_buffer*) ;} ;
struct v4l2_buffer {int type; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,int ) ;
 int FUNC_1 (struct file*,void*,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_2(const struct v4l2_ioctl_ops *VAR_0,
    struct file *VAR_1, void *VAR_2, void *VAR_3)
{
 struct v4l2_buffer *VAR_4 = VAR_3;
 int VAR_5 = FUNC_0(VAR_1, VAR_4->type);

 return VAR_5 ? VAR_5 : VAR_0->vidioc_querybuf(VAR_1, VAR_2, VAR_4);
}
