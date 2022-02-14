
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int field; int bytesperline; } ;
struct TYPE_11__ {TYPE_2__ pix; } ;
struct TYPE_12__ {TYPE_3__ fmt; } ;
struct isp_video_fh {int queue; TYPE_4__ format; int timeperframe; } ;
struct TYPE_14__ {int pipe; } ;
struct TYPE_13__ {TYPE_6__ entity; } ;
struct isp_pipeline {int error; int state; int ent_enum; int field; int frame_number; int max_timeperframe; int lock; int pipe; int l3_ick; int max_rate; } ;
struct isp_video {int type; int bpl_padding; int stream_lock; int * queue; int dmaqueue; TYPE_5__ video; int queue_lock; int bpl_value; TYPE_1__* isp; struct isp_pipeline pipe; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
typedef enum isp_pipeline_state { ____Placeholder_isp_pipeline_state } isp_pipeline_state ;
struct TYPE_9__ {int * clock; int media_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct isp_video*,struct isp_pipeline*) ;
 int FUNC_4 (struct isp_video*,struct isp_video_fh*) ;
 int FUNC_5 (struct isp_video*,struct isp_pipeline*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_6__*,int *) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 struct isp_pipeline* FUNC_14 (TYPE_6__*) ;
 struct isp_video_fh* FUNC_15 (void*) ;
 int FUNC_16 (int *,int) ;
 struct isp_video* FUNC_17 (struct file*) ;

__attribute__((used)) static int
FUNC_18(struct file *VAR_9, void *VAR_10, enum v4l2_buf_type VAR_11)
{
 struct isp_video_fh *VAR_12 = FUNC_15(VAR_10);
 struct isp_video *VAR_13 = FUNC_17(VAR_9);
 enum isp_pipeline_state VAR_14;
 struct isp_pipeline *VAR_15;
 unsigned long VAR_16;
 int VAR_17;

 if (VAR_11 != VAR_13->type)
  return -VAR_0;

 FUNC_10(&VAR_13->stream_lock);




 VAR_15 = VAR_13->video.entity.pipe
      ? FUNC_14(&VAR_13->video.entity) : &VAR_13->pipe;

 VAR_17 = FUNC_7(&VAR_15->ent_enum, &VAR_13->isp->media_dev);
 if (VAR_17)
  goto err_enum_init;


 VAR_15->l3_ick = FUNC_2(VAR_13->isp->clock[VAR_1]);
 VAR_15->max_rate = VAR_15->l3_ick;

 VAR_17 = FUNC_8(&VAR_13->video.entity, &VAR_15->pipe);
 if (VAR_17 < 0)
  goto err_pipeline_start;




 VAR_17 = FUNC_4(VAR_13, VAR_12);
 if (VAR_17 < 0)
  goto err_check_format;

 VAR_13->bpl_padding = VAR_17;
 VAR_13->bpl_value = VAR_12->format.fmt.pix.bytesperline;

 VAR_17 = FUNC_5(VAR_13, VAR_15);
 if (VAR_17 < 0)
  goto err_check_format;

 if (VAR_13->type == VAR_7)
  VAR_14 = VAR_6 | VAR_3;
 else
  VAR_14 = VAR_5 | VAR_2;

 VAR_17 = FUNC_3(VAR_13, VAR_15);
 if (VAR_17 < 0)
  goto err_check_format;

 VAR_15->error = 0;

 FUNC_12(&VAR_15->lock, VAR_16);
 VAR_15->state &= ~VAR_4;
 VAR_15->state |= VAR_14;
 FUNC_13(&VAR_15->lock, VAR_16);





 if (VAR_13->type == VAR_8)
  VAR_15->max_timeperframe = VAR_12->timeperframe;

 VAR_13->queue = &VAR_12->queue;
 FUNC_0(&VAR_13->dmaqueue);
 FUNC_1(&VAR_15->frame_number, -1);
 VAR_15->field = VAR_12->format.fmt.pix.field;

 FUNC_10(&VAR_13->queue_lock);
 VAR_17 = FUNC_16(&VAR_12->queue, VAR_11);
 FUNC_11(&VAR_13->queue_lock);
 if (VAR_17 < 0)
  goto err_check_format;

 FUNC_11(&VAR_13->stream_lock);

 return 0;

err_check_format:
 FUNC_9(&VAR_13->video.entity);
err_pipeline_start:
 FUNC_0(&VAR_13->dmaqueue);
 VAR_13->queue = ((void*)0);

 FUNC_6(&VAR_15->ent_enum);

err_enum_init:
 FUNC_11(&VAR_13->stream_lock);

 return VAR_17;
}
