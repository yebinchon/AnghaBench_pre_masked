
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {TYPE_1__* v4l2_dev; } ;
struct v4l2_ioctl_ops {int (* vidioc_log_status ) (struct file*,void*) ;} ;
struct file {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct file*,void*) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(const struct v4l2_ioctl_ops *VAR_0,
    struct file *VAR_1, void *VAR_2, void *VAR_3)
{
 struct video_device *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 if (VAR_4->v4l2_dev)
  FUNC_0("%s: =================  START STATUS  =================\n",
   VAR_4->v4l2_dev->name);
 VAR_5 = VAR_0->vidioc_log_status(VAR_1, VAR_2);
 if (VAR_4->v4l2_dev)
  FUNC_0("%s: ==================  END STATUS  ==================\n",
   VAR_4->v4l2_dev->name);
 return VAR_5;
}
