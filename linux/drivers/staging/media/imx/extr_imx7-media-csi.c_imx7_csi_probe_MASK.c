
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_async_subdev {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct imx_media_dev {int md; int v4l2_dev; int notifier; } ;
struct TYPE_7__ {int function; int * ops; } ;
struct TYPE_8__ {int * ctrl_handler; struct device* dev; int name; int grp_id; int flags; int owner; TYPE_1__ entity; int * internal_ops; } ;
struct imx7_csi {scalar_t__ irq; int lock; int ctrl_hdlr; struct imx_media_dev* vdev; TYPE_2__ sd; struct imx_media_dev* imxmd; int irqlock; struct imx_media_dev* regbase; struct imx_media_dev* mclk; struct device* dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct imx_media_dev*) ;
 int VAR_6 ;
 int FUNC_1 (struct imx_media_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct device*,char*,...) ;
 struct imx_media_dev* FUNC_3 (struct device*,char*) ;
 struct imx7_csi* FUNC_4 (struct device*,int,int ) ;
 struct imx_media_dev* FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct device*,int,int ,int ,char*,void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct imx_media_dev* FUNC_7 (struct device*,TYPE_2__*,int ) ;
 int FUNC_8 (struct imx_media_dev*) ;
 int FUNC_9 (struct imx_media_dev*) ;
 struct imx_media_dev* FUNC_10 (struct device*,int *) ;
 int FUNC_11 (struct imx_media_dev*,int *) ;
 int FUNC_12 (struct imx_media_dev*,struct device_node*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (struct platform_device*,int ) ;
 int FUNC_18 (struct platform_device*,TYPE_2__*) ;
 int FUNC_19 (int ,int,char*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_2__*,int,int *,int ,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (TYPE_2__*,struct imx7_csi*) ;
 int FUNC_27 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_14)
{
 struct device *VAR_15 = &VAR_14->dev;
 struct device_node *VAR_16 = VAR_15->of_node;
 struct imx_media_dev *VAR_17;
 struct imx7_csi *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_4(&VAR_14->dev, sizeof(*VAR_18), VAR_3);
 if (!VAR_18)
  return -VAR_2;

 VAR_18->dev = VAR_15;

 VAR_18->mclk = FUNC_3(&VAR_14->dev, "mclk");
 if (FUNC_0(VAR_18->mclk)) {
  VAR_19 = FUNC_1(VAR_18->mclk);
  FUNC_2(VAR_15, "Failed to get mclk: %d", VAR_19);
  return VAR_19;
 }

 VAR_18->irq = FUNC_17(VAR_14, 0);
 if (VAR_18->irq < 0)
  return VAR_18->irq;

 VAR_18->regbase = FUNC_5(VAR_14, 0);
 if (FUNC_0(VAR_18->regbase))
  return FUNC_1(VAR_18->regbase);

 FUNC_20(&VAR_18->irqlock);
 FUNC_16(&VAR_18->lock);


 VAR_19 = FUNC_6(VAR_15, VAR_18->irq, VAR_11, 0, "csi",
          (void *)VAR_18);
 if (VAR_19 < 0) {
  FUNC_2(VAR_15, "Request CSI IRQ failed.\n");
  goto destroy_mutex;
 }


 VAR_17 = FUNC_10(VAR_15, ((void*)0));
 if (FUNC_0(VAR_17)) {
  VAR_19 = FUNC_1(VAR_17);
  goto destroy_mutex;
 }
 FUNC_18(VAR_14, &VAR_18->sd);

 VAR_19 = FUNC_12(VAR_17, VAR_16);
 if (VAR_19 < 0 && VAR_19 != -VAR_1 && VAR_19 != -VAR_0)
  goto cleanup;

 VAR_19 = FUNC_11(VAR_17, ((void*)0));
 if (VAR_19 < 0)
  goto cleanup;

 VAR_18->imxmd = VAR_17;
 FUNC_27(&VAR_18->sd, &VAR_13);
 FUNC_26(&VAR_18->sd, VAR_18);
 VAR_18->sd.internal_ops = &VAR_10;
 VAR_18->sd.entity.ops = &VAR_9;
 VAR_18->sd.entity.function = VAR_6;
 VAR_18->sd.dev = &VAR_14->dev;
 VAR_18->sd.owner = VAR_7;
 VAR_18->sd.flags = VAR_8;
 VAR_18->sd.grp_id = VAR_5;
 FUNC_19(VAR_18->sd.name, sizeof(VAR_18->sd.name), "csi");

 VAR_18->vdev = FUNC_7(VAR_18->sd.dev, &VAR_18->sd,
        VAR_4);
 if (FUNC_0(VAR_18->vdev))
  return FUNC_1(VAR_18->vdev);

 FUNC_24(&VAR_18->ctrl_hdlr, 0);
 VAR_18->sd.ctrl_handler = &VAR_18->ctrl_hdlr;

 VAR_19 = FUNC_22(&VAR_18->sd,
      sizeof(struct v4l2_async_subdev),
      ((void*)0), 0,
      VAR_12);
 if (VAR_19)
  goto free;

 return 0;

free:
 FUNC_9(VAR_18->vdev);
 FUNC_8(VAR_18->vdev);
 FUNC_23(&VAR_18->ctrl_hdlr);

cleanup:
 FUNC_21(&VAR_17->notifier);
 FUNC_25(&VAR_17->v4l2_dev);
 FUNC_14(&VAR_17->md);
 FUNC_13(&VAR_17->md);

destroy_mutex:
 FUNC_15(&VAR_18->lock);

 return VAR_19;
}
