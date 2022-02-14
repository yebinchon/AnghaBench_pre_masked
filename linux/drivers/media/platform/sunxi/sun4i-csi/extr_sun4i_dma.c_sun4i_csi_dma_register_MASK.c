
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int min_buffers_needed; int buf_struct_size; int dev; int timestamp_flags; int * mem_ops; int * ops; struct sun4i_csi* drv_priv; int * lock; int io_modes; int type; } ;
struct sun4i_csi_buffer {int dummy; } ;
struct sun4i_csi {int lock; int v4l; int dev; int ** current_buf; int buf_list; int qlock; struct vb2_queue queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ,int ,int ,struct sun4i_csi*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int FUNC_9 (struct vb2_queue*) ;
 int FUNC_10 (struct vb2_queue*) ;

int FUNC_11(struct sun4i_csi *VAR_7, int VAR_8)
{
 struct vb2_queue *VAR_9 = &VAR_7->queue;
 int VAR_10;
 int VAR_11;

 FUNC_6(&VAR_7->qlock);
 FUNC_5(&VAR_7->lock);

 FUNC_0(&VAR_7->buf_list);
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
  VAR_7->current_buf[VAR_11] = ((void*)0);

 VAR_9->min_buffers_needed = 3;
 VAR_9->type = VAR_2;
 VAR_9->io_modes = VAR_3;
 VAR_9->lock = &VAR_7->lock;
 VAR_9->drv_priv = VAR_7;
 VAR_9->buf_struct_size = sizeof(struct sun4i_csi_buffer);
 VAR_9->ops = &VAR_5;
 VAR_9->mem_ops = &VAR_6;
 VAR_9->timestamp_flags = VAR_1;
 VAR_9->dev = VAR_7->dev;

 VAR_10 = FUNC_9(VAR_9);
 if (VAR_10 < 0) {
  FUNC_1(VAR_7->dev, "failed to initialize VB2 queue\n");
  goto err_free_mutex;
 }

 VAR_10 = FUNC_7(VAR_7->dev, &VAR_7->v4l);
 if (VAR_10) {
  FUNC_1(VAR_7->dev, "Couldn't register the v4l2 device\n");
  goto err_free_queue;
 }

 VAR_10 = FUNC_3(VAR_7->dev, VAR_8, VAR_4, 0,
          FUNC_2(VAR_7->dev), VAR_7);
 if (VAR_10) {
  FUNC_1(VAR_7->dev, "Couldn't register our interrupt\n");
  goto err_unregister_device;
 }

 return 0;

err_unregister_device:
 FUNC_8(&VAR_7->v4l);

err_free_queue:
 FUNC_10(VAR_9);

err_free_mutex:
 FUNC_4(&VAR_7->lock);
 return VAR_10;
}
