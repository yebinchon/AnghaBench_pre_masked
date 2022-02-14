
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iss_video_fh {int queue; } ;
struct TYPE_5__ {int entity; } ;
struct iss_video {int type; int stream_lock; TYPE_2__ video; TYPE_3__* iss; int * queue; } ;
struct iss_pipeline {int state; int ent_enum; int lock; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
typedef enum iss_pipeline_state { ____Placeholder_iss_pipeline_state } iss_pipeline_state ;
struct TYPE_6__ {TYPE_1__* pdata; } ;
struct TYPE_4__ {int (* set_constraints ) (TYPE_3__*,int) ;} ;


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
 int FUNC_4 (struct iss_pipeline*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_3__*,int) ;
 struct iss_pipeline* FUNC_8 (int *) ;
 struct iss_video_fh* FUNC_9 (void*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 struct iss_video* FUNC_12 (struct file*) ;

__attribute__((used)) static int
FUNC_13(struct file *VAR_7, void *VAR_8, enum v4l2_buf_type VAR_9)
{
 struct iss_video_fh *VAR_10 = FUNC_9(VAR_8);
 struct iss_video *VAR_11 = FUNC_12(VAR_7);
 struct iss_pipeline *VAR_12 = FUNC_8(&VAR_11->video.entity);
 enum iss_pipeline_state VAR_13;
 unsigned long VAR_14;

 if (VAR_9 != VAR_11->type)
  return -VAR_0;

 FUNC_2(&VAR_11->stream_lock);

 if (!FUNC_10(&VAR_10->queue))
  goto done;


 if (VAR_11->type == VAR_6)
  VAR_13 = VAR_4
        | VAR_2;
 else
  VAR_13 = VAR_3
        | VAR_1;

 FUNC_5(&VAR_12->lock, VAR_14);
 VAR_12->state &= ~VAR_13;
 FUNC_6(&VAR_12->lock, VAR_14);


 FUNC_4(VAR_12, VAR_5);
 FUNC_11(&VAR_10->queue, VAR_9);
 VAR_11->queue = ((void*)0);

 FUNC_0(&VAR_12->ent_enum);

 if (VAR_11->iss->pdata->set_constraints)
  VAR_11->iss->pdata->set_constraints(VAR_11->iss, 0);
 FUNC_1(&VAR_11->video.entity);

done:
 FUNC_3(&VAR_11->stream_lock);
 return 0;
}
