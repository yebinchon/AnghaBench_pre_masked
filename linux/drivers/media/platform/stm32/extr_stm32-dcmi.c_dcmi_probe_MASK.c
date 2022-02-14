
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_17__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_10__ ;


struct vb2_queue {int io_modes; int buf_struct_size; int min_buffers_needed; TYPE_10__* dev; int timestamp_flags; int * mem_ops; int * ops; struct stm32_dcmi* drv_priv; int * lock; int type; } ;
struct TYPE_35__ {int data_shift; int bus_width; int flags; } ;
struct TYPE_34__ {TYPE_3__ parallel; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_2__ bus; } ;
struct TYPE_32__ {TYPE_10__* dev; int bus_info; int model; } ;
struct TYPE_37__ {TYPE_17__* mdev; } ;
struct TYPE_31__ {int flags; } ;
struct TYPE_33__ {int data_shift; int bus_width; int flags; } ;
struct stm32_dcmi {struct dma_chan* dma_chan; TYPE_17__ mdev; TYPE_9__ v4l2_dev; TYPE_4__* vdev; int notifier; struct clk* rstc; int lock; TYPE_10__* dev; TYPE_15__ vid_cap_pad; struct vb2_queue queue; int state; struct clk* mclk; int buffers; int complete; int dma_lock; int irqlock; struct clk* regs; int res; TYPE_1__ bus; } ;
struct TYPE_29__ {struct device_node* of_node; } ;
struct platform_device {TYPE_10__ dev; } ;
struct of_device_id {int dummy; } ;
struct dma_chan {int dummy; } ;
struct device_node {int dummy; } ;
struct dcmi_buf {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_30__ {int flags; } ;
struct TYPE_36__ {int device_caps; TYPE_14__ entity; int * lock; int * ioctl_ops; int (* release ) (TYPE_4__*) ;int name; struct vb2_queue* queue; TYPE_9__* v4l2_dev; int * fops; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct clk*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct stm32_dcmi*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (TYPE_10__*,char*,int ) ;
 int FUNC_5 (TYPE_10__*,char*,...) ;
 int FUNC_6 (TYPE_10__*,char*) ;
 int FUNC_7 (TYPE_10__*) ;
 struct clk* FUNC_8 (TYPE_10__*,char*) ;
 struct clk* FUNC_9 (TYPE_10__*,int ) ;
 struct stm32_dcmi* FUNC_10 (TYPE_10__*,int,int ) ;
 int FUNC_11 (TYPE_10__*,int,int ,int ,int ,int ,struct stm32_dcmi*) ;
 struct clk* FUNC_12 (TYPE_10__*,int *) ;
 int FUNC_13 (struct dma_chan*) ;
 struct dma_chan* FUNC_14 (TYPE_10__*,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_17__*) ;
 int FUNC_17 (TYPE_17__*) ;
 int FUNC_18 (TYPE_14__*) ;
 int FUNC_19 (TYPE_14__*,int,TYPE_15__*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct device_node*) ;
 struct device_node* FUNC_22 (struct device_node*,int *) ;
 struct of_device_id* FUNC_23 (int ,TYPE_10__*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct device_node*) ;
 int FUNC_26 (struct platform_device*,int ) ;
 int FUNC_27 (struct platform_device*,int ,int ) ;
 int FUNC_28 (struct platform_device*,struct stm32_dcmi*) ;
 int FUNC_29 (TYPE_10__*) ;
 int FUNC_30 (struct clk*) ;
 int FUNC_31 (struct clk*) ;
 int FUNC_32 (int ,int,char*,char*) ;
 int FUNC_33 (int *) ;
 int VAR_27 ;
 int FUNC_34 (int ,char*,int) ;
 int FUNC_35 (int,int) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (TYPE_10__*,TYPE_9__*) ;
 int FUNC_38 (TYPE_9__*) ;
 int FUNC_39 (int ,struct v4l2_fwnode_endpoint*) ;
 int VAR_28 ;
 int FUNC_40 (struct vb2_queue*) ;
 TYPE_4__* FUNC_41 () ;
 int FUNC_42 (TYPE_4__*) ;
 int FUNC_43 (TYPE_4__*) ;
 int FUNC_44 (TYPE_4__*,int ,int) ;
 int FUNC_45 (TYPE_4__*,struct stm32_dcmi*) ;

__attribute__((used)) static int FUNC_46(struct platform_device *VAR_29)
{
 struct device_node *VAR_30 = VAR_29->dev.of_node;
 const struct of_device_id *VAR_31 = ((void*)0);
 struct v4l2_fwnode_endpoint VAR_32 = { .bus_type = 0 };
 struct stm32_dcmi *VAR_33;
 struct vb2_queue *VAR_34;
 struct dma_chan *VAR_35;
 struct clk *VAR_36;
 int VAR_37;
 int VAR_38 = 0;

 VAR_31 = FUNC_23(FUNC_24(VAR_27), &VAR_29->dev);
 if (!VAR_31) {
  FUNC_5(&VAR_29->dev, "Could not find a match in devicetree\n");
  return -VAR_1;
 }

 VAR_33 = FUNC_10(&VAR_29->dev, sizeof(struct stm32_dcmi), VAR_5);
 if (!VAR_33)
  return -VAR_2;

 VAR_33->rstc = FUNC_12(&VAR_29->dev, ((void*)0));
 if (FUNC_1(VAR_33->rstc)) {
  FUNC_5(&VAR_29->dev, "Could not get reset control\n");
  return FUNC_2(VAR_33->rstc);
 }


 VAR_30 = FUNC_22(VAR_30, ((void*)0));
 if (!VAR_30) {
  FUNC_5(&VAR_29->dev, "Could not find the endpoint\n");
  return -VAR_1;
 }

 VAR_38 = FUNC_39(FUNC_21(VAR_30), &VAR_32);
 FUNC_25(VAR_30);
 if (VAR_38) {
  FUNC_5(&VAR_29->dev, "Could not parse the endpoint\n");
  return VAR_38;
 }

 if (VAR_32.bus_type == VAR_17) {
  FUNC_5(&VAR_29->dev, "CSI bus not supported\n");
  return -VAR_1;
 }
 VAR_33->bus.flags = VAR_32.bus.parallel.flags;
 VAR_33->bus.bus_width = VAR_32.bus.parallel.bus_width;
 VAR_33->bus.data_shift = VAR_32.bus.parallel.data_shift;

 VAR_37 = FUNC_26(VAR_29, 0);
 if (VAR_37 <= 0)
  return VAR_37 ? VAR_37 : -VAR_3;

 VAR_33->res = FUNC_27(VAR_29, VAR_6, 0);
 if (!VAR_33->res) {
  FUNC_5(&VAR_29->dev, "Could not get resource\n");
  return -VAR_1;
 }

 VAR_33->regs = FUNC_9(&VAR_29->dev, VAR_33->res);
 if (FUNC_1(VAR_33->regs)) {
  FUNC_5(&VAR_29->dev, "Could not map registers\n");
  return FUNC_2(VAR_33->regs);
 }

 VAR_38 = FUNC_11(&VAR_29->dev, VAR_37, VAR_24,
     VAR_25, VAR_7,
     FUNC_7(&VAR_29->dev), VAR_33);
 if (VAR_38) {
  FUNC_5(&VAR_29->dev, "Unable to request irq %d\n", VAR_37);
  return VAR_38;
 }

 VAR_36 = FUNC_8(&VAR_29->dev, "mclk");
 if (FUNC_1(VAR_36)) {
  if (FUNC_2(VAR_36) != -VAR_4)
   FUNC_5(&VAR_29->dev, "Unable to get mclk\n");
  return FUNC_2(VAR_36);
 }

 VAR_35 = FUNC_14(&VAR_29->dev, "tx");
 if (!VAR_35) {
  FUNC_6(&VAR_29->dev, "Unable to request DMA channel, defer probing\n");
  return -VAR_4;
 }

 FUNC_33(&VAR_33->irqlock);
 FUNC_20(&VAR_33->lock);
 FUNC_20(&VAR_33->dma_lock);
 FUNC_15(&VAR_33->complete);
 FUNC_0(&VAR_33->buffers);

 VAR_33->dev = &VAR_29->dev;
 VAR_33->mclk = VAR_36;
 VAR_33->state = VAR_11;
 VAR_33->dma_chan = VAR_35;

 VAR_34 = &VAR_33->queue;

 VAR_33->v4l2_dev.mdev = &VAR_33->mdev;


 FUNC_34(VAR_33->mdev.model, VAR_0, sizeof(VAR_33->mdev.model));
 FUNC_32(VAR_33->mdev.bus_info, sizeof(VAR_33->mdev.bus_info),
   "platform:%s", VAR_0);
 VAR_33->mdev.dev = &VAR_29->dev;
 FUNC_17(&VAR_33->mdev);


 VAR_38 = FUNC_37(&VAR_29->dev, &VAR_33->v4l2_dev);
 if (VAR_38)
  goto err_media_device_cleanup;

 VAR_33->vdev = FUNC_41();
 if (!VAR_33->vdev) {
  VAR_38 = -VAR_2;
  goto err_device_unregister;
 }


 VAR_33->vdev->fops = &VAR_22;
 VAR_33->vdev->v4l2_dev = &VAR_33->v4l2_dev;
 VAR_33->vdev->queue = &VAR_33->queue;
 FUNC_34(VAR_33->vdev->name, VAR_8, sizeof(VAR_33->vdev->name));
 VAR_33->vdev->release = FUNC_43;
 VAR_33->vdev->ioctl_ops = &VAR_23;
 VAR_33->vdev->lock = &VAR_33->lock;
 VAR_33->vdev->device_caps = VAR_16 | VAR_15 |
      VAR_14;
 FUNC_45(VAR_33->vdev, VAR_33);


 VAR_33->vid_cap_pad.flags = VAR_10;
 VAR_38 = FUNC_19(&VAR_33->vdev->entity,
         1, &VAR_33->vid_cap_pad);
 if (VAR_38) {
  FUNC_5(VAR_33->dev, "Failed to init media entity pad\n");
  goto err_device_release;
 }
 VAR_33->vdev->entity.flags |= VAR_9;

 VAR_38 = FUNC_44(VAR_33->vdev, VAR_21, -1);
 if (VAR_38) {
  FUNC_5(VAR_33->dev, "Failed to register video device\n");
  goto err_media_entity_cleanup;
 }

 FUNC_4(VAR_33->dev, "Device registered as %s\n",
  FUNC_42(VAR_33->vdev));


 VAR_34->type = VAR_13;
 VAR_34->io_modes = VAR_19 | VAR_20 | VAR_18;
 VAR_34->lock = &VAR_33->lock;
 VAR_34->drv_priv = VAR_33;
 VAR_34->buf_struct_size = sizeof(struct dcmi_buf);
 VAR_34->ops = &VAR_26;
 VAR_34->mem_ops = &VAR_28;
 VAR_34->timestamp_flags = VAR_12;
 VAR_34->min_buffers_needed = 2;
 VAR_34->dev = &VAR_29->dev;

 VAR_38 = FUNC_40(VAR_34);
 if (VAR_38 < 0) {
  FUNC_5(&VAR_29->dev, "Failed to initialize vb2 queue\n");
  goto err_media_entity_cleanup;
 }

 VAR_38 = FUNC_3(VAR_33);
 if (VAR_38 < 0)
  goto err_media_entity_cleanup;


 VAR_38 = FUNC_30(VAR_33->rstc);
 if (VAR_38) {
  FUNC_5(&VAR_29->dev, "Failed to assert the reset line\n");
  goto err_cleanup;
 }

 FUNC_35(3000, 5000);

 VAR_38 = FUNC_31(VAR_33->rstc);
 if (VAR_38) {
  FUNC_5(&VAR_29->dev, "Failed to deassert the reset line\n");
  goto err_cleanup;
 }

 FUNC_6(&VAR_29->dev, "Probe done\n");

 FUNC_28(VAR_29, VAR_33);

 FUNC_29(&VAR_29->dev);

 return 0;

err_cleanup:
 FUNC_36(&VAR_33->notifier);
err_media_entity_cleanup:
 FUNC_18(&VAR_33->vdev->entity);
err_device_release:
 FUNC_43(VAR_33->vdev);
err_device_unregister:
 FUNC_38(&VAR_33->v4l2_dev);
err_media_device_cleanup:
 FUNC_16(&VAR_33->mdev);
 FUNC_13(VAR_33->dma_chan);

 return VAR_38;
}
