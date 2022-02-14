
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; } ;
struct uvc_video_queue {int irqlock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uvc_video_queue*,int ) ;
 int FUNC_4 (struct uvc_video_queue*) ;
 int FUNC_5 (int ) ;
 struct uvc_video_queue* FUNC_6 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_7(struct vb2_queue *VAR_2)
{
 struct uvc_video_queue *VAR_3 = FUNC_6(VAR_2);

 FUNC_0();

 if (VAR_2->type != VAR_1)
  FUNC_5(FUNC_4(VAR_3));

 FUNC_1(&VAR_3->irqlock);
 FUNC_3(VAR_3, VAR_0);
 FUNC_2(&VAR_3->irqlock);
}
