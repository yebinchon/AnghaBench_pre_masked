
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct video_device {int tvnorms; } ;
struct v4l2_ioctl_ops {int (* vidioc_querystd ) (struct file*,void*,void*) ;} ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,void*,void*) ;
 int FUNC_1 (struct video_device*) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(const struct v4l2_ioctl_ops *VAR_0,
    struct file *VAR_1, void *VAR_2, void *VAR_3)
{
 struct video_device *VAR_4 = FUNC_2(VAR_1);
 v4l2_std_id *VAR_5 = VAR_3;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  return VAR_6;
 *VAR_5 = VAR_4->tvnorms;
 return VAR_0->vidioc_querystd(VAR_1, VAR_2, VAR_3);
}
