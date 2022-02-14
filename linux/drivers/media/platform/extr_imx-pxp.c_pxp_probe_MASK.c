
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {char* name; int num; int * v4l2_dev; int * lock; } ;
struct resource {int dummy; } ;
struct pxp_dev {int clk; int v4l2_dev; int m2m_dev; int dev_mutex; struct video_device vfd; int num_inst; int irqlock; int mmio; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,struct resource*) ;
 struct pxp_dev* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,int,int *,int ,int ,int ,struct pxp_dev*) ;
 int VAR_5 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct pxp_dev*) ;
 int VAR_6 ;
 int FUNC_15 (struct pxp_dev*) ;
 struct video_device VAR_7 ;
 int FUNC_16 (char*,int,char*,char*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,char*) ;
 int FUNC_21 (int *,char*,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct video_device*,int ,int ) ;
 int FUNC_25 (struct video_device*,struct pxp_dev*) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_8)
{
 struct pxp_dev *VAR_9;
 struct resource *VAR_10;
 struct video_device *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_9 = FUNC_9(&VAR_8->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->clk = FUNC_7(&VAR_8->dev, "axi");
 if (FUNC_0(VAR_9->clk)) {
  VAR_13 = FUNC_1(VAR_9->clk);
  FUNC_5(&VAR_8->dev, "Failed to get clk: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_10 = FUNC_13(VAR_8, VAR_2, 0);
 VAR_9->mmio = FUNC_8(&VAR_8->dev, VAR_10);
 if (FUNC_0(VAR_9->mmio)) {
  VAR_13 = FUNC_1(VAR_9->mmio);
  FUNC_5(&VAR_8->dev, "Failed to map register space: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_12 = FUNC_12(VAR_8, 0);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_13 = FUNC_10(&VAR_8->dev, VAR_12, ((void*)0), VAR_6,
   VAR_3, FUNC_6(&VAR_8->dev), VAR_9);
 if (VAR_13 < 0) {
  FUNC_5(&VAR_8->dev, "Failed to request irq: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_4(VAR_9->clk);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_15(VAR_9);
 if (VAR_13 < 0) {
  FUNC_5(&VAR_8->dev, "PXP reset timeout: %d\n", VAR_13);
  goto err_clk;
 }

 FUNC_17(&VAR_9->irqlock);

 VAR_13 = FUNC_18(&VAR_8->dev, &VAR_9->v4l2_dev);
 if (VAR_13)
  goto err_clk;

 FUNC_2(&VAR_9->num_inst, 0);
 FUNC_11(&VAR_9->dev_mutex);

 VAR_9->vfd = VAR_7;
 VAR_11 = &VAR_9->vfd;
 VAR_11->lock = &VAR_9->dev_mutex;
 VAR_11->v4l2_dev = &VAR_9->v4l2_dev;

 FUNC_25(VAR_11, VAR_9);
 FUNC_16(VAR_11->name, sizeof(VAR_11->name), "%s", VAR_7.name);
 FUNC_21(&VAR_9->v4l2_dev,
   "Device registered as /dev/video%d\n", VAR_11->num);

 FUNC_14(VAR_8, VAR_9);

 VAR_9->m2m_dev = FUNC_22(&VAR_5);
 if (FUNC_0(VAR_9->m2m_dev)) {
  FUNC_20(&VAR_9->v4l2_dev, "Failed to init mem2mem device\n");
  VAR_13 = FUNC_1(VAR_9->m2m_dev);
  goto err_v4l2;
 }

 VAR_13 = FUNC_24(VAR_11, VAR_4, 0);
 if (VAR_13) {
  FUNC_20(&VAR_9->v4l2_dev, "Failed to register video device\n");
  goto err_m2m;
 }

 return 0;

err_m2m:
 FUNC_23(VAR_9->m2m_dev);
err_v4l2:
 FUNC_19(&VAR_9->v4l2_dev);
err_clk:
 FUNC_3(VAR_9->clk);

 return VAR_13;
}
