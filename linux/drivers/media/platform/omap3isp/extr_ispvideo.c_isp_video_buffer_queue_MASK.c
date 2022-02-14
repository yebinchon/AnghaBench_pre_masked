
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct isp_video_fh {struct isp_video* video; } ;
struct TYPE_4__ {int entity; } ;
struct isp_video {scalar_t__ type; int dmaqueue_flags; TYPE_3__* ops; int irqlock; int dmaqueue; int error; TYPE_1__ video; } ;
struct isp_pipeline {int state; int lock; } ;
struct TYPE_5__ {int vb2_buf; } ;
struct isp_buffer {int irqlist; TYPE_2__ vb; } ;
typedef enum isp_pipeline_state { ____Placeholder_isp_pipeline_state } isp_pipeline_state ;
struct TYPE_6__ {int (* queue ) (struct isp_video*,struct isp_buffer*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (struct isp_pipeline*) ;
 int FUNC_1 (int *,int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (struct isp_pipeline*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct isp_video*,struct isp_buffer*) ;
 struct isp_buffer* FUNC_7 (struct vb2_v4l2_buffer*) ;
 struct isp_pipeline* FUNC_8 (int *) ;
 struct vb2_v4l2_buffer* FUNC_9 (struct vb2_buffer*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 struct isp_video_fh* FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct vb2_buffer *VAR_7)
{
 struct vb2_v4l2_buffer *VAR_8 = FUNC_9(VAR_7);
 struct isp_video_fh *VAR_9 = FUNC_12(VAR_7->vb2_queue);
 struct isp_buffer *VAR_10 = FUNC_7(VAR_8);
 struct isp_video *VAR_11 = VAR_9->video;
 struct isp_pipeline *VAR_12 = FUNC_8(&VAR_11->video.entity);
 enum isp_pipeline_state VAR_13;
 unsigned long VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;

 FUNC_4(&VAR_11->irqlock, VAR_14);

 if (FUNC_10(VAR_11->error)) {
  FUNC_11(&VAR_10->vb.vb2_buf, VAR_6);
  FUNC_5(&VAR_11->irqlock, VAR_14);
  return;
 }

 VAR_15 = FUNC_2(&VAR_11->dmaqueue);
 FUNC_1(&VAR_10->irqlist, &VAR_11->dmaqueue);

 FUNC_5(&VAR_11->irqlock, VAR_14);

 if (VAR_15) {
  if (VAR_11->type == VAR_5)
   VAR_13 = VAR_1;
  else
   VAR_13 = VAR_0;

  FUNC_4(&VAR_12->lock, VAR_14);
  VAR_12->state |= VAR_13;
  VAR_11->ops->queue(VAR_11, VAR_10);
  VAR_11->dmaqueue_flags |= VAR_4;

  VAR_16 = FUNC_0(VAR_12);
  if (VAR_16)
   VAR_12->state |= VAR_2;
  FUNC_5(&VAR_12->lock, VAR_14);

  if (VAR_16)
   FUNC_3(VAR_12,
      VAR_3);
 }
}
