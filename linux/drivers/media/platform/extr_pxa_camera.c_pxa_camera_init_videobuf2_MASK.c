
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int io_modes; int buf_struct_size; int * lock; int * mem_ops; int * ops; int dev; int timestamp_flags; struct pxa_camera_dev* drv_priv; int type; } ;
struct TYPE_2__ {int dev; } ;
struct pxa_camera_dev {int mlock; TYPE_1__ v4l2_dev; struct vb2_queue vb2_vq; } ;
struct pxa_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,struct vb2_queue*,int) ;
 int FUNC_1 (struct vb2_queue*,int ,int) ;
 int FUNC_2 (struct pxa_camera_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_4(struct pxa_camera_dev *VAR_7)
{
 int VAR_8;
 struct vb2_queue *VAR_9 = &VAR_7->vb2_vq;

 FUNC_1(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->type = VAR_1;
 VAR_9->io_modes = VAR_3 | VAR_4 | VAR_2;
 VAR_9->drv_priv = VAR_7;
 VAR_9->timestamp_flags = VAR_0;
 VAR_9->buf_struct_size = sizeof(struct pxa_buffer);
 VAR_9->dev = VAR_7->v4l2_dev.dev;

 VAR_9->ops = &VAR_5;
 VAR_9->mem_ops = &VAR_6;
 VAR_9->lock = &VAR_7->mlock;

 VAR_8 = FUNC_3(VAR_9);
 FUNC_0(FUNC_2(VAR_7),
   "vb2_queue_init(vq=%p): %d\n", VAR_9, VAR_8);

 return VAR_8;
}
