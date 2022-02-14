
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_selection {scalar_t__ type; } ;
struct v4l2_ioctl_ops {int (* vidioc_g_selection ) (struct file*,void*,struct v4l2_selection*) ;} ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct file*,void*,struct v4l2_selection*) ;

__attribute__((used)) static int FUNC_1(const struct v4l2_ioctl_ops *VAR_4,
      struct file *VAR_5, void *VAR_6, void *VAR_7)
{
 struct v4l2_selection *VAR_8 = VAR_7;
 u32 VAR_9 = VAR_8->type;
 int VAR_10;

 if (VAR_8->type == VAR_1)
  VAR_8->type = VAR_0;
 else if (VAR_8->type == VAR_3)
  VAR_8->type = VAR_2;
 VAR_10 = VAR_4->vidioc_g_selection(VAR_5, VAR_6, VAR_8);
 VAR_8->type = VAR_9;
 return VAR_10;
}
