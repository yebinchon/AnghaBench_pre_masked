
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct video_device {struct v4l2_ctrl_handler* ctrl_handler; int flags; struct v4l2_ioctl_ops* ioctl_ops; } ;
struct v4l2_query_ext_ctrl {int flags; int member_0; } ;
struct v4l2_ioctl_ops {int (* vidioc_query_ext_ctrl ) (struct file*,struct v4l2_fh*,struct v4l2_query_ext_ctrl*) ;} ;
struct v4l2_fh {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {scalar_t__ is_ptr; } ;
struct file {struct v4l2_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,struct v4l2_fh*,struct v4l2_query_ext_ctrl*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 struct v4l2_ctrl* FUNC_2 (struct v4l2_ctrl_handler*,int ) ;
 struct video_device* FUNC_3 (struct file*) ;

__attribute__((used)) static inline bool FUNC_4(struct file *VAR_2, u32 VAR_3)
{
 struct video_device *VAR_4 = FUNC_3(VAR_2);
 struct v4l2_fh *VAR_5 = ((void*)0);
 struct v4l2_ctrl_handler *VAR_6 = ((void*)0);
 struct v4l2_query_ext_ctrl VAR_7 = { VAR_3 };
 const struct v4l2_ioctl_ops *VAR_8 = VAR_4->ioctl_ops;

 if (FUNC_1(VAR_1, &VAR_4->flags))
  VAR_5 = VAR_2->private_data;

 if (VAR_5 && VAR_5->ctrl_handler)
  VAR_6 = VAR_5->ctrl_handler;
 else if (VAR_4->ctrl_handler)
  VAR_6 = VAR_4->ctrl_handler;

 if (VAR_6) {
  struct v4l2_ctrl *VAR_9 = FUNC_2(VAR_6, VAR_3);

  return VAR_9 && VAR_9->is_ptr;
 }

 if (!VAR_8 || !VAR_8->vidioc_query_ext_ctrl)
  return 0;

 return !VAR_8->vidioc_query_ext_ctrl(VAR_2, VAR_5, &VAR_7) &&
  (VAR_7.flags & VAR_0);
}
