
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct uvc_video_queue {int irqlock; int flags; int irqqueue; TYPE_1__ queue; scalar_t__ buf_used; scalar_t__ sequence; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

int FUNC_5(struct uvc_video_queue *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = 0;

 if (VAR_2) {
  VAR_4 = FUNC_4(&VAR_1->queue, VAR_1->queue.type);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_1->sequence = 0;
  VAR_1->buf_used = 0;
 } else {
  VAR_4 = FUNC_3(&VAR_1->queue, VAR_1->queue.type);
  if (VAR_4 < 0)
   return VAR_4;

  FUNC_1(&VAR_1->irqlock, VAR_3);
  FUNC_0(&VAR_1->irqqueue);







  VAR_1->flags &= ~VAR_0;
  FUNC_2(&VAR_1->irqlock, VAR_3);
 }

 return VAR_4;
}
