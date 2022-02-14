
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct media_graph {int dummy; } ;
struct TYPE_9__ {int mdev; } ;
struct media_entity {TYPE_1__ graph_obj; int pipe; } ;
struct TYPE_10__ {int bytesperline; } ;
struct TYPE_11__ {TYPE_2__ pix; } ;
struct TYPE_12__ {TYPE_3__ fmt; } ;
struct iss_video_fh {int queue; int timeperframe; TYPE_4__ format; } ;
struct TYPE_13__ {struct media_entity entity; } ;
struct iss_pipeline {int state; int ent_enum; struct iss_video* input; int frame_number; int max_timeperframe; int lock; struct iss_video* output; int pipe; scalar_t__ external_bpp; scalar_t__ external_rate; int * external; } ;
struct iss_video {int type; int bpl_padding; int error; int stream_lock; int * queue; TYPE_7__* iss; TYPE_5__ video; int qlock; int dmaqueue_flags; int dmaqueue; int bpl_value; struct iss_pipeline pipe; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
typedef enum iss_pipeline_state { ____Placeholder_iss_pipeline_state } iss_pipeline_state ;
struct TYPE_15__ {TYPE_6__* pdata; } ;
struct TYPE_14__ {int (* set_constraints ) (TYPE_7__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct iss_video*,struct iss_video_fh*) ;
 struct iss_video* FUNC_3 (struct iss_video*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,struct media_entity*) ;
 int FUNC_8 (struct media_graph*) ;
 int FUNC_9 (struct media_graph*,int ) ;
 struct media_entity* FUNC_10 (struct media_graph*) ;
 int FUNC_11 (struct media_graph*,struct media_entity*) ;
 int FUNC_12 (struct media_entity*,int *) ;
 int FUNC_13 (struct media_entity*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct iss_pipeline*,int ) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (TYPE_7__*,int) ;
 int FUNC_20 (TYPE_7__*,int) ;
 struct iss_pipeline* FUNC_21 (struct media_entity*) ;
 struct iss_video_fh* FUNC_22 (void*) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;
 struct iss_video* FUNC_25 (struct file*) ;

__attribute__((used)) static int
FUNC_26(struct file *VAR_11, void *VAR_12, enum v4l2_buf_type VAR_13)
{
 struct iss_video_fh *VAR_14 = FUNC_22(VAR_12);
 struct iss_video *VAR_15 = FUNC_25(VAR_11);
 struct media_graph VAR_16;
 struct media_entity *VAR_17 = &VAR_15->video.entity;
 enum iss_pipeline_state VAR_18;
 struct iss_pipeline *VAR_19;
 struct iss_video *VAR_20;
 unsigned long VAR_21;
 int VAR_22;

 if (VAR_13 != VAR_15->type)
  return -VAR_0;

 FUNC_14(&VAR_15->stream_lock);





 VAR_19 = VAR_17->pipe
      ? FUNC_21(VAR_17) : &VAR_15->pipe;
 VAR_19->external = ((void*)0);
 VAR_19->external_rate = 0;
 VAR_19->external_bpp = 0;

 VAR_22 = FUNC_6(&VAR_19->ent_enum, VAR_17->graph_obj.mdev);
 if (VAR_22)
  goto err_graph_walk_init;

 VAR_22 = FUNC_9(&VAR_16, VAR_17->graph_obj.mdev);
 if (VAR_22)
  goto err_graph_walk_init;

 if (VAR_15->iss->pdata->set_constraints)
  VAR_15->iss->pdata->set_constraints(VAR_15->iss, 1);

 VAR_22 = FUNC_12(VAR_17, &VAR_19->pipe);
 if (VAR_22 < 0)
  goto err_media_pipeline_start;

 FUNC_11(&VAR_16, VAR_17);
 while ((VAR_17 = FUNC_10(&VAR_16)))
  FUNC_7(&VAR_19->ent_enum, VAR_17);





 VAR_22 = FUNC_2(VAR_15, VAR_14);
 if (VAR_22 < 0)
  goto err_iss_video_check_format;

 VAR_15->bpl_padding = VAR_22;
 VAR_15->bpl_value = VAR_14->format.fmt.pix.bytesperline;





 VAR_20 = FUNC_3(VAR_15);

 if (VAR_15->type == VAR_9) {
  VAR_18 = VAR_7 | VAR_3;
  VAR_19->input = VAR_20;
  VAR_19->output = VAR_15;
 } else {
  if (!VAR_20) {
   VAR_22 = -VAR_1;
   goto err_iss_video_check_format;
  }

  VAR_18 = VAR_6 | VAR_2;
  VAR_19->input = VAR_15;
  VAR_19->output = VAR_20;
 }

 FUNC_17(&VAR_19->lock, VAR_21);
 VAR_19->state &= ~VAR_4;
 VAR_19->state |= VAR_18;
 FUNC_18(&VAR_19->lock, VAR_21);






 if (VAR_15->type == VAR_10)
  VAR_19->max_timeperframe = VAR_14->timeperframe;

 VAR_15->queue = &VAR_14->queue;
 FUNC_0(&VAR_15->dmaqueue);
 VAR_15->error = 0;
 FUNC_1(&VAR_19->frame_number, -1);

 VAR_22 = FUNC_24(&VAR_14->queue, VAR_13);
 if (VAR_22 < 0)
  goto err_iss_video_check_format;






 if (!VAR_19->input) {
  unsigned long VAR_23;

  VAR_22 = FUNC_16(VAR_19,
           VAR_5);
  if (VAR_22 < 0)
   goto err_omap4iss_set_stream;
  FUNC_17(&VAR_15->qlock, VAR_23);
  if (FUNC_4(&VAR_15->dmaqueue))
   VAR_15->dmaqueue_flags |= VAR_8;
  FUNC_18(&VAR_15->qlock, VAR_23);
 }

 FUNC_8(&VAR_16);

 FUNC_15(&VAR_15->stream_lock);

 return 0;

err_omap4iss_set_stream:
 FUNC_23(&VAR_14->queue, VAR_13);
err_iss_video_check_format:
 FUNC_13(&VAR_15->video.entity);
err_media_pipeline_start:
 if (VAR_15->iss->pdata->set_constraints)
  VAR_15->iss->pdata->set_constraints(VAR_15->iss, 0);
 VAR_15->queue = ((void*)0);

 FUNC_8(&VAR_16);

err_graph_walk_init:
 FUNC_5(&VAR_19->ent_enum);

 FUNC_15(&VAR_15->stream_lock);

 return VAR_22;
}
