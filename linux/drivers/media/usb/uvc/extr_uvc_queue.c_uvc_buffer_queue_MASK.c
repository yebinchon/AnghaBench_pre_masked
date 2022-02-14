
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct uvc_video_queue {int flags; int irqlock; int irqqueue; } ;
struct uvc_buffer {int state; int queue; int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct vb2_v4l2_buffer* FUNC_5 (struct vb2_buffer*) ;
 struct uvc_buffer* FUNC_6 (struct vb2_v4l2_buffer*) ;
 int FUNC_7 (struct vb2_buffer*,int ) ;
 struct uvc_video_queue* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct vb2_buffer *VAR_3)
{
 struct vb2_v4l2_buffer *VAR_4 = FUNC_5(VAR_3);
 struct uvc_video_queue *VAR_5 = FUNC_8(VAR_3->vb2_queue);
 struct uvc_buffer *VAR_6 = FUNC_6(VAR_4);
 unsigned long VAR_7;

 FUNC_3(&VAR_5->irqlock, VAR_7);
 if (FUNC_1(!(VAR_5->flags & VAR_1))) {
  FUNC_0(&VAR_6->ref);
  FUNC_2(&VAR_6->queue, &VAR_5->irqqueue);
 } else {



  VAR_6->state = VAR_0;
  FUNC_7(VAR_3, VAR_2);
 }

 FUNC_4(&VAR_5->irqlock, VAR_7);
}
