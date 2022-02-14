
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct video_device {int prio; } ;
struct v4l2_ioctl_ops {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 struct video_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(const struct v4l2_ioctl_ops *VAR_0,
    struct file *VAR_1, void *VAR_2, void *VAR_3)
{
 struct video_device *VAR_4;
 u32 *VAR_5 = VAR_3;

 VAR_4 = FUNC_1(VAR_1);
 *VAR_5 = FUNC_0(VAR_4->prio);
 return 0;
}
