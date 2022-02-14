
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usdhi6_host {int imclk; void* clk; int timeout_work; void* base; void* pins_default; void* pinctrl; void* pins_uhs; int timeout; int wait; struct mmc_host* mmc; } ;
struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct mmc_host {int caps; int max_segs; int max_blk_size; int max_req_size; int max_blk_count; int max_seg_size; int f_max; int f_min; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_2 (void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*,int) ;
 int FUNC_8 (struct device*) ;
 void* FUNC_9 (struct device*,int *) ;
 void* FUNC_10 (struct device*,struct resource*) ;
 void* FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*,int,int ,int ,int ,struct usdhi6_host*) ;
 int FUNC_13 (struct device*,int,int ,int ,int ,int ,struct usdhi6_host*) ;
 int FUNC_14 (struct mmc_host*) ;
 struct mmc_host* FUNC_15 (int,struct device*) ;
 int FUNC_16 (struct mmc_host*) ;
 int FUNC_17 (struct mmc_host*) ;
 struct usdhi6_host* FUNC_18 (struct mmc_host*) ;
 int FUNC_19 (struct mmc_host*) ;
 int FUNC_20 (int) ;
 void* FUNC_21 (void*,char*) ;
 int FUNC_22 (struct platform_device*,char*) ;
 struct resource* FUNC_23 (struct platform_device*,int ,int ) ;
 int FUNC_24 (struct platform_device*,struct usdhi6_host*) ;
 int VAR_13 ;
 int FUNC_25 (struct usdhi6_host*,int ) ;
 int FUNC_26 (struct usdhi6_host*) ;
 int VAR_14 ;
 int FUNC_27 (struct usdhi6_host*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_19)
{
 struct device *VAR_20 = &VAR_19->dev;
 struct mmc_host *VAR_21;
 struct usdhi6_host *VAR_22;
 struct resource *VAR_23;
 int VAR_24, VAR_25, VAR_26;
 u32 VAR_27;
 int VAR_28;

 if (!VAR_20->of_node)
  return -VAR_0;

 VAR_24 = FUNC_22(VAR_19, "card detect");
 VAR_25 = FUNC_22(VAR_19, "data");
 VAR_26 = FUNC_22(VAR_19, "SDIO");
 if (VAR_25 < 0 || VAR_26 < 0)
  return -VAR_0;

 VAR_21 = FUNC_15(sizeof(struct usdhi6_host), VAR_20);
 if (!VAR_21)
  return -VAR_1;

 VAR_28 = FUNC_19(VAR_21);
 if (VAR_28)
  goto e_free_mmc;

 VAR_28 = FUNC_17(VAR_21);
 if (VAR_28 < 0)
  goto e_free_mmc;

 VAR_22 = FUNC_18(VAR_21);
 VAR_22->mmc = VAR_21;
 VAR_22->wait = VAR_12;
 VAR_22->timeout = FUNC_20(4000);

 VAR_22->pinctrl = FUNC_11(&VAR_19->dev);
 if (FUNC_1(VAR_22->pinctrl)) {
  VAR_28 = FUNC_2(VAR_22->pinctrl);
  goto e_free_mmc;
 }

 VAR_22->pins_uhs = FUNC_21(VAR_22->pinctrl, "state_uhs");
 if (!FUNC_1(VAR_22->pins_uhs)) {
  VAR_22->pins_default = FUNC_21(VAR_22->pinctrl,
         VAR_8);

  if (FUNC_1(VAR_22->pins_default)) {
   FUNC_6(VAR_20,
    "UHS pinctrl requires a default pin state.\n");
   VAR_28 = FUNC_2(VAR_22->pins_default);
   goto e_free_mmc;
  }
 }

 VAR_23 = FUNC_23(VAR_19, VAR_2, 0);
 VAR_22->base = FUNC_10(VAR_20, VAR_23);
 if (FUNC_1(VAR_22->base)) {
  VAR_28 = FUNC_2(VAR_22->base);
  goto e_free_mmc;
 }

 VAR_22->clk = FUNC_9(VAR_20, ((void*)0));
 if (FUNC_1(VAR_22->clk)) {
  VAR_28 = FUNC_2(VAR_22->clk);
  goto e_free_mmc;
 }

 VAR_22->imclk = FUNC_4(VAR_22->clk);

 VAR_28 = FUNC_5(VAR_22->clk);
 if (VAR_28 < 0)
  goto e_free_mmc;

 VAR_27 = FUNC_27(VAR_22, VAR_11);
 if ((VAR_27 & 0xfff) != 0xa0d) {
  FUNC_6(VAR_20, "Version not recognized %x\n", VAR_27);
  goto e_clk_off;
 }

 FUNC_7(VAR_20, "A USDHI6ROL0 SD host detected with %d ports\n",
   FUNC_27(VAR_22, VAR_9) >> VAR_10);

 FUNC_26(VAR_22);

 if (VAR_24 >= 0) {
  VAR_28 = FUNC_12(VAR_20, VAR_24, VAR_13, 0,
           FUNC_8(VAR_20), VAR_22);
  if (VAR_28 < 0)
   goto e_clk_off;
 } else {
  VAR_21->caps |= VAR_4;
 }

 VAR_28 = FUNC_13(VAR_20, VAR_25, VAR_15, VAR_16, 0,
          FUNC_8(VAR_20), VAR_22);
 if (VAR_28 < 0)
  goto e_clk_off;

 VAR_28 = FUNC_12(VAR_20, VAR_26, VAR_17, 0,
          FUNC_8(VAR_20), VAR_22);
 if (VAR_28 < 0)
  goto e_clk_off;

 FUNC_0(&VAR_22->timeout_work, VAR_18);

 FUNC_25(VAR_22, VAR_23->start);

 VAR_21->ops = &VAR_14;
 VAR_21->caps |= VAR_6 | VAR_3 |
       VAR_5;

 VAR_21->max_segs = 32;
 VAR_21->max_blk_size = 512;
 VAR_21->max_req_size = VAR_7 * VAR_21->max_segs;
 VAR_21->max_blk_count = VAR_21->max_req_size / VAR_21->max_blk_size;
 VAR_21->max_seg_size = VAR_21->max_req_size;
 if (!VAR_21->f_max)
  VAR_21->f_max = VAR_22->imclk;
 VAR_21->f_min = VAR_22->imclk / 512;

 FUNC_24(VAR_19, VAR_22);

 VAR_28 = FUNC_14(VAR_21);
 if (VAR_28 < 0)
  goto e_clk_off;

 return 0;

e_clk_off:
 FUNC_3(VAR_22->clk);
e_free_mmc:
 FUNC_16(VAR_21);

 return VAR_28;
}
