
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video_queue {int mutex; int queue; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct uvc_video_queue *VAR_0, enum v4l2_buf_type VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->mutex);
 VAR_2 = FUNC_2(&VAR_0->queue, VAR_1);
 FUNC_1(&VAR_0->mutex);

 return VAR_2;
}
