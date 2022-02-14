
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_sdr_timings {int tRC_min; int tREA_max; int tRHOH_min; int tBERS_max; int tADL_min; int tWB_max; } ;
struct nand_data_interface {int dummy; } ;
struct nand_chip {int dummy; } ;
struct meson_nfc_nand_chip {int level1_divider; int clk_rate; int bus_timing; int tbers_max; void* tadl; void* twb; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct nand_sdr_timings const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 struct nand_sdr_timings* FUNC_6 (struct nand_data_interface const*) ;
 struct meson_nfc_nand_chip* FUNC_7 (struct nand_chip*) ;

__attribute__((used)) static
int FUNC_8(struct nand_chip *VAR_5, int VAR_6,
       const struct nand_data_interface *VAR_7)
{
 struct meson_nfc_nand_chip *VAR_8 = FUNC_7(VAR_5);
 const struct nand_sdr_timings *VAR_9;
 u32 VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_6(VAR_7);
 if (FUNC_2(VAR_9))
  return -VAR_1;

 if (VAR_6 == VAR_2)
  return 0;

 VAR_10 = FUNC_0((VAR_9->tRC_min / 1000), VAR_3);
 VAR_11 = (VAR_9->tREA_max + VAR_4) / VAR_10;
 VAR_12 = (VAR_4 + VAR_9->tRHOH_min +
    VAR_9->tRC_min / 2) / VAR_10;

 VAR_8->twb = FUNC_0(FUNC_3(VAR_9->tWB_max),
           VAR_10 * VAR_3);
 VAR_8->tadl = FUNC_0(FUNC_3(VAR_9->tADL_min),
     VAR_10 * VAR_3);
 VAR_13 = FUNC_1(FUNC_3(VAR_9->tBERS_max),
     VAR_10 * VAR_3);
 VAR_8->tbers_max = FUNC_4(VAR_13);
 if (!FUNC_5(VAR_13))
  VAR_8->tbers_max++;

 VAR_11 = FUNC_0(VAR_11, 1000);
 VAR_12 = FUNC_0(VAR_12, 1000);

 if (VAR_12 < VAR_11)
  return -VAR_0;

 VAR_8->level1_divider = VAR_10;
 VAR_8->clk_rate = 1000000000 / VAR_8->level1_divider;
 VAR_8->bus_timing = (VAR_11 + VAR_12) / 2 + 1;

 return 0;
}
