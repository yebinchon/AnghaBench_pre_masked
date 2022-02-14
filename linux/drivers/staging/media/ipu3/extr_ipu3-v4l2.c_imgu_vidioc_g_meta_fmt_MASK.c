
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_format {scalar_t__ type; int fmt; } ;
struct TYPE_4__ {int fmt; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct imgu_video_device {TYPE_2__ vdev_fmt; TYPE_1__ vbq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct imgu_video_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
      struct v4l2_format *VAR_3)
{
 struct imgu_video_device *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->type != VAR_4->vbq.type)
  return -VAR_0;

 VAR_3->fmt = VAR_4->vdev_fmt.fmt;

 return 0;
}
