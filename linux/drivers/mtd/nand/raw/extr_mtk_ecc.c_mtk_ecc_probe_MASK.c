
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mtk_ecc {int lock; struct device* dev; int clk; int regs; void* eccdata; TYPE_1__* caps; } ;
struct TYPE_2__ {size_t num_ecc_strength; size_t* ecc_strength; size_t parity_bits; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int *) ;
 int FUNC_6 (struct device*,struct resource*) ;
 void* FUNC_7 (struct device*,size_t,int ) ;
 int FUNC_8 (struct device*,int,int ,int,char*,struct mtk_ecc*) ;
 int FUNC_9 (struct device*,int ) ;
 int VAR_4 ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (struct device*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct mtk_ecc*) ;
 size_t FUNC_15 (size_t,int) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct mtk_ecc *VAR_7;
 struct resource *VAR_8;
 u32 VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = FUNC_7(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->caps = FUNC_11(VAR_6);

 VAR_9 = VAR_7->caps->num_ecc_strength - 1;
 VAR_9 = VAR_7->caps->ecc_strength[VAR_9];
 VAR_9 = (VAR_9 * VAR_7->caps->parity_bits + 7) >> 3;
 VAR_9 = FUNC_15(VAR_9, 4);
 VAR_7->eccdata = FUNC_7(VAR_6, VAR_9, VAR_2);
 if (!VAR_7->eccdata)
  return -VAR_1;

 VAR_8 = FUNC_13(VAR_5, VAR_3, 0);
 VAR_7->regs = FUNC_6(VAR_6, VAR_8);
 if (FUNC_1(VAR_7->regs)) {
  FUNC_3(VAR_6, "failed to map regs: %ld\n", FUNC_2(VAR_7->regs));
  return FUNC_2(VAR_7->regs);
 }

 VAR_7->clk = FUNC_5(VAR_6, ((void*)0));
 if (FUNC_1(VAR_7->clk)) {
  FUNC_3(VAR_6, "failed to get clock: %ld\n", FUNC_2(VAR_7->clk));
  return FUNC_2(VAR_7->clk);
 }

 VAR_10 = FUNC_12(VAR_5, 0);
 if (VAR_10 < 0) {
  FUNC_3(VAR_6, "failed to get irq: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_11 = FUNC_9(VAR_6, FUNC_0(32));
 if (VAR_11) {
  FUNC_3(VAR_6, "failed to set DMA mask\n");
  return VAR_11;
 }

 VAR_11 = FUNC_8(VAR_6, VAR_10, VAR_4, 0x0, "mtk-ecc", VAR_7);
 if (VAR_11) {
  FUNC_3(VAR_6, "failed to request irq\n");
  return -VAR_0;
 }

 VAR_7->dev = VAR_6;
 FUNC_10(&VAR_7->lock);
 FUNC_14(VAR_5, VAR_7);
 FUNC_4(VAR_6, "probed\n");

 return 0;
}
