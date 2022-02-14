
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct thermal_zone_device {int dummy; } ;
struct resource {int dummy; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mtk_thermal {struct thermal_zone_device* clk_auxadc; struct thermal_zone_device* clk_peri_therm; TYPE_1__* conf; TYPE_2__* dev; int lock; struct thermal_zone_device* thermal_base; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {int num_controller; int num_banks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct thermal_zone_device*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct thermal_zone_device*) ;
 int FUNC_2 (struct thermal_zone_device*) ;
 int FUNC_3 (struct thermal_zone_device*) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (TYPE_2__*,char*) ;
 struct thermal_zone_device* FUNC_7 (TYPE_2__*,struct resource*) ;
 struct mtk_thermal* FUNC_8 (TYPE_2__*,int,int ) ;
 struct thermal_zone_device* FUNC_9 (TYPE_2__*,int ,struct mtk_thermal*,int *) ;
 int FUNC_10 (TYPE_2__*,struct mtk_thermal*) ;
 int FUNC_11 (struct mtk_thermal*,int,scalar_t__,scalar_t__,int) ;
 int VAR_6 ;
 int FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (struct device_node*) ;
 int FUNC_15 (struct device_node*) ;
 struct device_node* FUNC_16 (struct device_node*,char*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct mtk_thermal*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct device_node *VAR_11, *VAR_12, *VAR_13 = VAR_7->dev.of_node;
 struct mtk_thermal *VAR_14;
 struct resource *VAR_15;
 u64 VAR_16, VAR_17;
 struct thermal_zone_device *VAR_18;

 VAR_14 = FUNC_8(&VAR_7->dev, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_2;

 VAR_14->conf = FUNC_13(&VAR_7->dev);

 VAR_14->clk_peri_therm = FUNC_6(&VAR_7->dev, "therm");
 if (FUNC_0(VAR_14->clk_peri_therm))
  return FUNC_1(VAR_14->clk_peri_therm);

 VAR_14->clk_auxadc = FUNC_6(&VAR_7->dev, "auxadc");
 if (FUNC_0(VAR_14->clk_auxadc))
  return FUNC_1(VAR_14->clk_auxadc);

 VAR_15 = FUNC_17(VAR_7, VAR_4, 0);
 VAR_14->thermal_base = FUNC_7(&VAR_7->dev, VAR_15);
 if (FUNC_0(VAR_14->thermal_base))
  return FUNC_1(VAR_14->thermal_base);

 VAR_8 = FUNC_10(&VAR_7->dev, VAR_14);
 if (VAR_8)
  return VAR_8;

 FUNC_12(&VAR_14->lock);

 VAR_14->dev = &VAR_7->dev;

 VAR_11 = FUNC_16(VAR_13, "mediatek,auxadc", 0);
 if (!VAR_11) {
  FUNC_4(&VAR_7->dev, "missing auxadc node\n");
  return -VAR_1;
 }

 VAR_16 = FUNC_14(VAR_11);

 FUNC_15(VAR_11);

 if (VAR_16 == VAR_5) {
  FUNC_4(&VAR_7->dev, "Can't get auxadc phys address\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_16(VAR_13, "mediatek,apmixedsys", 0);
 if (!VAR_12) {
  FUNC_4(&VAR_7->dev, "missing apmixedsys node\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_14(VAR_12);

 FUNC_15(VAR_12);

 if (VAR_17 == VAR_5) {
  FUNC_4(&VAR_7->dev, "Can't get auxadc phys address\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_5(&VAR_7->dev);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_14->clk_auxadc);
 if (VAR_8) {
  FUNC_4(&VAR_7->dev, "Can't enable auxadc clk: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_14->clk_peri_therm);
 if (VAR_8) {
  FUNC_4(&VAR_7->dev, "Can't enable peri clk: %d\n", VAR_8);
  goto err_disable_clk_auxadc;
 }

 for (VAR_10 = 0; VAR_10 < VAR_14->conf->num_controller ; VAR_10++)
  for (VAR_9 = 0; VAR_9 < VAR_14->conf->num_banks; VAR_9++)
   FUNC_11(VAR_14, VAR_9, VAR_17,
           VAR_16, VAR_10);

 FUNC_18(VAR_7, VAR_14);

 VAR_18 = FUNC_9(&VAR_7->dev, 0, VAR_14,
           &VAR_6);
 if (FUNC_0(VAR_18)) {
  VAR_8 = FUNC_1(VAR_18);
  goto err_disable_clk_peri_therm;
 }

 return 0;

err_disable_clk_peri_therm:
 FUNC_2(VAR_14->clk_peri_therm);
err_disable_clk_auxadc:
 FUNC_2(VAR_14->clk_auxadc);

 return VAR_8;
}
