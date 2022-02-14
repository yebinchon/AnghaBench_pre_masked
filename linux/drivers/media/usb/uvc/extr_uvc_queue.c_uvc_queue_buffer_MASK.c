
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct uvc_video_queue {int mutex; int queue; } ;
struct media_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct media_device*,struct v4l2_buffer*) ;

int FUNC_3(struct uvc_video_queue *VAR_0,
       struct media_device *VAR_1, struct v4l2_buffer *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_0->mutex);
 VAR_3 = FUNC_2(&VAR_0->queue, VAR_1, VAR_2);
 FUNC_1(&VAR_0->mutex);

 return VAR_3;
}
