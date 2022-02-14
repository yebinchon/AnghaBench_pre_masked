
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_format {int fmt; } ;
struct TYPE_2__ {int fmt; } ;
struct imgu_video_device {TYPE_1__ vdev_fmt; } ;
struct file {int dummy; } ;


 struct imgu_video_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
        struct v4l2_format *VAR_2)
{
 struct imgu_video_device *VAR_3 = FUNC_0(VAR_0);

 VAR_2->fmt = VAR_3->vdev_fmt.fmt;

 return 0;
}
