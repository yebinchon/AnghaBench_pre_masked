
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int io_modes; int buf_struct_size; int timestamp_flags; int * lock; int * mem_ops; int * ops; struct stk1160* drv_priv; int type; } ;
struct stk1160_buffer {int dummy; } ;
struct stk1160 {int avail_bufs; int vb_queue_lock; struct vb2_queue vb_vidq; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct vb2_queue*) ;
 int VAR_7 ;

int FUNC_2(struct stk1160 *VAR_8)
{
 int VAR_9;
 struct vb2_queue *VAR_10;

 VAR_10 = &VAR_8->vb_vidq;
 VAR_10->type = VAR_1;
 VAR_10->io_modes = VAR_4 | VAR_3 | VAR_5 | VAR_2;
 VAR_10->drv_priv = VAR_8;
 VAR_10->buf_struct_size = sizeof(struct stk1160_buffer);
 VAR_10->ops = &VAR_6;
 VAR_10->mem_ops = &VAR_7;
 VAR_10->lock = &VAR_8->vb_queue_lock;
 VAR_10->timestamp_flags = VAR_0;

 VAR_9 = FUNC_1(VAR_10);
 if (VAR_9 < 0)
  return VAR_9;


 FUNC_0(&VAR_8->avail_bufs);

 return 0;
}
