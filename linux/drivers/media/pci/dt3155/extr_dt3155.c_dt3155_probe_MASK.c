
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int dev; } ;
struct TYPE_5__ {int minor; TYPE_3__* queue; int * lock; int * v4l2_dev; } ;
struct TYPE_6__ {int io_modes; int min_buffers_needed; int * dev; int * lock; int gfp_flags; struct dt3155_priv* drv_priv; int * mem_ops; int * ops; int timestamp_flags; int type; } ;
struct dt3155_priv {int width; int height; int v4l2_dev; int regs; struct pci_dev* pdev; TYPE_1__ vdev; int config; int lock; TYPE_3__ vidq; int mux; int dmaq; int csr2; int std; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *,char*,int ) ;
 struct dt3155_priv* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct dt3155_priv*) ;
 int VAR_15 ;
 TYPE_1__ VAR_16 ;
 int FUNC_6 (int ,struct dt3155_priv*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,int ,int ) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int VAR_17 ;
 int FUNC_16 (int ,int ,int ,int ,struct dt3155_priv*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int VAR_18 ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_1__*,int ,int) ;
 int FUNC_22 (TYPE_1__*,struct dt3155_priv*) ;

__attribute__((used)) static int FUNC_23(struct pci_dev *VAR_19, const struct pci_device_id *VAR_20)
{
 int VAR_21;
 struct dt3155_priv *VAR_22;

 VAR_21 = FUNC_4(&VAR_19->dev, FUNC_0(32));
 if (VAR_21)
  return -VAR_2;
 VAR_22 = FUNC_3(&VAR_19->dev, sizeof(*VAR_22), VAR_5);
 if (!VAR_22)
  return -VAR_3;

 VAR_21 = FUNC_18(&VAR_19->dev, &VAR_22->v4l2_dev);
 if (VAR_21)
  return VAR_21;
 VAR_22->vdev = VAR_16;
 VAR_22->vdev.v4l2_dev = &VAR_22->v4l2_dev;
 FUNC_22(&VAR_22->vdev, VAR_22);
 VAR_22->pdev = VAR_19;
 VAR_22->std = VAR_9;
 VAR_22->csr2 = VAR_14;
 VAR_22->width = 768;
 VAR_22->height = 576;
 FUNC_1(&VAR_22->dmaq);
 FUNC_7(&VAR_22->mux);
 VAR_22->vdev.lock = &VAR_22->mux;
 VAR_22->vidq.type = VAR_8;
 VAR_22->vidq.timestamp_flags = VAR_7;
 VAR_22->vidq.io_modes = VAR_11 | VAR_10 | VAR_12;
 VAR_22->vidq.ops = &VAR_17;
 VAR_22->vidq.mem_ops = &VAR_18;
 VAR_22->vidq.drv_priv = VAR_22;
 VAR_22->vidq.min_buffers_needed = 2;
 VAR_22->vidq.gfp_flags = VAR_4;
 VAR_22->vidq.lock = &VAR_22->mux;
 VAR_22->vidq.dev = &VAR_19->dev;
 VAR_22->vdev.queue = &VAR_22->vidq;
 VAR_21 = FUNC_20(&VAR_22->vidq);
 if (VAR_21 < 0)
  goto err_v4l2_dev_unreg;
 FUNC_17(&VAR_22->lock);
 VAR_22->config = VAR_0;
 VAR_21 = FUNC_9(VAR_19);
 if (VAR_21)
  goto err_v4l2_dev_unreg;
 VAR_21 = FUNC_14(VAR_19, 0, FUNC_12(VAR_19));
 if (VAR_21)
  goto err_pci_disable;
 VAR_22->regs = FUNC_10(VAR_19, 0, FUNC_15(VAR_22->pdev, 0));
 if (!VAR_22->regs) {
  VAR_21 = -VAR_3;
  goto err_free_reg;
 }
 VAR_21 = FUNC_5(VAR_22);
 if (VAR_21)
  goto err_iounmap;
 VAR_21 = FUNC_16(VAR_22->pdev->irq, VAR_15,
     VAR_6, VAR_1, VAR_22);
 if (VAR_21)
  goto err_iounmap;
 VAR_21 = FUNC_21(&VAR_22->vdev, VAR_13, -1);
 if (VAR_21)
  goto err_free_irq;
 FUNC_2(&VAR_19->dev, "/dev/video%i is ready\n", VAR_22->vdev.minor);
 return 0;

err_free_irq:
 FUNC_6(VAR_22->pdev->irq, VAR_22);
err_iounmap:
 FUNC_11(VAR_19, VAR_22->regs);
err_free_reg:
 FUNC_13(VAR_19, 0);
err_pci_disable:
 FUNC_8(VAR_19);
err_v4l2_dev_unreg:
 FUNC_19(&VAR_22->v4l2_dev);
 return VAR_21;
}
