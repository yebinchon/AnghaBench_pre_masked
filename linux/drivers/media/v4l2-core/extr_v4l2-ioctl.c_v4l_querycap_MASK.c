
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int device_caps; } ;
struct v4l2_ioctl_ops {int (* vidioc_querycap ) (struct file*,void*,struct v4l2_capability*) ;} ;
struct v4l2_capability {int device_caps; int capabilities; int version; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct file*,void*,struct v4l2_capability*) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(const struct v4l2_ioctl_ops *VAR_3,
    struct file *VAR_4, void *VAR_5, void *VAR_6)
{
 struct v4l2_capability *VAR_7 = (struct v4l2_capability *)VAR_6;
 struct video_device *VAR_8 = FUNC_2(VAR_4);
 int VAR_9;

 VAR_7->version = VAR_0;
 VAR_7->device_caps = VAR_8->device_caps;
 VAR_7->capabilities = VAR_8->device_caps | VAR_1;

 VAR_9 = VAR_3->vidioc_querycap(VAR_4, VAR_5, VAR_7);





 FUNC_0(VAR_7->device_caps != VAR_8->device_caps);




 FUNC_0((VAR_7->capabilities &
   (VAR_8->device_caps | VAR_1)) !=
  (VAR_8->device_caps | VAR_1));
 VAR_7->capabilities |= VAR_2;
 VAR_7->device_caps |= VAR_2;

 return VAR_9;
}
