
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {TYPE_1__* v4l2_dev; scalar_t__ ctrl_handler; int flags; } ;
struct v4l2_ioctl_ops {int (* vidioc_s_ext_ctrls ) (struct file*,void*,struct v4l2_ext_controls*) ;} ;
struct v4l2_fh {scalar_t__ ctrl_handler; } ;
struct v4l2_ext_controls {int count; int error_idx; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct v4l2_ext_controls*,int ) ;
 int FUNC_1 (struct file*,void*,struct v4l2_ext_controls*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct v4l2_fh*,scalar_t__,struct video_device*,int ,struct v4l2_ext_controls*) ;
 struct video_device* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(const struct v4l2_ioctl_ops *VAR_3,
    struct file *VAR_4, void *VAR_5, void *VAR_6)
{
 struct video_device *VAR_7 = FUNC_4(VAR_4);
 struct v4l2_ext_controls *VAR_8 = VAR_6;
 struct v4l2_fh *VAR_9 =
  FUNC_2(VAR_2, &VAR_7->flags) ? VAR_5 : ((void*)0);

 VAR_8->error_idx = VAR_8->count;
 if (VAR_9 && VAR_9->ctrl_handler)
  return FUNC_3(VAR_9, VAR_9->ctrl_handler,
     VAR_7, VAR_7->v4l2_dev->mdev, VAR_8);
 if (VAR_7->ctrl_handler)
  return FUNC_3(((void*)0), VAR_7->ctrl_handler,
     VAR_7, VAR_7->v4l2_dev->mdev, VAR_8);
 if (VAR_3->vidioc_s_ext_ctrls == ((void*)0))
  return -VAR_1;
 return FUNC_0(VAR_8, 0) ? VAR_3->vidioc_s_ext_ctrls(VAR_4, VAR_5, VAR_8) :
     -VAR_0;
}
