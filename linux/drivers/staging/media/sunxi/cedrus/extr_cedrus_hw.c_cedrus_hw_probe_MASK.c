
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct resource {int dummy; } ;
struct cedrus_variant {int quirks; int mod_rate; int capabilities; } ;
struct cedrus_dev {TYPE_1__* dev; void* ahb_clk; void* mod_clk; void* ram_clk; void* rstc; void* base; int pdev; int capabilities; } ;
struct TYPE_12__ {int dma_pfn_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int VAR_5 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 void* FUNC_7 (TYPE_1__*,char*) ;
 void* FUNC_8 (TYPE_1__*,struct resource*) ;
 int FUNC_9 (TYPE_1__*,int,int ,int ,int ,struct cedrus_dev*) ;
 void* FUNC_10 (TYPE_1__*,int *) ;
 struct cedrus_variant* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ,int ) ;
 struct resource* FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;

int FUNC_19(struct cedrus_dev *VAR_6)
{
 const struct cedrus_variant *VAR_7;
 struct resource *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = FUNC_11(VAR_6->dev);
 if (!VAR_7)
  return -VAR_1;

 VAR_6->capabilities = VAR_7->capabilities;

 VAR_9 = FUNC_14(VAR_6->pdev, 0);
 if (VAR_9 <= 0)
  return VAR_9;
 VAR_10 = FUNC_9(VAR_6->dev, VAR_9, VAR_5,
          0, FUNC_6(VAR_6->dev), VAR_6);
 if (VAR_10) {
  FUNC_5(VAR_6->dev, "Failed to request IRQ\n");

  return VAR_10;
 }
 VAR_10 = FUNC_12(VAR_6->dev);
 if (VAR_10 && VAR_10 != -VAR_2) {
  FUNC_5(VAR_6->dev, "Failed to reserve memory\n");

  return VAR_10;
 }

 VAR_10 = FUNC_17(VAR_6->dev);
 if (VAR_10) {
  FUNC_5(VAR_6->dev, "Failed to claim SRAM\n");

  goto err_mem;
 }

 VAR_6->ahb_clk = FUNC_7(VAR_6->dev, "ahb");
 if (FUNC_0(VAR_6->ahb_clk)) {
  FUNC_5(VAR_6->dev, "Failed to get AHB clock\n");

  VAR_10 = FUNC_1(VAR_6->ahb_clk);
  goto err_sram;
 }

 VAR_6->mod_clk = FUNC_7(VAR_6->dev, "mod");
 if (FUNC_0(VAR_6->mod_clk)) {
  FUNC_5(VAR_6->dev, "Failed to get MOD clock\n");

  VAR_10 = FUNC_1(VAR_6->mod_clk);
  goto err_sram;
 }

 VAR_6->ram_clk = FUNC_7(VAR_6->dev, "ram");
 if (FUNC_0(VAR_6->ram_clk)) {
  FUNC_5(VAR_6->dev, "Failed to get RAM clock\n");

  VAR_10 = FUNC_1(VAR_6->ram_clk);
  goto err_sram;
 }

 VAR_6->rstc = FUNC_10(VAR_6->dev, ((void*)0));
 if (FUNC_0(VAR_6->rstc)) {
  FUNC_5(VAR_6->dev, "Failed to get reset control\n");

  VAR_10 = FUNC_1(VAR_6->rstc);
  goto err_sram;
 }

 VAR_8 = FUNC_15(VAR_6->pdev, VAR_3, 0);
 VAR_6->base = FUNC_8(VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_6->base)) {
  FUNC_5(VAR_6->dev, "Failed to map registers\n");

  VAR_10 = FUNC_1(VAR_6->base);
  goto err_sram;
 }

 VAR_10 = FUNC_4(VAR_6->mod_clk, VAR_7->mod_rate);
 if (VAR_10) {
  FUNC_5(VAR_6->dev, "Failed to set clock rate\n");

  goto err_sram;
 }

 VAR_10 = FUNC_3(VAR_6->ahb_clk);
 if (VAR_10) {
  FUNC_5(VAR_6->dev, "Failed to enable AHB clock\n");

  goto err_sram;
 }

 VAR_10 = FUNC_3(VAR_6->mod_clk);
 if (VAR_10) {
  FUNC_5(VAR_6->dev, "Failed to enable MOD clock\n");

  goto err_ahb_clk;
 }

 VAR_10 = FUNC_3(VAR_6->ram_clk);
 if (VAR_10) {
  FUNC_5(VAR_6->dev, "Failed to enable RAM clock\n");

  goto err_mod_clk;
 }

 VAR_10 = FUNC_16(VAR_6->rstc);
 if (VAR_10) {
  FUNC_5(VAR_6->dev, "Failed to apply reset\n");

  goto err_ram_clk;
 }

 return 0;

err_ram_clk:
 FUNC_2(VAR_6->ram_clk);
err_mod_clk:
 FUNC_2(VAR_6->mod_clk);
err_ahb_clk:
 FUNC_2(VAR_6->ahb_clk);
err_sram:
 FUNC_18(VAR_6->dev);
err_mem:
 FUNC_13(VAR_6->dev);

 return VAR_10;
}
