
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int pad_tune; int emmc_top_cmd; int emmc_top_control; int pad_cmd_tune; int iocon; } ;
struct TYPE_8__ {int pad_tune; int emmc_top_cmd; int emmc_top_control; int iocon; } ;
struct msdc_host {int mclk; int base; int src_clk_freq; unsigned char timing; int top_base; int hs400_cmd_int_delay; TYPE_3__* mmc; int dev; TYPE_2__* dev_comp; TYPE_1__ saved_tune_para; TYPE_4__ def_tune_para; int timeout_clks; int timeout_ns; int src_clk; scalar_t__ src_clk_cg; } ;
struct TYPE_7__ {int actual_clock; } ;
struct TYPE_6__ {int pad_tune_reg; int clk_div_bits; scalar_t__ hs400_tune; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct msdc_host*,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int,int) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static void FUNC_11(struct msdc_host *VAR_18, unsigned char VAR_19, u32 VAR_20)
{
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25 = VAR_18->dev_comp->pad_tune_reg;

 if (!VAR_20) {
  FUNC_4(VAR_18->dev, "set mclk to 0\n");
  VAR_18->mclk = 0;
  VAR_18->mmc->actual_clock = 0;
  FUNC_7(VAR_18->base + VAR_5, VAR_10);
  return;
 }

 VAR_22 = FUNC_6(VAR_18->base + VAR_14);
 FUNC_7(VAR_18->base + VAR_14, VAR_22);
 if (VAR_18->dev_comp->clk_div_bits == 8)
  FUNC_7(VAR_18->base + VAR_5, VAR_12);
 else
  FUNC_7(VAR_18->base + VAR_5,
        VAR_13);
 if (VAR_19 == VAR_4 ||
     VAR_19 == VAR_2 ||
     VAR_19 == VAR_3) {
  if (VAR_19 == VAR_3)
   VAR_21 = 0x3;
  else
   VAR_21 = 0x2;

  if (VAR_20 >= (VAR_18->src_clk_freq >> 2)) {
   VAR_23 = 0;
   VAR_24 = VAR_18->src_clk_freq >> 2;
  } else {
   VAR_23 = (VAR_18->src_clk_freq + ((VAR_20 << 2) - 1)) / (VAR_20 << 2);
   VAR_24 = (VAR_18->src_clk_freq >> 2) / VAR_23;
   VAR_23 = (VAR_23 >> 1);
  }

  if (VAR_19 == VAR_3 &&
      VAR_20 >= (VAR_18->src_clk_freq >> 1)) {
   if (VAR_18->dev_comp->clk_div_bits == 8)
    FUNC_8(VAR_18->base + VAR_5,
          VAR_12);
   else
    FUNC_8(VAR_18->base + VAR_5,
          VAR_13);
   VAR_24 = VAR_18->src_clk_freq >> 1;
   VAR_23 = 0;
  }
 } else if (VAR_20 >= VAR_18->src_clk_freq) {
  VAR_21 = 0x1;
  VAR_23 = 0;
  VAR_24 = VAR_18->src_clk_freq;
 } else {
  VAR_21 = 0x0;
  if (VAR_20 >= (VAR_18->src_clk_freq >> 1)) {
   VAR_23 = 0;
   VAR_24 = VAR_18->src_clk_freq >> 1;
  } else {
   VAR_23 = (VAR_18->src_clk_freq + ((VAR_20 << 2) - 1)) / (VAR_20 << 2);
   VAR_24 = (VAR_18->src_clk_freq >> 2) / VAR_23;
  }
 }
 FUNC_7(VAR_18->base + VAR_5, VAR_10);




 if (VAR_18->src_clk_cg)
  FUNC_0(VAR_18->src_clk_cg);
 else
  FUNC_0(FUNC_1(VAR_18->src_clk));
 if (VAR_18->dev_comp->clk_div_bits == 8)
  FUNC_9(VAR_18->base + VAR_5,
         VAR_8 | VAR_6,
         (VAR_21 << 8) | VAR_23);
 else
  FUNC_9(VAR_18->base + VAR_5,
         VAR_9 | VAR_7,
         (VAR_21 << 12) | VAR_23);
 if (VAR_18->src_clk_cg)
  FUNC_2(VAR_18->src_clk_cg);
 else
  FUNC_2(FUNC_1(VAR_18->src_clk));

 while (!(FUNC_6(VAR_18->base + VAR_5) & VAR_11))
  FUNC_3();
 FUNC_8(VAR_18->base + VAR_5, VAR_10);
 VAR_18->mmc->actual_clock = VAR_24;
 VAR_18->mclk = VAR_20;
 VAR_18->timing = VAR_19;

 FUNC_5(VAR_18, VAR_18->timeout_ns, VAR_18->timeout_clks);
 FUNC_8(VAR_18->base + VAR_14, VAR_22);





 if (VAR_18->mmc->actual_clock <= 52000000) {
  FUNC_10(VAR_18->def_tune_para.iocon, VAR_18->base + VAR_15);
  if (VAR_18->top_base) {
   FUNC_10(VAR_18->def_tune_para.emmc_top_control,
          VAR_18->top_base + VAR_1);
   FUNC_10(VAR_18->def_tune_para.emmc_top_cmd,
          VAR_18->top_base + VAR_0);
  } else {
   FUNC_10(VAR_18->def_tune_para.pad_tune,
          VAR_18->base + VAR_25);
  }
 } else {
  FUNC_10(VAR_18->saved_tune_para.iocon, VAR_18->base + VAR_15);
  FUNC_10(VAR_18->saved_tune_para.pad_cmd_tune,
         VAR_18->base + VAR_17);
  if (VAR_18->top_base) {
   FUNC_10(VAR_18->saved_tune_para.emmc_top_control,
          VAR_18->top_base + VAR_1);
   FUNC_10(VAR_18->saved_tune_para.emmc_top_cmd,
          VAR_18->top_base + VAR_0);
  } else {
   FUNC_10(VAR_18->saved_tune_para.pad_tune,
          VAR_18->base + VAR_25);
  }
 }

 if (VAR_19 == VAR_3 &&
     VAR_18->dev_comp->hs400_tune)
  FUNC_9(VAR_18->base + VAR_25,
         VAR_16,
         VAR_18->hs400_cmd_int_delay);
 FUNC_4(VAR_18->dev, "sclk: %d, timing: %d\n", VAR_18->mmc->actual_clock,
  VAR_19);
}
