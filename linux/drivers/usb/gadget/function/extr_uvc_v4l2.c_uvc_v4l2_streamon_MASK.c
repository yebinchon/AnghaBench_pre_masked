
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ queue; } ;
struct uvc_video {TYPE_2__ queue; } ;
struct uvc_device {int state; struct uvc_video video; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uvc_device*) ;
 int FUNC_1 (struct uvc_video*,int) ;
 struct video_device* FUNC_2 (struct file*) ;
 struct uvc_device* FUNC_3 (struct video_device*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_2, void *VAR_3, enum v4l2_buf_type VAR_4)
{
 struct video_device *VAR_5 = FUNC_2(VAR_2);
 struct uvc_device *VAR_6 = FUNC_3(VAR_5);
 struct uvc_video *VAR_7 = &VAR_6->video;
 int VAR_8;

 if (VAR_4 != VAR_7->queue.queue.type)
  return -VAR_0;


 VAR_8 = FUNC_1(VAR_7, 1);
 if (VAR_8 < 0)
  return VAR_8;





 FUNC_0(VAR_6);
 VAR_6->state = VAR_1;

 return 0;
}
