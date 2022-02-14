
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ops; } ;
struct TYPE_4__ {int base_addr; } ;
struct vpfe_ccdc {TYPE_1__ ccdc_cfg; } ;
struct vpfe_device {int irq; TYPE_2__ notifier; int v4l2_dev; int sd; struct vpfe_config* cfg; int * pdev; struct vpfe_ccdc ccdc; } ;
struct vpfe_config {int asd; } ;
struct v4l2_subdev {int dummy; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct resource*) ;
 int FUNC_5 (int *,int ,int,int ) ;
 struct vpfe_device* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int,int ,int ,char*,struct vpfe_device*) ;
 int FUNC_8 (struct platform_device*,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct vpfe_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int *,TYPE_2__*) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int VAR_5 ;
 int FUNC_18 (struct vpfe_ccdc*) ;
 int FUNC_19 (struct vpfe_device*,char*) ;
 struct vpfe_config* FUNC_20 (struct vpfe_device*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_7)
{
 struct vpfe_config *VAR_8;
 struct vpfe_device *VAR_9;
 struct vpfe_ccdc *VAR_10;
 struct resource *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_6(&VAR_7->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->pdev = &VAR_7->dev;

 VAR_8 = FUNC_20(VAR_9);
 if (!VAR_8) {
  FUNC_3(&VAR_7->dev, "No platform data\n");
  return -VAR_0;
 }

 VAR_9->cfg = VAR_8;
 VAR_10 = &VAR_9->ccdc;

 VAR_11 = FUNC_9(VAR_7, VAR_4, 0);
 VAR_10->ccdc_cfg.base_addr = FUNC_4(&VAR_7->dev, VAR_11);
 if (FUNC_1(VAR_10->ccdc_cfg.base_addr)) {
  VAR_12 = FUNC_2(VAR_10->ccdc_cfg.base_addr);
  goto probe_out_cleanup;
 }

 VAR_12 = FUNC_8(VAR_7, 0);
 if (VAR_12 <= 0) {
  VAR_12 = -VAR_1;
  goto probe_out_cleanup;
 }
 VAR_9->irq = VAR_12;

 VAR_12 = FUNC_7(VAR_9->pdev, VAR_9->irq, VAR_6, 0,
          "vpfe_capture0", VAR_9);
 if (VAR_12) {
  FUNC_3(&VAR_7->dev, "Unable to request interrupt\n");
  VAR_12 = -VAR_0;
  goto probe_out_cleanup;
 }

 VAR_12 = FUNC_16(&VAR_7->dev, &VAR_9->v4l2_dev);
 if (VAR_12) {
  FUNC_19(VAR_9,
   "Unable to register v4l2 device.\n");
  goto probe_out_cleanup;
 }


 FUNC_10(VAR_7, VAR_9);

 FUNC_11(&VAR_7->dev);


 FUNC_12(&VAR_7->dev);

 FUNC_18(VAR_10);

 FUNC_13(&VAR_7->dev);

 VAR_9->sd = FUNC_5(&VAR_7->dev,
    FUNC_0(VAR_9->cfg->asd),
    sizeof(struct v4l2_subdev *),
    VAR_3);
 if (!VAR_9->sd) {
  VAR_12 = -VAR_2;
  goto probe_out_v4l2_unregister;
 }

 VAR_9->notifier.ops = &VAR_5;
 VAR_12 = FUNC_15(&VAR_9->v4l2_dev, &VAR_9->notifier);
 if (VAR_12) {
  FUNC_19(VAR_9, "Error registering async notifier\n");
  VAR_12 = -VAR_0;
  goto probe_out_v4l2_unregister;
 }

 return 0;

probe_out_v4l2_unregister:
 FUNC_17(&VAR_9->v4l2_dev);
probe_out_cleanup:
 FUNC_14(&VAR_9->notifier);
 return VAR_12;
}
