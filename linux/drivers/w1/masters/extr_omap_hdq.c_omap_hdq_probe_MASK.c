
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct hdq_data {int mode; int hdq_spinlock; int hdq_mutex; scalar_t__ rrw; scalar_t__ hdq_usecount; int hdq_base; struct device* dev; } ;
struct TYPE_3__ {struct hdq_data* data; int triplet; int search; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hdq_data*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,int,int,char*) ;
 struct hdq_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct device*,int,int ,int ,char*,struct hdq_data*) ;
 int VAR_3 ;
 int FUNC_8 (struct hdq_data*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,char const**) ;
 int FUNC_11 (struct hdq_data*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct hdq_data*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char const*,char*) ;
 int FUNC_20 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct hdq_data *VAR_9;
 int VAR_10, VAR_11;
 u8 VAR_12;
 const char *VAR_13;

 VAR_9 = FUNC_5(VAR_8, sizeof(*VAR_9), VAR_1);
 if (!VAR_9) {
  FUNC_3(&VAR_7->dev, "unable to allocate memory\n");
  return -VAR_0;
 }

 VAR_9->dev = VAR_8;
 FUNC_13(VAR_7, VAR_9);

 VAR_9->hdq_base = FUNC_6(VAR_7, 0);
 if (FUNC_0(VAR_9->hdq_base))
  return FUNC_1(VAR_9->hdq_base);

 VAR_9->hdq_usecount = 0;
 VAR_9->rrw = 0;
 FUNC_9(&VAR_9->hdq_mutex);

 FUNC_15(&VAR_7->dev);
 VAR_10 = FUNC_16(&VAR_7->dev);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_7->dev, "pm_runtime_get_sync failed\n");
  goto err_w1;
 }

 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10) {
  FUNC_3(&VAR_7->dev, "reset failed\n");
  goto err_irq;
 }

 VAR_12 = FUNC_8(VAR_9, VAR_2);
 FUNC_4(&VAR_7->dev, "OMAP HDQ Hardware Rev %c.%c. Driver in %s mode\n",
  (VAR_12 >> 4) + '0', (VAR_12 & 0x0f) + '0', "Interrupt");

 FUNC_18(&VAR_9->hdq_spinlock);

 VAR_11 = FUNC_12(VAR_7, 0);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_7->dev, "Failed to get IRQ: %d\n", VAR_11);
  VAR_10 = VAR_11;
  goto err_irq;
 }

 VAR_10 = FUNC_7(VAR_8, VAR_11, VAR_3, 0, "omap_hdq", VAR_9);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_7->dev, "could not request irq\n");
  goto err_irq;
 }

 FUNC_11(VAR_9);

 FUNC_17(&VAR_7->dev);

 VAR_10 = FUNC_10(VAR_7->dev.of_node, "ti,mode", &VAR_13);
 if (VAR_10 < 0 || !FUNC_19(VAR_13, "hdq")) {
  VAR_9->mode = 0;
  VAR_4.search = VAR_5;
 } else {
  VAR_9->mode = 1;
  VAR_4.triplet = VAR_6;
 }

 VAR_4.data = VAR_9;

 VAR_10 = FUNC_20(&VAR_4);
 if (VAR_10) {
  FUNC_3(&VAR_7->dev, "Failure in registering w1 master\n");
  goto err_w1;
 }

 return 0;

err_irq:
 FUNC_17(&VAR_7->dev);
err_w1:
 FUNC_14(&VAR_7->dev);

 return VAR_10;
}
