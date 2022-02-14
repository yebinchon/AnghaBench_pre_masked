
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct isp_video_fh {struct isp_video* video; } ;
struct TYPE_2__ {int entity; } ;
struct isp_video {int irqlock; int dmaqueue_flags; int dmaqueue; TYPE_1__ video; } ;
struct isp_pipeline {scalar_t__ input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct isp_pipeline*,int ) ;
 int FUNC_2 (struct isp_video*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct isp_pipeline* FUNC_5 (int *) ;
 struct isp_video_fh* FUNC_6 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_7(struct vb2_queue *VAR_3,
         unsigned int VAR_4)
{
 struct isp_video_fh *VAR_5 = FUNC_6(VAR_3);
 struct isp_video *VAR_6 = VAR_5->video;
 struct isp_pipeline *VAR_7 = FUNC_5(&VAR_6->video.entity);
 unsigned long VAR_8;
 int VAR_9;





 if (VAR_7->input)
  return 0;

 VAR_9 = FUNC_1(VAR_7,
        VAR_0);
 if (VAR_9 < 0) {
  FUNC_3(&VAR_6->irqlock, VAR_8);
  FUNC_2(VAR_6, VAR_2);
  FUNC_4(&VAR_6->irqlock, VAR_8);
  return VAR_9;
 }

 FUNC_3(&VAR_6->irqlock, VAR_8);
 if (FUNC_0(&VAR_6->dmaqueue))
  VAR_6->dmaqueue_flags |= VAR_1;
 FUNC_4(&VAR_6->irqlock, VAR_8);

 return 0;
}
