
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct v4l2_buffer {int dummy; } ;
struct uvc_video {int queue; } ;
struct uvc_device {struct uvc_video video; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct v4l2_buffer*,int) ;
 struct video_device* FUNC_1 (struct file*) ;
 struct uvc_device* FUNC_2 (struct video_device*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_buffer *VAR_3)
{
 struct video_device *VAR_4 = FUNC_1(VAR_1);
 struct uvc_device *VAR_5 = FUNC_2(VAR_4);
 struct uvc_video *VAR_6 = &VAR_5->video;

 return FUNC_0(&VAR_6->queue, VAR_3, VAR_1->f_flags & VAR_0);
}
