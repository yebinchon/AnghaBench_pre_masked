
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video_queue {int irqlock; } ;
struct uvc_buffer {int dummy; } ;


 struct uvc_buffer* FUNC_0 (struct uvc_video_queue*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct uvc_buffer *FUNC_3(struct uvc_video_queue *VAR_0)
{
 struct uvc_buffer *VAR_1;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->irqlock, VAR_2);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->irqlock, VAR_2);

 return VAR_1;
}
