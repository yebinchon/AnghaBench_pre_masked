
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video_queue {int irqlock; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct uvc_video_queue*,int ) ;

void FUNC_3(struct uvc_video_queue *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_2->irqlock, VAR_4);
 FUNC_2(VAR_2, VAR_0);






 if (VAR_3)
  VAR_2->flags |= VAR_1;
 FUNC_1(&VAR_2->irqlock, VAR_4);
}
