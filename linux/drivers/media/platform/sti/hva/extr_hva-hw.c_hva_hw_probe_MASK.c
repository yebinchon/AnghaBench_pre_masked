
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct hva_dev {int irq_its; int irq_err; scalar_t__ ip_version; int clk; int interrupt; int protect_mutex; int esram_size; int esram_addr; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,char*,int ,...) ;
 int FUNC_7 (struct device*,char*,int ,scalar_t__,...) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,struct resource*) ;
 int FUNC_10 (struct device*,int,int ,int ,int ,char*,struct hva_dev*) ;
 int FUNC_11 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (struct hva_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct platform_device*,int) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*,int ) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct resource*) ;

int FUNC_24(struct platform_device *VAR_11, struct hva_dev *VAR_12)
{
 struct device *VAR_13 = &VAR_11->dev;
 struct resource *VAR_14;
 struct resource *VAR_15;
 int VAR_16;

 FUNC_3(!VAR_12);


 VAR_14 = FUNC_16(VAR_11, VAR_5, 0);
 VAR_12->regs = FUNC_9(VAR_13, VAR_14);
 if (FUNC_1(VAR_12->regs)) {
  FUNC_6(VAR_13, "%s     failed to get regs\n", VAR_3);
  return FUNC_2(VAR_12->regs);
 }


 VAR_15 = FUNC_16(VAR_11, VAR_5, 1);
 if (!VAR_15) {
  FUNC_6(VAR_13, "%s     failed to get esram\n", VAR_3);
  return -VAR_2;
 }
 VAR_12->esram_addr = VAR_15->start;
 VAR_12->esram_size = FUNC_23(VAR_15);

 FUNC_7(VAR_13, "%s     esram reserved for address: 0x%x size:%d\n",
   VAR_3, VAR_12->esram_addr, VAR_12->esram_size);


 VAR_12->clk = FUNC_8(VAR_13, "clk_hva");
 if (FUNC_1(VAR_12->clk)) {
  FUNC_6(VAR_13, "%s     failed to get clock\n", VAR_3);
  return FUNC_2(VAR_12->clk);
 }

 VAR_16 = FUNC_4(VAR_12->clk);
 if (VAR_16 < 0) {
  FUNC_6(VAR_13, "%s     failed to prepare clock\n", VAR_3);
  VAR_12->clk = FUNC_0(-VAR_1);
  return VAR_16;
 }


 VAR_16 = FUNC_15(VAR_11, 0);
 if (VAR_16 < 0)
  goto err_clk;
 VAR_12->irq_its = VAR_16;

 VAR_16 = FUNC_10(VAR_13, VAR_12->irq_its, VAR_9,
     VAR_10,
     VAR_6,
     "hva_its_irq", VAR_12);
 if (VAR_16) {
  FUNC_6(VAR_13, "%s     failed to install status IRQ 0x%x\n",
   VAR_3, VAR_12->irq_its);
  goto err_clk;
 }
 FUNC_11(VAR_12->irq_its);


 VAR_16 = FUNC_15(VAR_11, 1);
 if (VAR_16 < 0)
  goto err_clk;
 VAR_12->irq_err = VAR_16;

 VAR_16 = FUNC_10(VAR_13, VAR_12->irq_err, VAR_7,
     VAR_8,
     VAR_6,
     "hva_err_irq", VAR_12);
 if (VAR_16) {
  FUNC_6(VAR_13, "%s     failed to install error IRQ 0x%x\n",
   VAR_3, VAR_12->irq_err);
  goto err_clk;
 }
 FUNC_11(VAR_12->irq_err);


 FUNC_14(&VAR_12->protect_mutex);


 FUNC_13(&VAR_12->interrupt);


 FUNC_20(VAR_13, VAR_0);
 FUNC_22(VAR_13);
 FUNC_21(VAR_13);
 FUNC_17(VAR_13);

 VAR_16 = FUNC_18(VAR_13);
 if (VAR_16 < 0) {
  FUNC_6(VAR_13, "%s     failed to set PM\n", VAR_3);
  goto err_clk;
 }


 VAR_12->ip_version = FUNC_12(VAR_12);

 if (VAR_12->ip_version == VAR_4) {
  VAR_16 = -VAR_1;
  goto err_pm;
 }

 FUNC_7(VAR_13, "%s     found hva device (version 0x%lx)\n", VAR_3,
   VAR_12->ip_version);

 return 0;

err_pm:
 FUNC_19(VAR_13);
err_clk:
 if (VAR_12->clk)
  FUNC_5(VAR_12->clk);

 return VAR_16;
}
