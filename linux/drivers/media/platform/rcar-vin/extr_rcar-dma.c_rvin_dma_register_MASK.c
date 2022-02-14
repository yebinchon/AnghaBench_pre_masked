
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int io_modes; int buf_struct_size; int min_buffers_needed; int dev; int timestamp_flags; int * mem_ops; int * ops; struct rvin_dev* drv_priv; int * lock; int type; } ;
struct rvin_dev {int dev; int lock; int ** queue_buf; int state; int qlock; int buf_list; int v4l2_dev; struct vb2_queue queue; } ;
struct rvin_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int,int ,int ,int ,struct rvin_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rvin_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_11 ;
 int FUNC_6 (struct vb2_queue*) ;
 int FUNC_7 (struct rvin_dev*,char*) ;

int FUNC_8(struct rvin_dev *VAR_12, int VAR_13)
{
 struct vb2_queue *VAR_14 = &VAR_12->queue;
 int VAR_15, VAR_16;


 VAR_16 = FUNC_5(VAR_12->dev, &VAR_12->v4l2_dev);
 if (VAR_16)
  return VAR_16;

 FUNC_2(&VAR_12->lock);
 FUNC_0(&VAR_12->buf_list);

 FUNC_4(&VAR_12->qlock);

 VAR_12->state = VAR_3;

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
  VAR_12->queue_buf[VAR_15] = ((void*)0);


 VAR_14->type = VAR_5;
 VAR_14->io_modes = VAR_7 | VAR_8 | VAR_6;
 VAR_14->lock = &VAR_12->lock;
 VAR_14->drv_priv = VAR_12;
 VAR_14->buf_struct_size = sizeof(struct rvin_buffer);
 VAR_14->ops = &VAR_10;
 VAR_14->mem_ops = &VAR_11;
 VAR_14->timestamp_flags = VAR_4;
 VAR_14->min_buffers_needed = 4;
 VAR_14->dev = VAR_12->dev;

 VAR_16 = FUNC_6(VAR_14);
 if (VAR_16 < 0) {
  FUNC_7(VAR_12, "failed to initialize VB2 queue\n");
  goto error;
 }


 VAR_16 = FUNC_1(VAR_12->dev, VAR_13, VAR_9, VAR_1,
          VAR_2, VAR_12);
 if (VAR_16) {
  FUNC_7(VAR_12, "failed to request irq\n");
  goto error;
 }

 return 0;
error:
 FUNC_3(VAR_12);

 return VAR_16;
}
