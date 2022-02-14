
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ ctrl_handler; int flags; } ;
struct v4l2_ioctl_ops {int (* vidioc_s_ctrl ) (struct file*,void*,struct v4l2_control*) ;int (* vidioc_s_ext_ctrls ) (struct file*,void*,struct v4l2_ext_controls*) ;} ;
struct v4l2_fh {scalar_t__ ctrl_handler; } ;
struct v4l2_ext_controls {int count; struct v4l2_ext_control* controls; int which; } ;
struct v4l2_ext_control {int value; int id; } ;
struct v4l2_control {int value; int id; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct v4l2_ext_controls*,int) ;
 int FUNC_2 (struct file*,void*,struct v4l2_control*) ;
 int FUNC_3 (struct file*,void*,struct v4l2_ext_controls*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct v4l2_fh*,scalar_t__,struct v4l2_control*) ;
 struct video_device* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(const struct v4l2_ioctl_ops *VAR_3,
    struct file *VAR_4, void *VAR_5, void *VAR_6)
{
 struct video_device *VAR_7 = FUNC_6(VAR_4);
 struct v4l2_control *VAR_8 = VAR_6;
 struct v4l2_fh *VAR_9 =
  FUNC_4(VAR_2, &VAR_7->flags) ? VAR_5 : ((void*)0);
 struct v4l2_ext_controls VAR_10;
 struct v4l2_ext_control VAR_11;

 if (VAR_9 && VAR_9->ctrl_handler)
  return FUNC_5(VAR_9, VAR_9->ctrl_handler, VAR_8);
 if (VAR_7->ctrl_handler)
  return FUNC_5(((void*)0), VAR_7->ctrl_handler, VAR_8);
 if (VAR_3->vidioc_s_ctrl)
  return VAR_3->vidioc_s_ctrl(VAR_4, VAR_5, VAR_8);
 if (VAR_3->vidioc_s_ext_ctrls == ((void*)0))
  return -VAR_1;

 VAR_10.which = FUNC_0(VAR_8->id);
 VAR_10.count = 1;
 VAR_10.controls = &VAR_11;
 VAR_11.id = VAR_8->id;
 VAR_11.value = VAR_8->value;
 if (FUNC_1(&VAR_10, 1))
  return VAR_3->vidioc_s_ext_ctrls(VAR_4, VAR_5, &VAR_10);
 return -VAR_0;
}
