
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct uvc_video_queue {int irqlock; scalar_t__ buf_used; } ;
struct uvc_streaming {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uvc_video_queue*,int ) ;
 struct uvc_streaming* FUNC_4 (struct uvc_video_queue*) ;
 int FUNC_5 (struct uvc_streaming*) ;
 struct uvc_video_queue* FUNC_6 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_7(struct vb2_queue *VAR_1, unsigned int VAR_2)
{
 struct uvc_video_queue *VAR_3 = FUNC_6(VAR_1);
 struct uvc_streaming *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 FUNC_0();

 VAR_3->buf_used = 0;

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5 == 0)
  return 0;

 FUNC_1(&VAR_3->irqlock);
 FUNC_3(VAR_3, VAR_0);
 FUNC_2(&VAR_3->irqlock);

 return VAR_5;
}
