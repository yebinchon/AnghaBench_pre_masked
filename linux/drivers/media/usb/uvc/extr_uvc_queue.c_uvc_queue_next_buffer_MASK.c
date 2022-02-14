
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video_queue {int irqlock; } ;
struct uvc_buffer {int queue; } ;


 struct uvc_buffer* FUNC_0 (struct uvc_video_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct uvc_buffer*) ;

struct uvc_buffer *FUNC_5(struct uvc_video_queue *VAR_0,
  struct uvc_buffer *VAR_1)
{
 struct uvc_buffer *VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->irqlock, VAR_3);
 FUNC_1(&VAR_1->queue);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_3(&VAR_0->irqlock, VAR_3);

 FUNC_4(VAR_1);

 return VAR_2;
}
