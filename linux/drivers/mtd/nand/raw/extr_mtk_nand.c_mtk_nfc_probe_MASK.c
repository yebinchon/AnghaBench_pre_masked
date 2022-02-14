
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {void* pad_clk; void* nfi_clk; } ;
struct TYPE_4__ {int * ops; } ;
struct mtk_nfc {void* ecc; TYPE_2__ clk; void* regs; struct device* dev; int caps; TYPE_1__ controller; int chips; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 struct mtk_nfc* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int,int ,int,char*,struct mtk_nfc*) ;
 int FUNC_9 (struct device*,int ) ;
 int FUNC_10 (void*) ;
 int VAR_5 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct device*,TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_13 (struct device*,struct mtk_nfc*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct device*) ;
 void* FUNC_16 (struct device_node*) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct mtk_nfc*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct device_node *VAR_9 = VAR_8->of_node;
 struct mtk_nfc *VAR_10;
 struct resource *VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_7(VAR_8, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 FUNC_14(&VAR_10->controller);
 FUNC_1(&VAR_10->chips);
 VAR_10->controller.ops = &VAR_5;


 VAR_10->ecc = FUNC_16(VAR_9);
 if (FUNC_2(VAR_10->ecc))
  return FUNC_3(VAR_10->ecc);
 else if (!VAR_10->ecc)
  return -VAR_1;

 VAR_10->caps = FUNC_15(VAR_8);
 VAR_10->dev = VAR_8;

 VAR_11 = FUNC_18(VAR_7, VAR_4, 0);
 VAR_10->regs = FUNC_6(VAR_8, VAR_11);
 if (FUNC_2(VAR_10->regs)) {
  VAR_12 = FUNC_3(VAR_10->regs);
  goto release_ecc;
 }

 VAR_10->clk.nfi_clk = FUNC_5(VAR_8, "nfi_clk");
 if (FUNC_2(VAR_10->clk.nfi_clk)) {
  FUNC_4(VAR_8, "no clk\n");
  VAR_12 = FUNC_3(VAR_10->clk.nfi_clk);
  goto release_ecc;
 }

 VAR_10->clk.pad_clk = FUNC_5(VAR_8, "pad_clk");
 if (FUNC_2(VAR_10->clk.pad_clk)) {
  FUNC_4(VAR_8, "no pad clk\n");
  VAR_12 = FUNC_3(VAR_10->clk.pad_clk);
  goto release_ecc;
 }

 VAR_12 = FUNC_12(VAR_8, &VAR_10->clk);
 if (VAR_12)
  goto release_ecc;

 VAR_13 = FUNC_17(VAR_7, 0);
 if (VAR_13 < 0) {
  FUNC_4(VAR_8, "no nfi irq resource\n");
  VAR_12 = -VAR_0;
  goto clk_disable;
 }

 VAR_12 = FUNC_8(VAR_8, VAR_13, VAR_6, 0x0, "mtk-nand", VAR_10);
 if (VAR_12) {
  FUNC_4(VAR_8, "failed to request nfi irq\n");
  goto clk_disable;
 }

 VAR_12 = FUNC_9(VAR_8, FUNC_0(32));
 if (VAR_12) {
  FUNC_4(VAR_8, "failed to set dma mask\n");
  goto clk_disable;
 }

 FUNC_19(VAR_7, VAR_10);

 VAR_12 = FUNC_13(VAR_8, VAR_10);
 if (VAR_12) {
  FUNC_4(VAR_8, "failed to init nand chips\n");
  goto clk_disable;
 }

 return 0;

clk_disable:
 FUNC_11(&VAR_10->clk);

release_ecc:
 FUNC_10(VAR_10->ecc);

 return VAR_12;
}
