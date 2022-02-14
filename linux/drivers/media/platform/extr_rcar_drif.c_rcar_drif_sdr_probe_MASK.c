
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ops; } ;
struct TYPE_4__ {int io_modes; int buf_struct_size; int timestamp_flags; int * mem_ops; int * ops; struct rcar_drif_sdr* drv_priv; int type; } ;
struct rcar_drif_sdr {int v4l2_dev; TYPE_2__ notifier; int dev; TYPE_1__ vb_queue; int queued_bufs; int dma_lock; int queued_bufs_lock; int vb_queue_mutex; int v4l2_mutex; int hwbuf_size; } ;
struct rcar_drif_frame_buf {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (struct rcar_drif_sdr*) ;
 int FUNC_4 (struct rcar_drif_sdr*) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_11(struct rcar_drif_sdr *VAR_9)
{
 int VAR_10;


 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10) {
  FUNC_1(VAR_9->dev, "failed to set default format\n");
  return VAR_10;
 }


 VAR_9->hwbuf_size = VAR_0;

 FUNC_2(&VAR_9->v4l2_mutex);
 FUNC_2(&VAR_9->vb_queue_mutex);
 FUNC_5(&VAR_9->queued_bufs_lock);
 FUNC_5(&VAR_9->dma_lock);
 FUNC_0(&VAR_9->queued_bufs);


 VAR_9->vb_queue.type = VAR_2;
 VAR_9->vb_queue.io_modes = VAR_5 | VAR_4 | VAR_3;
 VAR_9->vb_queue.drv_priv = VAR_9;
 VAR_9->vb_queue.buf_struct_size = sizeof(struct rcar_drif_frame_buf);
 VAR_9->vb_queue.ops = &VAR_7;
 VAR_9->vb_queue.mem_ops = &VAR_8;
 VAR_9->vb_queue.timestamp_flags = VAR_1;


 VAR_10 = FUNC_10(&VAR_9->vb_queue);
 if (VAR_10) {
  FUNC_1(VAR_9->dev, "failed: vb2_queue_init ret %d\n", VAR_10);
  return VAR_10;
 }


 VAR_10 = FUNC_8(VAR_9->dev, &VAR_9->v4l2_dev);
 if (VAR_10) {
  FUNC_1(VAR_9->dev, "failed: v4l2_device_register ret %d\n", VAR_10);
  return VAR_10;
 }





 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10)
  goto error;

 VAR_9->notifier.ops = &VAR_6;


 VAR_10 = FUNC_7(&VAR_9->v4l2_dev, &VAR_9->notifier);
 if (VAR_10 < 0) {
  FUNC_1(VAR_9->dev, "failed: notifier register ret %d\n", VAR_10);
  goto cleanup;
 }

 return VAR_10;

cleanup:
 FUNC_6(&VAR_9->notifier);
error:
 FUNC_9(&VAR_9->v4l2_dev);

 return VAR_10;
}
