
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; int * fops; int name; int minor; } ;
struct xsdfec_dev {scalar_t__ irq; int dev_id; int clks; TYPE_1__ miscdev; int dev_name; int waitq; int regs; struct device* dev; int error_data_lock; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int VAR_6 ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct xsdfec_dev* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,scalar_t__,int *,int ,int ,char*,struct xsdfec_dev*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct xsdfec_dev*) ;
 int FUNC_14 (int ,int ,char*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct xsdfec_dev*) ;
 int FUNC_17 (struct platform_device*,int *) ;
 int FUNC_18 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_19 (struct xsdfec_dev*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_9)
{
 struct xsdfec_dev *VAR_10;
 struct device *VAR_11;
 struct resource *VAR_12;
 int VAR_13;
 bool VAR_14 = 1;

 VAR_10 = FUNC_5(&VAR_9->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->dev = &VAR_9->dev;
 FUNC_15(&VAR_10->error_data_lock);

 VAR_13 = FUNC_17(VAR_9, &VAR_10->clks);
 if (VAR_13)
  return VAR_13;

 VAR_11 = VAR_10->dev;
 VAR_12 = FUNC_12(VAR_9, VAR_3, 0);
 VAR_10->regs = FUNC_4(VAR_11, VAR_12);
 if (FUNC_0(VAR_10->regs)) {
  VAR_13 = FUNC_1(VAR_10->regs);
  goto err_xsdfec_dev;
 }

 VAR_10->irq = FUNC_11(VAR_9, 0);
 if (VAR_10->irq < 0) {
  FUNC_2(VAR_11, "platform_get_irq failed");
  VAR_14 = 0;
 }

 VAR_13 = FUNC_19(VAR_10);
 if (VAR_13 < 0)
  goto err_xsdfec_dev;

 FUNC_16(VAR_10);


 FUNC_13(VAR_9, VAR_10);

 if (VAR_14) {
  FUNC_9(&VAR_10->waitq);

  VAR_13 = FUNC_6(VAR_11, VAR_10->irq, ((void*)0),
      VAR_8, VAR_4,
      "xilinx-sdfec16", VAR_10);
  if (VAR_13 < 0) {
   FUNC_3(VAR_11, "unable to request IRQ%d", VAR_10->irq);
   goto err_xsdfec_dev;
  }
 }

 VAR_13 = FUNC_7(&VAR_6, VAR_2);
 if (VAR_13 < 0)
  goto err_xsdfec_dev;
 VAR_10->dev_id = VAR_13;

 FUNC_14(VAR_10->dev_name, VAR_0, "xsdfec%d", VAR_10->dev_id);
 VAR_10->miscdev.minor = VAR_5;
 VAR_10->miscdev.name = VAR_10->dev_name;
 VAR_10->miscdev.fops = &VAR_7;
 VAR_10->miscdev.parent = VAR_11;
 VAR_13 = FUNC_10(&VAR_10->miscdev);
 if (VAR_13) {
  FUNC_3(VAR_11, "error:%d. Unable to register device", VAR_13);
  goto err_xsdfec_ida;
 }
 return 0;

err_xsdfec_ida:
 FUNC_8(&VAR_6, VAR_10->dev_id);
err_xsdfec_dev:
 FUNC_18(&VAR_10->clks);
 return VAR_13;
}
