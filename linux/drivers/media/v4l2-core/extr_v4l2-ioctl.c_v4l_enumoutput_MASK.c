
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct v4l2_output {int capabilities; } ;
struct v4l2_ioctl_ops {int (* vidioc_enum_output ) (struct file*,void*,struct v4l2_output*) ;} ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct video_device*,int ) ;
 int FUNC_1 (struct file*,void*,struct v4l2_output*) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(const struct v4l2_ioctl_ops *VAR_2,
    struct file *VAR_3, void *VAR_4, void *VAR_5)
{
 struct video_device *VAR_6 = FUNC_2(VAR_3);
 struct v4l2_output *VAR_7 = VAR_5;







 if (FUNC_0(VAR_6, VAR_1))
  VAR_7->capabilities |= VAR_0;

 return VAR_2->vidioc_enum_output(VAR_3, VAR_4, VAR_7);
}
