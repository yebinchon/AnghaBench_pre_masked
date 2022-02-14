
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ssc_device {int irq; int regs; int list; int clk; int phybase; int clk_from_rk_pin; struct atmel_ssc_platform_data* pdata; struct platform_device* pdev; } ;
struct resource {int start; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct atmel_ssc_platform_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 struct atmel_ssc_platform_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*,struct resource*) ;
 struct ssc_device* FUNC_10 (TYPE_1__*,int,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (struct device_node*,char*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct ssc_device*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int VAR_7 ;
 int FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (struct ssc_device*) ;
 int FUNC_20 (int ,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_9)
{
 struct resource *VAR_10;
 struct ssc_device *VAR_11;
 const struct atmel_ssc_platform_data *VAR_12;

 VAR_11 = FUNC_10(&VAR_9->dev, sizeof(struct ssc_device), VAR_3);
 if (!VAR_11) {
  FUNC_5(&VAR_9->dev, "out of memory\n");
  return -VAR_1;
 }

 VAR_11->pdev = VAR_9;

 VAR_12 = FUNC_2(VAR_9);
 if (!VAR_12)
  return -VAR_0;
 VAR_11->pdata = (struct atmel_ssc_platform_data *)VAR_12;

 if (VAR_9->dev.of_node) {
  struct device_node *VAR_13 = VAR_9->dev.of_node;
  VAR_11->clk_from_rk_pin =
   FUNC_12(VAR_13, "atmel,clk-from-rk-pin");
 }

 VAR_10 = FUNC_14(VAR_9, VAR_5, 0);
 VAR_11->regs = FUNC_9(&VAR_9->dev, VAR_10);
 if (FUNC_0(VAR_11->regs))
  return FUNC_1(VAR_11->regs);

 VAR_11->phybase = VAR_10->start;

 VAR_11->clk = FUNC_8(&VAR_9->dev, "pclk");
 if (FUNC_0(VAR_11->clk)) {
  FUNC_5(&VAR_9->dev, "no pclk clock defined\n");
  return -VAR_2;
 }


 FUNC_4(VAR_11->clk);
 FUNC_20(VAR_11->regs, VAR_4, -1);
 FUNC_18(VAR_11->regs, VAR_6);
 FUNC_3(VAR_11->clk);

 VAR_11->irq = FUNC_13(VAR_9, 0);
 if (!VAR_11->irq) {
  FUNC_5(&VAR_9->dev, "could not get irq\n");
  return -VAR_2;
 }

 FUNC_16(&VAR_8);
 FUNC_11(&VAR_11->list, &VAR_7);
 FUNC_17(&VAR_8);

 FUNC_15(VAR_9, VAR_11);

 FUNC_7(&VAR_9->dev, "Atmel SSC device at 0x%p (irq %d)\n",
   VAR_11->regs, VAR_11->irq);

 if (FUNC_19(VAR_11))
  FUNC_6(&VAR_9->dev, "failed to auto-setup ssc for audio\n");

 return 0;
}
