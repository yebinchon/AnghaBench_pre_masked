
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nand_sdr_timings {int tALH_min; int tCLH_min; int tCLS_min; int tALS_min; int tWHR_min; int tREH_min; int tWH_min; int tWC_min; int tWP_min; int tRC_min; int tRP_min; int tREA_max; } ;
struct nand_data_interface {int dummy; } ;
struct nand_chip {int dummy; } ;
struct TYPE_3__ {int nfi_clk; } ;
struct mtk_nfc {TYPE_2__* caps; TYPE_1__ clk; } ;
struct TYPE_4__ {int nfi_clk_div; } ;


 int FUNC_0 (int,int,int,int,int,int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct nand_sdr_timings const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 struct mtk_nfc* FUNC_5 (struct nand_chip*) ;
 struct nand_sdr_timings* FUNC_6 (struct nand_data_interface const*) ;
 int FUNC_7 (struct mtk_nfc*,int ) ;
 int FUNC_8 (struct mtk_nfc*,int,int ) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_7, int VAR_8,
     const struct nand_data_interface *VAR_9)
{
 struct mtk_nfc *VAR_10 = FUNC_5(VAR_7);
 const struct nand_sdr_timings *VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18 = 0, VAR_19 = 0;
 u32 VAR_20, VAR_21 = 0;

 VAR_11 = FUNC_6(VAR_9);
 if (FUNC_2(VAR_11))
  return -VAR_0;

 if (VAR_8 == VAR_2)
  return 0;

 VAR_12 = FUNC_3(VAR_10->clk.nfi_clk);

 VAR_12 /= VAR_10->caps->nfi_clk_div;


 VAR_12 /= 1000;

 VAR_13 = FUNC_4(VAR_11->tALH_min, VAR_11->tCLH_min) / 1000;
 VAR_13 = FUNC_1(VAR_13 * VAR_12, 1000000);
 VAR_13 &= 0xf;

 VAR_14 = FUNC_4(VAR_11->tCLS_min, VAR_11->tALS_min) / 1000;
 VAR_14 = FUNC_1(VAR_14 * VAR_12, 1000000);
 VAR_14 &= 0x3f;


 VAR_15 = 0;

 VAR_16 = VAR_11->tWHR_min / 1000;
 VAR_16 = FUNC_1(VAR_16 * VAR_12, 1000000);
 VAR_16 = FUNC_1(VAR_16 - 1, 2);
 VAR_16 &= 0xf;

 VAR_17 = FUNC_4(VAR_11->tREH_min, VAR_11->tWH_min) / 1000;
 VAR_17 = FUNC_1(VAR_17 * VAR_12, 1000000) - 1;
 VAR_17 &= 0xf;


 VAR_20 = (VAR_17 + 1) * 1000000 / VAR_12;

 VAR_20 *= 1000;





 if (VAR_20 < VAR_11->tWC_min)
  VAR_18 = VAR_11->tWC_min - VAR_20;
 VAR_18 = FUNC_4(VAR_11->tWP_min, VAR_18) / 1000;
 VAR_18 = FUNC_1(VAR_18 * VAR_12, 1000000) - 1;
 VAR_18 &= 0xf;





 if (VAR_20 < VAR_11->tRC_min)
  VAR_19 = VAR_11->tRC_min - VAR_20;
 VAR_19 = FUNC_4(VAR_19, VAR_11->tRP_min) / 1000;
 VAR_19 = FUNC_1(VAR_19 * VAR_12, 1000000) - 1;
 VAR_19 &= 0xf;


 VAR_20 = (VAR_19 + 1) * 1000000 / VAR_12;

 VAR_20 *= 1000;




 if (VAR_20 < VAR_11->tREA_max) {
  VAR_21 = VAR_11->tREA_max / 1000;
  VAR_21 = FUNC_1(VAR_21 * VAR_12, 1000000);
  VAR_21 -= (VAR_19 + 1);
  if (VAR_21 > VAR_1) {
   VAR_19 += VAR_21 - VAR_1;
   VAR_21 = VAR_1;
  }
 }
 VAR_20 = FUNC_7(VAR_10, VAR_4);
 VAR_20 &= ~VAR_5;
 VAR_20 |= VAR_21 << VAR_6;
 FUNC_8(VAR_10, VAR_20, VAR_4);
 VAR_19 = FUNC_0(VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);
 FUNC_8(VAR_10, VAR_19, VAR_3);

 return 0;
}
