
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* queue; int * lock; int * v4l2_dev; } ;
struct TYPE_8__ {int io_modes; int gfp_flags; int buf_struct_size; int min_buffers_needed; int * dev; int * lock; struct tw68_dev* drv_priv; int * mem_ops; int * ops; int timestamp_flags; int type; } ;
struct tw68_dev {int width; int height; TYPE_2__ vdev; TYPE_4__ vidq; int lock; int v4l2_dev; TYPE_1__* pci; int active; int field; int fmt; } ;
struct tw68_buf {int dummy; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tw68_dev*,int *) ;
 int * VAR_11 ;
 int VAR_12 ;
 TYPE_2__ VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_2__*,struct tw68_dev*) ;

int FUNC_6(struct tw68_dev *VAR_15, int VAR_16)
{
 int VAR_17;

 FUNC_2(VAR_15, &VAR_11[0]);

 VAR_15->fmt = FUNC_1(VAR_3);
 VAR_15->width = 720;
 VAR_15->height = 576;
 VAR_15->field = VAR_2;

 FUNC_0(&VAR_15->active);
 VAR_15->vidq.type = VAR_1;
 VAR_15->vidq.timestamp_flags = VAR_0;
 VAR_15->vidq.io_modes = VAR_5 | VAR_7 | VAR_6 | VAR_4;
 VAR_15->vidq.ops = &VAR_12;
 VAR_15->vidq.mem_ops = &VAR_14;
 VAR_15->vidq.drv_priv = VAR_15;
 VAR_15->vidq.gfp_flags = VAR_9 | VAR_10;
 VAR_15->vidq.buf_struct_size = sizeof(struct tw68_buf);
 VAR_15->vidq.lock = &VAR_15->lock;
 VAR_15->vidq.min_buffers_needed = 2;
 VAR_15->vidq.dev = &VAR_15->pci->dev;
 VAR_17 = FUNC_3(&VAR_15->vidq);
 if (VAR_17)
  return VAR_17;
 VAR_15->vdev = VAR_13;
 VAR_15->vdev.v4l2_dev = &VAR_15->v4l2_dev;
 VAR_15->vdev.lock = &VAR_15->lock;
 VAR_15->vdev.queue = &VAR_15->vidq;
 FUNC_5(&VAR_15->vdev, VAR_15);
 return FUNC_4(&VAR_15->vdev, VAR_8, VAR_16);
}
