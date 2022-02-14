
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct v4l2_buffer {int dummy; } ;
struct uvc_video {int queue; } ;
struct uvc_device {struct uvc_video video; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,struct v4l2_buffer*) ;
 int FUNC_1 (struct uvc_video*) ;
 struct video_device* FUNC_2 (struct file*) ;
 struct uvc_device* FUNC_3 (struct video_device*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_0, void *VAR_1, struct v4l2_buffer *VAR_2)
{
 struct video_device *VAR_3 = FUNC_2(VAR_0);
 struct uvc_device *VAR_4 = FUNC_3(VAR_3);
 struct uvc_video *VAR_5 = &VAR_4->video;
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_5->queue, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_1(VAR_5);
}
