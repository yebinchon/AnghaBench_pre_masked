
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tegra_nand_controller {scalar_t__ regs; int clk; } ;
struct nand_sdr_timings {int tCS_min; int tCH_min; int tALS_min; int tALH_min; int tRP_min; int tREA_max; int tWB_max; int tWHR_min; int tWH_min; int tWP_min; int tREH_min; int tADL_min; int tRC_min; int tRR_min; int tAR_min; } ;


 unsigned int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (unsigned int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 unsigned int FUNC_8 (int ) ;
 unsigned int FUNC_9 (int ) ;
 unsigned int FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_16(struct tegra_nand_controller *VAR_2,
        const struct nand_sdr_timings *VAR_3)
{




 unsigned int VAR_4 = FUNC_12(VAR_2->clk) / 1000000;
 unsigned int VAR_5 = FUNC_0(1000000, VAR_4);
 u32 VAR_6, VAR_7 = 0;

 VAR_6 = FUNC_0(FUNC_14(VAR_3->tAR_min, VAR_3->tRR_min,
    VAR_3->tRC_min), VAR_5);
 VAR_7 |= FUNC_3(FUNC_1(VAR_6, 3));

 VAR_6 = FUNC_0(FUNC_13(FUNC_13(VAR_3->tCS_min, VAR_3->tCH_min),
          FUNC_13(VAR_3->tALS_min, VAR_3->tALH_min)),
      VAR_5);
 VAR_7 |= FUNC_4(FUNC_1(VAR_6, 2));

 VAR_6 = FUNC_0(FUNC_13(VAR_3->tRP_min, VAR_3->tREA_max) + 6000,
      VAR_5);
 VAR_7 |= FUNC_6(FUNC_1(VAR_6, 1)) | FUNC_7(FUNC_1(VAR_6, 1));

 VAR_7 |= FUNC_8(FUNC_1(FUNC_0(VAR_3->tWB_max, VAR_5), 1));
 VAR_7 |= FUNC_10(FUNC_1(FUNC_0(VAR_3->tWHR_min, VAR_5), 1));
 VAR_7 |= FUNC_9(FUNC_1(FUNC_0(VAR_3->tWH_min, VAR_5), 1));
 VAR_7 |= FUNC_11(FUNC_1(FUNC_0(VAR_3->tWP_min, VAR_5), 1));
 VAR_7 |= FUNC_5(FUNC_1(FUNC_0(VAR_3->tREH_min, VAR_5), 1));

 FUNC_15(VAR_7, VAR_2->regs + VAR_0);

 VAR_6 = FUNC_0(VAR_3->tADL_min, VAR_5);
 VAR_7 = FUNC_2(FUNC_1(VAR_6, 3));

 FUNC_15(VAR_7, VAR_2->regs + VAR_1);
}
