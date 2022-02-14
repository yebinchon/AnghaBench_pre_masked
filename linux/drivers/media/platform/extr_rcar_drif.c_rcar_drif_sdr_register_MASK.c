
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * lock; } ;
struct rcar_drif_sdr {int dev; TYPE_2__* vdev; int v4l2_dev; int ctrl_hdl; int vb_queue_mutex; TYPE_1__ vb_queue; int v4l2_mutex; } ;
struct TYPE_7__ {int device_caps; int * v4l2_dev; int * ctrl_handler; TYPE_1__* queue; int * lock; int (* release ) (TYPE_2__*) ;int * ioctl_ops; int * fops; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,char*) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_2__*,struct rcar_drif_sdr*) ;

__attribute__((used)) static int FUNC_6(struct rcar_drif_sdr *VAR_8)
{
 int VAR_9;


 VAR_8->vdev = FUNC_2();
 if (!VAR_8->vdev)
  return -VAR_0;

 FUNC_1(VAR_8->vdev->name, sizeof(VAR_8->vdev->name), "R-Car DRIF");
 VAR_8->vdev->fops = &VAR_6;
 VAR_8->vdev->ioctl_ops = &VAR_7;
 VAR_8->vdev->release = FUNC_3;
 VAR_8->vdev->lock = &VAR_8->v4l2_mutex;
 VAR_8->vdev->queue = &VAR_8->vb_queue;
 VAR_8->vdev->queue->lock = &VAR_8->vb_queue_mutex;
 VAR_8->vdev->ctrl_handler = &VAR_8->ctrl_hdl;
 VAR_8->vdev->v4l2_dev = &VAR_8->v4l2_dev;
 VAR_8->vdev->device_caps = VAR_2 | VAR_4 |
  VAR_3 | VAR_1;
 FUNC_5(VAR_8->vdev, VAR_8);


 VAR_9 = FUNC_4(VAR_8->vdev, VAR_5, -1);
 if (VAR_9) {
  FUNC_3(VAR_8->vdev);
  VAR_8->vdev = ((void*)0);
  FUNC_0(VAR_8->dev, "failed video_register_device (%d)\n", VAR_9);
 }

 return VAR_9;
}
