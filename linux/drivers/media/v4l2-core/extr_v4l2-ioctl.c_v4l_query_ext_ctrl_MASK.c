
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ ctrl_handler; int flags; } ;
struct v4l2_query_ext_ctrl {int dummy; } ;
struct v4l2_ioctl_ops {int (* vidioc_query_ext_ctrl ) (struct file*,void*,struct v4l2_query_ext_ctrl*) ;} ;
struct v4l2_fh {scalar_t__ ctrl_handler; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,void*,struct v4l2_query_ext_ctrl*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__,struct v4l2_query_ext_ctrl*) ;
 struct video_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(const struct v4l2_ioctl_ops *VAR_2,
    struct file *VAR_3, void *VAR_4, void *VAR_5)
{
 struct video_device *VAR_6 = FUNC_3(VAR_3);
 struct v4l2_query_ext_ctrl *VAR_7 = VAR_5;
 struct v4l2_fh *VAR_8 =
  FUNC_1(VAR_1, &VAR_6->flags) ? VAR_4 : ((void*)0);

 if (VAR_8 && VAR_8->ctrl_handler)
  return FUNC_2(VAR_8->ctrl_handler, VAR_7);
 if (VAR_6->ctrl_handler)
  return FUNC_2(VAR_6->ctrl_handler, VAR_7);
 if (VAR_2->vidioc_query_ext_ctrl)
  return VAR_2->vidioc_query_ext_ctrl(VAR_3, VAR_4, VAR_7);
 return -VAR_0;
}
