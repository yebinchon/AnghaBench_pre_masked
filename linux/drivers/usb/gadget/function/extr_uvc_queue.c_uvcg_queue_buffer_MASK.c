
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct uvc_video_queue {int flags; int irqlock; int queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,int *,struct v4l2_buffer*) ;

int FUNC_3(struct uvc_video_queue *VAR_1, struct v4l2_buffer *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_1->queue, ((void*)0), VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_0(&VAR_1->irqlock, VAR_3);
 VAR_4 = (VAR_1->flags & VAR_0) != 0;
 VAR_1->flags &= ~VAR_0;
 FUNC_1(&VAR_1->irqlock, VAR_3);
 return VAR_4;
}
