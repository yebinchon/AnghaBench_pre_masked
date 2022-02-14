
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isp_video_fh {int queue; } ;
struct TYPE_2__ {int entity; } ;
struct isp_video {int type; int error; int stream_lock; TYPE_1__ video; int * queue; int queue_lock; } ;
struct isp_pipeline {int state; int ent_enum; int lock; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
typedef enum isp_pipeline_state { ____Placeholder_isp_pipeline_state } isp_pipeline_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct isp_pipeline*,int ) ;
 int FUNC_5 (struct isp_video*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct isp_pipeline* FUNC_8 (int *) ;
 struct isp_video_fh* FUNC_9 (void*) ;
 unsigned int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 struct isp_video* FUNC_12 (struct file*) ;

__attribute__((used)) static int
FUNC_13(struct file *VAR_7, void *VAR_8, enum v4l2_buf_type VAR_9)
{
 struct isp_video_fh *VAR_10 = FUNC_9(VAR_8);
 struct isp_video *VAR_11 = FUNC_12(VAR_7);
 struct isp_pipeline *VAR_12 = FUNC_8(&VAR_11->video.entity);
 enum isp_pipeline_state VAR_13;
 unsigned int VAR_14;
 unsigned long VAR_15;

 if (VAR_9 != VAR_11->type)
  return -VAR_0;

 FUNC_2(&VAR_11->stream_lock);


 FUNC_2(&VAR_11->queue_lock);
 VAR_14 = FUNC_10(&VAR_10->queue);
 FUNC_3(&VAR_11->queue_lock);

 if (!VAR_14)
  goto done;


 if (VAR_11->type == VAR_6)
  VAR_13 = VAR_4
        | VAR_2;
 else
  VAR_13 = VAR_3
        | VAR_1;

 FUNC_6(&VAR_12->lock, VAR_15);
 VAR_12->state &= ~VAR_13;
 FUNC_7(&VAR_12->lock, VAR_15);


 FUNC_4(VAR_12, VAR_5);
 FUNC_5(VAR_11);

 FUNC_2(&VAR_11->queue_lock);
 FUNC_11(&VAR_10->queue, VAR_9);
 FUNC_3(&VAR_11->queue_lock);
 VAR_11->queue = ((void*)0);
 VAR_11->error = 0;


 FUNC_1(&VAR_11->video.entity);

 FUNC_0(&VAR_12->ent_enum);

done:
 FUNC_3(&VAR_11->stream_lock);
 return 0;
}
