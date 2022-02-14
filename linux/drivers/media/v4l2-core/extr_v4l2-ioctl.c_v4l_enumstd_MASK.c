
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int tvnorms; } ;
struct v4l2_standard {int dummy; } ;
struct v4l2_ioctl_ops {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct v4l2_standard*,int ) ;
 struct video_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(const struct v4l2_ioctl_ops *VAR_0,
    struct file *VAR_1, void *VAR_2, void *VAR_3)
{
 struct video_device *VAR_4 = FUNC_1(VAR_1);
 struct v4l2_standard *VAR_5 = VAR_3;

 return FUNC_0(VAR_5, VAR_4->tvnorms);
}
