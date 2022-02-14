
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct usbtv_buf {int dummy; } ;
struct TYPE_11__ {int io_modes; int buf_struct_size; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct usbtv* drv_priv; int type; } ;
struct TYPE_13__ {int error; } ;
struct TYPE_12__ {int release; TYPE_7__* ctrl_handler; } ;
struct TYPE_10__ {int device_caps; int * lock; TYPE_3__* queue; int tvnorms; int * ioctl_ops; int * fops; int release; TYPE_5__* v4l2_dev; int name; } ;
struct usbtv {TYPE_3__ vb2q; TYPE_7__ ctrl; TYPE_5__ v4l2_dev; int dev; TYPE_1__ vdev; int v4l2_lock; int vb2q_lock; int bufs; int buflock; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct usbtv*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,int) ;
 int FUNC_8 (TYPE_7__*,int *,int ,int,int,int,int) ;
 int FUNC_9 (int ,TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_13 (TYPE_1__*,int ,int) ;
 int FUNC_14 (TYPE_1__*,struct usbtv*) ;

int FUNC_15(struct usbtv *VAR_23)
{
 int VAR_24;

 (void)FUNC_5(VAR_23, VAR_11);

 FUNC_3(&VAR_23->buflock);
 FUNC_2(&VAR_23->v4l2_lock);
 FUNC_2(&VAR_23->vb2q_lock);
 FUNC_0(&VAR_23->bufs);


 VAR_23->vb2q.type = VAR_2;
 VAR_23->vb2q.io_modes = VAR_12 | VAR_14 | VAR_13;
 VAR_23->vb2q.drv_priv = VAR_23;
 VAR_23->vb2q.buf_struct_size = sizeof(struct usbtv_buf);
 VAR_23->vb2q.ops = &VAR_20;
 VAR_23->vb2q.mem_ops = &VAR_21;
 VAR_23->vb2q.timestamp_flags = VAR_1;
 VAR_23->vb2q.lock = &VAR_23->vb2q_lock;
 VAR_24 = FUNC_11(&VAR_23->vb2q);
 if (VAR_24 < 0) {
  FUNC_1(VAR_23->dev, "Could not initialize videobuf2 queue\n");
  return VAR_24;
 }


 FUNC_7(&VAR_23->ctrl, 4);
 FUNC_8(&VAR_23->ctrl, &VAR_16,
   VAR_7, 0, 0x3ff, 1, 0x1d0);
 FUNC_8(&VAR_23->ctrl, &VAR_16,
   VAR_6, 0, 0x3ff, 1, 0x1c0);
 FUNC_8(&VAR_23->ctrl, &VAR_16,
   VAR_9, 0, 0x3ff, 1, 0x200);
 FUNC_8(&VAR_23->ctrl, &VAR_16,
   VAR_8, -0xdff, 0xdff, 1, 0x000);
 FUNC_8(&VAR_23->ctrl, &VAR_16,
   VAR_10, 0x0, 0xff, 1, 0x60);
 VAR_24 = VAR_23->ctrl.error;
 if (VAR_24 < 0) {
  FUNC_1(VAR_23->dev, "Could not initialize controls\n");
  goto ctrl_fail;
 }


 VAR_23->v4l2_dev.ctrl_handler = &VAR_23->ctrl;
 VAR_23->v4l2_dev.release = VAR_19;
 VAR_24 = FUNC_9(VAR_23->dev, &VAR_23->v4l2_dev);
 if (VAR_24 < 0) {
  FUNC_1(VAR_23->dev, "Could not register v4l2 device\n");
  goto v4l2_fail;
 }


 FUNC_4(VAR_23->vdev.name, "usbtv", sizeof(VAR_23->vdev.name));
 VAR_23->vdev.v4l2_dev = &VAR_23->v4l2_dev;
 VAR_23->vdev.release = VAR_22;
 VAR_23->vdev.fops = &VAR_17;
 VAR_23->vdev.ioctl_ops = &VAR_18;
 VAR_23->vdev.tvnorms = VAR_0;
 VAR_23->vdev.queue = &VAR_23->vb2q;
 VAR_23->vdev.lock = &VAR_23->v4l2_lock;
 VAR_23->vdev.device_caps = VAR_5 | VAR_3 |
      VAR_4;
 FUNC_14(&VAR_23->vdev, VAR_23);
 VAR_24 = FUNC_13(&VAR_23->vdev, VAR_15, -1);
 if (VAR_24 < 0) {
  FUNC_1(VAR_23->dev, "Could not register video device\n");
  goto vdev_fail;
 }

 return 0;

vdev_fail:
 FUNC_10(&VAR_23->v4l2_dev);
v4l2_fail:
ctrl_fail:
 FUNC_6(&VAR_23->ctrl);
 FUNC_12(&VAR_23->vb2q);

 return VAR_24;
}
