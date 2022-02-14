
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int entity; } ;
struct TYPE_6__ {scalar_t__ owner; } ;
struct vsp1_video {TYPE_2__ video; TYPE_3__ queue; TYPE_1__* vsp1; } ;
struct vsp1_pipeline {int pipe; } ;
struct v4l2_fh {int vdev; } ;
struct media_device {int graph_mutex; } ;
struct file {scalar_t__ private_data; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_4__ {struct media_device media_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vsp1_pipeline*) ;
 int FUNC_1 (struct vsp1_pipeline*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct vsp1_video* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int) ;
 struct vsp1_pipeline* FUNC_8 (struct vsp1_video*) ;
 int FUNC_9 (struct vsp1_pipeline*) ;
 int FUNC_10 (struct vsp1_video*) ;

__attribute__((used)) static int
FUNC_11(struct file *VAR_1, void *VAR_2, enum v4l2_buf_type VAR_3)
{
 struct v4l2_fh *VAR_4 = VAR_1->private_data;
 struct vsp1_video *VAR_5 = FUNC_6(VAR_4->vdev);
 struct media_device *VAR_6 = &VAR_5->vsp1->media_dev;
 struct vsp1_pipeline *VAR_7;
 int VAR_8;

 if (VAR_5->queue.owner && VAR_5->queue.owner != VAR_1->private_data)
  return -VAR_0;






 FUNC_4(&VAR_6->graph_mutex);

 VAR_7 = FUNC_8(VAR_5);
 if (FUNC_0(VAR_7)) {
  FUNC_5(&VAR_6->graph_mutex);
  return FUNC_1(VAR_7);
 }

 VAR_8 = FUNC_2(&VAR_5->video.entity, &VAR_7->pipe);
 if (VAR_8 < 0) {
  FUNC_5(&VAR_6->graph_mutex);
  goto err_pipe;
 }

 FUNC_5(&VAR_6->graph_mutex);





 VAR_8 = FUNC_10(VAR_5);
 if (VAR_8 < 0)
  goto err_stop;


 VAR_8 = FUNC_7(&VAR_5->queue, VAR_3);
 if (VAR_8 < 0)
  goto err_stop;

 return 0;

err_stop:
 FUNC_3(&VAR_5->video.entity);
err_pipe:
 FUNC_9(VAR_7);
 return VAR_8;
}
