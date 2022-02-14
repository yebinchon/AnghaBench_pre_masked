
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct video_device {int prio; int flags; } ;
struct v4l2_ioctl_ops {int dummy; } ;
struct v4l2_fh {int prio; } ;
struct file {struct v4l2_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(const struct v4l2_ioctl_ops *VAR_2,
    struct file *VAR_3, void *VAR_4, void *VAR_5)
{
 struct video_device *VAR_6;
 struct v4l2_fh *VAR_7;
 u32 *VAR_8 = VAR_5;

 VAR_6 = FUNC_2(VAR_3);
 if (!FUNC_0(VAR_1, &VAR_6->flags))
  return -VAR_0;
 VAR_7 = VAR_3->private_data;
 return FUNC_1(VAR_6->prio, &VAR_7->prio, *VAR_8);
}
