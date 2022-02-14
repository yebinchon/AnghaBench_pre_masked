
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct video_device {int tvnorms; } ;
struct v4l2_ioctl_ops {int (* vidioc_s_std ) (struct file*,void*,int) ;} ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,void*,int) ;
 int FUNC_1 (struct video_device*) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(const struct v4l2_ioctl_ops *VAR_1,
    struct file *VAR_2, void *VAR_3, void *VAR_4)
{
 struct video_device *VAR_5 = FUNC_2(VAR_2);
 v4l2_std_id VAR_6 = *(v4l2_std_id *)VAR_4, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8)
  return VAR_8;
 VAR_7 = VAR_6 & VAR_5->tvnorms;
 if (VAR_5->tvnorms && !VAR_7)
  return -VAR_0;


 return VAR_1->vidioc_s_std(VAR_2, VAR_3, VAR_7);
}
