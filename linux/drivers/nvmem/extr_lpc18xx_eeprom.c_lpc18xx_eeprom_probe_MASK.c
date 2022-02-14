
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct reset_control {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct lpc18xx_eeprom_dev {int val_bytes; int reg_bytes; struct reset_control* clk; struct reset_control* nvmem; void* size; struct reset_control* mem_base; struct reset_control* reg_base; } ;
struct TYPE_3__ {struct lpc18xx_eeprom_dev* priv; struct device* dev; void* size; } ;


 int FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct reset_control*) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_2 (struct reset_control*) ;
 int FUNC_3 (struct reset_control*) ;
 unsigned long FUNC_4 (struct reset_control*) ;
 int FUNC_5 (struct reset_control*) ;
 int FUNC_6 (struct device*,char*,...) ;
 struct reset_control* FUNC_7 (struct device*,char*) ;
 void* FUNC_8 (struct device*,struct resource*) ;
 struct lpc18xx_eeprom_dev* FUNC_9 (struct device*,int,int ) ;
 struct reset_control* FUNC_10 (struct device*,TYPE_1__*) ;
 struct reset_control* FUNC_11 (struct device*,int *) ;
 int FUNC_12 (struct lpc18xx_eeprom_dev*,int ,unsigned long) ;
 TYPE_1__ VAR_9 ;
 struct resource* FUNC_13 (struct platform_device*,int ,char*) ;
 int FUNC_14 (struct platform_device*,struct lpc18xx_eeprom_dev*) ;
 int FUNC_15 (struct reset_control*) ;
 void* FUNC_16 (struct resource*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_10)
{
 struct lpc18xx_eeprom_dev *VAR_11;
 struct device *VAR_12 = &VAR_10->dev;
 struct reset_control *VAR_13;
 unsigned long VAR_14;
 struct resource *VAR_15;
 int VAR_16;

 VAR_11 = FUNC_9(VAR_12, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_15 = FUNC_13(VAR_10, VAR_2, "reg");
 VAR_11->reg_base = FUNC_8(VAR_12, VAR_15);
 if (FUNC_1(VAR_11->reg_base))
  return FUNC_2(VAR_11->reg_base);

 VAR_15 = FUNC_13(VAR_10, VAR_2, "mem");
 VAR_11->mem_base = FUNC_8(VAR_12, VAR_15);
 if (FUNC_1(VAR_11->mem_base))
  return FUNC_2(VAR_11->mem_base);

 VAR_11->clk = FUNC_7(&VAR_10->dev, "eeprom");
 if (FUNC_1(VAR_11->clk)) {
  FUNC_6(&VAR_10->dev, "failed to get eeprom clock\n");
  return FUNC_2(VAR_11->clk);
 }

 VAR_16 = FUNC_5(VAR_11->clk);
 if (VAR_16 < 0) {
  FUNC_6(VAR_12, "failed to prepare/enable eeprom clk: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_13 = FUNC_11(VAR_12, ((void*)0));
 if (FUNC_1(VAR_13)) {
  FUNC_6(VAR_12, "failed to get reset: %ld\n", FUNC_2(VAR_13));
  VAR_16 = FUNC_2(VAR_13);
  goto err_clk;
 }

 VAR_16 = FUNC_15(VAR_13);
 if (VAR_16 < 0) {
  FUNC_6(VAR_12, "failed to assert reset: %d\n", VAR_16);
  goto err_clk;
 }

 VAR_11->val_bytes = 4;
 VAR_11->reg_bytes = 4;





 VAR_14 = FUNC_4(VAR_11->clk);
 VAR_14 = FUNC_0(VAR_14, VAR_6) - 1;
 FUNC_12(VAR_11, VAR_5, VAR_14);





 FUNC_12(VAR_11, VAR_3,
         VAR_4);

 FUNC_12(VAR_11, VAR_7,
         VAR_8);

 VAR_11->size = FUNC_16(VAR_15);
 VAR_9.size = FUNC_16(VAR_15);
 VAR_9.dev = VAR_12;
 VAR_9.priv = VAR_11;

 VAR_11->nvmem = FUNC_10(VAR_12, &VAR_9);
 if (FUNC_1(VAR_11->nvmem)) {
  VAR_16 = FUNC_2(VAR_11->nvmem);
  goto err_clk;
 }

 FUNC_14(VAR_10, VAR_11);

 return 0;

err_clk:
 FUNC_3(VAR_11->clk);

 return VAR_16;
}
