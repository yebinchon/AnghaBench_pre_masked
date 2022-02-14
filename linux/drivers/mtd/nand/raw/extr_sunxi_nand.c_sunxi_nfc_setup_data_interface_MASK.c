
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_nfc {int dev; int mod_clk; } ;
struct TYPE_2__ {int controller; } ;
struct sunxi_nand_chip {int clk_rate; scalar_t__ timing_ctl; int timing_cfg; TYPE_1__ nand; } ;
struct nand_sdr_timings {int tCLS_min; int tCLH_min; int tCS_min; int tCH_min; int tWP_min; int tWH_min; int tALS_min; int tDS_min; int tDH_min; int tRR_min; int tALH_min; int tRP_min; int tREH_min; int tRC_min; int tWC_min; int tWB_max; int tADL_min; int tWHR_min; int tRHW_min; int tREA_max; int tRLOH_min; } ;
struct nand_data_interface {int dummy; } ;
struct nand_chip {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct nand_sdr_timings const*) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 long FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 struct nand_sdr_timings* FUNC_5 (struct nand_data_interface const*) ;
 scalar_t__ FUNC_6 (int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 struct sunxi_nand_chip* FUNC_7 (struct nand_chip*) ;
 struct sunxi_nfc* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_7, int VAR_8,
     const struct nand_data_interface *VAR_9)
{
 struct sunxi_nand_chip *VAR_10 = FUNC_7(VAR_7);
 struct sunxi_nfc *VAR_11 = FUNC_8(VAR_10->nand.controller);
 const struct nand_sdr_timings *VAR_12;
 u32 VAR_13 = 0;
 s32 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 long VAR_19;

 VAR_12 = FUNC_5(VAR_9);
 if (FUNC_1(VAR_12))
  return -VAR_1;


 if (VAR_12->tCLS_min > VAR_13)
  VAR_13 = VAR_12->tCLS_min;


 if (VAR_12->tCLH_min > VAR_13)
  VAR_13 = VAR_12->tCLH_min;


 if (VAR_12->tCS_min > VAR_13)
  VAR_13 = VAR_12->tCS_min;


 if (VAR_12->tCH_min > VAR_13)
  VAR_13 = VAR_12->tCH_min;


 if (VAR_12->tWP_min > VAR_13)
  VAR_13 = VAR_12->tWP_min;


 if (VAR_12->tWH_min > VAR_13)
  VAR_13 = VAR_12->tWH_min;


 if (VAR_12->tALS_min > VAR_13)
  VAR_13 = VAR_12->tALS_min;


 if (VAR_12->tDS_min > VAR_13)
  VAR_13 = VAR_12->tDS_min;


 if (VAR_12->tDH_min > VAR_13)
  VAR_13 = VAR_12->tDH_min;


 if (VAR_12->tRR_min > (VAR_13 * 3))
  VAR_13 = FUNC_0(VAR_12->tRR_min, 3);


 if (VAR_12->tALH_min > VAR_13)
  VAR_13 = VAR_12->tALH_min;


 if (VAR_12->tRP_min > VAR_13)
  VAR_13 = VAR_12->tRP_min;


 if (VAR_12->tREH_min > VAR_13)
  VAR_13 = VAR_12->tREH_min;


 if (VAR_12->tRC_min > (VAR_13 * 2))
  VAR_13 = FUNC_0(VAR_12->tRC_min, 2);


 if (VAR_12->tWC_min > (VAR_13 * 2))
  VAR_13 = FUNC_0(VAR_12->tWC_min, 2);


 if (VAR_12->tWB_max > (VAR_13 * 20))
  VAR_13 = FUNC_0(VAR_12->tWB_max, 20);

 if (VAR_12->tADL_min > (VAR_13 * 32))
  VAR_13 = FUNC_0(VAR_12->tADL_min, 32);

 if (VAR_12->tWHR_min > (VAR_13 * 32))
  VAR_13 = FUNC_0(VAR_12->tWHR_min, 32);

 if (VAR_12->tRHW_min > (VAR_13 * 20))
  VAR_13 = FUNC_0(VAR_12->tRHW_min, 20);
 if (VAR_12->tREA_max > VAR_13 && !VAR_12->tRLOH_min)
  VAR_13 = VAR_12->tREA_max;

 VAR_14 = FUNC_6(VAR_6, VAR_12->tWB_max,
     VAR_13);
 if (VAR_14 < 0) {
  FUNC_4(VAR_11->dev, "unsupported tWB\n");
  return VAR_14;
 }

 VAR_15 = FUNC_0(VAR_12->tADL_min, VAR_13) >> 3;
 if (VAR_15 > 3) {
  FUNC_4(VAR_11->dev, "unsupported tADL\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_0(VAR_12->tWHR_min, VAR_13) >> 3;
 if (VAR_16 > 3) {
  FUNC_4(VAR_11->dev, "unsupported tWHR\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_6(VAR_5, VAR_12->tRHW_min,
     VAR_13);
 if (VAR_17 < 0) {
  FUNC_4(VAR_11->dev, "unsupported tRHW\n");
  return VAR_17;
 }

 if (VAR_8 == VAR_2)
  return 0;





 VAR_18 = 0x7;


 VAR_10->timing_cfg = FUNC_2(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);


 VAR_13 = FUNC_0(VAR_13, 1000);







 VAR_10->clk_rate = VAR_4 / VAR_13;
 VAR_19 = FUNC_3(VAR_11->mod_clk, VAR_10->clk_rate);
 if (VAR_19 <= 0) {
  FUNC_4(VAR_11->dev, "Unable to round clk %lu\n",
   VAR_10->clk_rate);
  return -VAR_0;
 }

 VAR_10->timing_ctl = 0;






 VAR_13 = VAR_4 / VAR_19;
 if (VAR_13 * 2 < 30 || VAR_13 * 1000 < VAR_12->tREA_max)
  VAR_10->timing_ctl = VAR_3;

 return 0;
}
