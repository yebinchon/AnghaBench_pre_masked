
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_8__ {scalar_t__ irq; int syscon_pol_offset; int syscon_pol; struct platform_device* pdev; int base; int feat; int control_lock; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (struct device_node*,char*) ;
 scalar_t__ FUNC_15 (struct device_node*,char*,int,int *) ;
 scalar_t__ FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (struct resource*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct device_node*,char*) ;
 struct platform_device* FUNC_23 (struct device*) ;

__attribute__((used)) static int FUNC_24(struct device *VAR_7, struct device *VAR_8, void *VAR_9)
{
 struct platform_device *VAR_10 = FUNC_23(VAR_7);
 u32 VAR_11;
 int VAR_12 = 0;
 struct resource *VAR_13;
 struct device_node *VAR_14 = VAR_10->dev.of_node;

 VAR_5.pdev = VAR_10;

 FUNC_21(&VAR_5.control_lock);

 VAR_5.feat = FUNC_8();
 if (!VAR_5.feat)
  return -VAR_2;

 VAR_13 = FUNC_17(VAR_5.pdev, VAR_4, 0);
 if (!VAR_13) {
  FUNC_0("can't get IORESOURCE_MEM DISPC\n");
  return -VAR_1;
 }

 VAR_5.base = FUNC_7(&VAR_10->dev, VAR_13->start,
      FUNC_20(VAR_13));
 if (!VAR_5.base) {
  FUNC_0("can't ioremap DISPC\n");
  return -VAR_3;
 }

 VAR_5.irq = FUNC_16(VAR_5.pdev, 0);
 if (VAR_5.irq < 0) {
  FUNC_0("platform_get_irq failed\n");
  return -VAR_2;
 }

 if (VAR_14 && FUNC_14(VAR_14, "syscon-pol")) {
  VAR_5.syscon_pol = FUNC_22(VAR_14, "syscon-pol");
  if (FUNC_2(VAR_5.syscon_pol)) {
   FUNC_6(&VAR_10->dev, "failed to get syscon-pol regmap\n");
   return FUNC_3(VAR_5.syscon_pol);
  }

  if (FUNC_15(VAR_14, "syscon-pol", 1,
    &VAR_5.syscon_pol_offset)) {
   FUNC_6(&VAR_10->dev, "failed to get syscon-pol offset\n");
   return -VAR_1;
  }
 }

 FUNC_19(&VAR_10->dev);

 VAR_12 = FUNC_10();
 if (VAR_12)
  goto err_runtime_get;

 FUNC_4();

 VAR_11 = FUNC_9(VAR_0);
 FUNC_5(&VAR_10->dev, "OMAP DISPC rev %d.%d\n",
        FUNC_1(VAR_11, 7, 4), FUNC_1(VAR_11, 3, 0));

 FUNC_11();

 FUNC_13();

 FUNC_12("dispc", VAR_6);

 return 0;

err_runtime_get:
 FUNC_18(&VAR_10->dev);
 return VAR_12;
}
