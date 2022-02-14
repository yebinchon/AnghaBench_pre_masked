
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct resource {int start; } ;
struct TYPE_7__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int base; struct platform_device* pdev; scalar_t__ wss_data; int venc_lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct resource*) ;
 struct platform_device* FUNC_9 (struct device*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct platform_device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(struct device *VAR_6, struct device *VAR_7, void *VAR_8)
{
 struct platform_device *VAR_9 = FUNC_9(VAR_6);
 u8 VAR_10;
 struct resource *VAR_11;
 int VAR_12;

 VAR_4.pdev = VAR_9;

 FUNC_4(&VAR_4.venc_lock);

 VAR_4.wss_data = 0;

 VAR_11 = FUNC_5(VAR_4.pdev, VAR_2, 0);
 if (!VAR_11) {
  FUNC_0("can't get IORESOURCE_MEM VENC\n");
  return -VAR_0;
 }

 VAR_4.base = FUNC_2(&VAR_9->dev, VAR_11->start,
     FUNC_8(VAR_11));
 if (!VAR_4.base) {
  FUNC_0("can't ioremap VENC\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_10(VAR_9);
 if (VAR_12)
  return VAR_12;

 FUNC_7(&VAR_9->dev);

 VAR_12 = FUNC_14();
 if (VAR_12)
  goto err_runtime_get;

 VAR_10 = (u8)(FUNC_13(VAR_3) & 0xff);
 FUNC_1(&VAR_9->dev, "OMAP VENC rev %d\n", VAR_10);

 FUNC_15();

 if (VAR_9->dev.of_node) {
  VAR_12 = FUNC_12(VAR_9);
  if (VAR_12) {
   FUNC_0("Invalid DT data\n");
   goto err_probe_of;
  }
 }

 FUNC_3("venc", VAR_5);

 FUNC_11(VAR_9);

 return 0;

err_probe_of:
err_runtime_get:
 FUNC_6(&VAR_9->dev);
 return VAR_12;
}
