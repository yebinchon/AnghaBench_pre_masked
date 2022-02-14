
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_exportbuffer {int dummy; } ;
struct uvc_video_queue {int mutex; int queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct v4l2_exportbuffer*) ;

int FUNC_3(struct uvc_video_queue *VAR_0,
        struct v4l2_exportbuffer *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->mutex);
 VAR_2 = FUNC_2(&VAR_0->queue, VAR_1);
 FUNC_1(&VAR_0->mutex);

 return VAR_2;
}
