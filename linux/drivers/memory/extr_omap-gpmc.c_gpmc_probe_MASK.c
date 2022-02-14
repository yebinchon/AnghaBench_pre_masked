
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct TYPE_10__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct gpmc_device {TYPE_1__* dev; scalar_t__ nirqs; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*,int,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,struct resource*) ;
 struct gpmc_device* FUNC_9 (TYPE_1__*,int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (struct gpmc_device*) ;
 int VAR_16 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ VAR_17 ;
 int FUNC_13 (struct platform_device*) ;
 int FUNC_14 (struct platform_device*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct gpmc_device*) ;
 int VAR_18 ;
 int VAR_19 ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct gpmc_device*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (struct resource*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_20)
{
 int VAR_21;
 u32 VAR_22;
 struct resource *VAR_23;
 struct gpmc_device *VAR_24;

 VAR_24 = FUNC_9(&VAR_20->dev, sizeof(*VAR_24), VAR_3);
 if (!VAR_24)
  return -VAR_2;

 VAR_24->dev = &VAR_20->dev;
 FUNC_18(VAR_20, VAR_24);

 VAR_23 = FUNC_17(VAR_20, VAR_12, 0);
 if (VAR_23 == ((void*)0))
  return -VAR_1;

 VAR_19 = VAR_23->start;
 VAR_18 = FUNC_23(VAR_23);

 VAR_13 = FUNC_8(&VAR_20->dev, VAR_23);
 if (FUNC_2(VAR_13))
  return FUNC_3(VAR_13);

 VAR_23 = FUNC_17(VAR_20, VAR_11, 0);
 if (!VAR_23) {
  FUNC_5(&VAR_20->dev, "Failed to get resource: irq\n");
  return -VAR_1;
 }

 VAR_24->irq = VAR_23->start;

 VAR_16 = FUNC_7(&VAR_20->dev, "fck");
 if (FUNC_2(VAR_16)) {
  FUNC_5(&VAR_20->dev, "Failed to get GPMC fck\n");
  return FUNC_3(VAR_16);
 }

 if (!FUNC_4(VAR_16)) {
  FUNC_5(&VAR_20->dev, "Invalid GPMC fck clock rate\n");
  return -VAR_0;
 }

 if (VAR_20->dev.of_node) {
  VAR_21 = FUNC_13(VAR_20);
  if (VAR_21)
   return VAR_21;
 } else {
  VAR_15 = VAR_4;
  VAR_17 = VAR_9;
 }

 FUNC_20(&VAR_20->dev);
 FUNC_21(&VAR_20->dev);

 VAR_22 = FUNC_15(VAR_10);
 if (FUNC_0(VAR_22) > 0x4)
  VAR_14 = VAR_6 | VAR_7;
 if (FUNC_0(VAR_22) > 0x5)
  VAR_14 |= VAR_5;
 FUNC_6(VAR_24->dev, "GPMC revision %d.%d\n", FUNC_0(VAR_22),
   FUNC_1(VAR_22));

 FUNC_12();
 VAR_21 = FUNC_10(VAR_24);
 if (VAR_21)
  goto gpio_init_failed;

 VAR_24->nirqs = VAR_8 + VAR_17;
 VAR_21 = FUNC_16(VAR_24);
 if (VAR_21) {
  FUNC_5(VAR_24->dev, "gpmc_setup_irq failed\n");
  goto gpio_init_failed;
 }

 FUNC_14(VAR_20);

 return 0;

gpio_init_failed:
 FUNC_11();
 FUNC_22(&VAR_20->dev);
 FUNC_19(&VAR_20->dev);

 return VAR_21;
}
