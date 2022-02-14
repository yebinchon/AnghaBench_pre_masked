
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct v4l2_requestbuffers {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ queue; } ;
struct uvc_video {TYPE_2__ queue; } ;
struct uvc_device {struct uvc_video video; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct v4l2_requestbuffers*) ;
 struct video_device* FUNC_1 (struct file*) ;
 struct uvc_device* FUNC_2 (struct video_device*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_requestbuffers *VAR_3)
{
 struct video_device *VAR_4 = FUNC_1(VAR_1);
 struct uvc_device *VAR_5 = FUNC_2(VAR_4);
 struct uvc_video *VAR_6 = &VAR_5->video;

 if (VAR_3->type != VAR_6->queue.queue.type)
  return -VAR_0;

 return FUNC_0(&VAR_6->queue, VAR_3);
}
