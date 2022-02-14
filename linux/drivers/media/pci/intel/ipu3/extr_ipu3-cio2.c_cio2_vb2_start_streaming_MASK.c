
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_3__ {int entity; } ;
struct cio2_queue {TYPE_1__ vdev; int sensor; int pipe; int frame_sequence; } ;
struct cio2_device {int streaming; TYPE_2__* pci_dev; struct cio2_queue* cur_queue; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cio2_device*,struct cio2_queue*) ;
 int FUNC_2 (struct cio2_device*,struct cio2_queue*) ;
 int FUNC_3 (struct cio2_queue*,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;
 int FUNC_11 (int ,int ,int ,int) ;
 struct cio2_device* FUNC_12 (struct vb2_queue*) ;
 struct cio2_queue* FUNC_13 (struct vb2_queue*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_14(struct vb2_queue *VAR_3, unsigned int VAR_4)
{
 struct cio2_queue *VAR_5 = FUNC_13(VAR_3);
 struct cio2_device *VAR_6 = FUNC_12(VAR_3);
 int VAR_7;

 VAR_6->cur_queue = VAR_5;
 FUNC_0(&VAR_5->frame_sequence, 0);

 VAR_7 = FUNC_8(&VAR_6->pci_dev->dev);
 if (VAR_7 < 0) {
  FUNC_5(&VAR_6->pci_dev->dev, "failed to set power %d\n", VAR_7);
  FUNC_10(&VAR_6->pci_dev->dev);
  return VAR_7;
 }

 VAR_7 = FUNC_6(&VAR_5->vdev.entity, &VAR_5->pipe);
 if (VAR_7)
  goto fail_pipeline;

 VAR_7 = FUNC_2(VAR_6, VAR_5);
 if (VAR_7)
  goto fail_hw;


 VAR_7 = FUNC_11(VAR_5->sensor, VAR_2, VAR_1, 1);
 if (VAR_7)
  goto fail_csi2_subdev;

 VAR_6->streaming = 1;

 return 0;

fail_csi2_subdev:
 FUNC_1(VAR_6, VAR_5);
fail_hw:
 FUNC_7(&VAR_5->vdev.entity);
fail_pipeline:
 FUNC_4(&VAR_6->pci_dev->dev, "failed to start streaming (%d)\n", VAR_7);
 FUNC_3(VAR_5, VAR_0);
 FUNC_9(&VAR_6->pci_dev->dev);

 return VAR_7;
}
