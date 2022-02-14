
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct nand_sdr_timings {int tRC_min; int tREA_max; scalar_t__ tR_max; scalar_t__ tWB_max; scalar_t__ tDH_min; scalar_t__ tDS_min; scalar_t__ tALS_min; } ;
struct gpmi_nfc_hardware_timing {int clk_rate; int timing0; int ctrl1n; int timing1; } ;
struct gpmi_nand_data {TYPE_1__* devdata; struct gpmi_nfc_hardware_timing hw; } ;
struct TYPE_2__ {unsigned int max_chain_delay; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_6 (scalar_t__,unsigned int) ;
 unsigned int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct gpmi_nand_data *VAR_5,
         const struct nand_sdr_timings *VAR_6)
{
 struct gpmi_nfc_hardware_timing *VAR_7 = &VAR_5->hw;
 unsigned int VAR_8 = VAR_5->devdata->max_chain_delay;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14;
 bool VAR_15;
 int VAR_16, VAR_17;
 u16 VAR_18;
 u8 VAR_19;

 if (VAR_6->tRC_min >= 30000) {

  VAR_7->clk_rate = 22000000;
  VAR_19 = VAR_2;
 } else if (VAR_6->tRC_min >= 25000) {

  VAR_7->clk_rate = 80000000;
  VAR_19 = VAR_3;
 } else {

  VAR_7->clk_rate = 100000000;
  VAR_19 = VAR_3;
 }


 VAR_9 = FUNC_7((u64)VAR_4 * 1000, VAR_7->clk_rate);

 VAR_13 = FUNC_6(VAR_6->tALS_min, VAR_9);
 VAR_11 = FUNC_6(VAR_6->tDS_min, VAR_9);
 VAR_12 = FUNC_6(VAR_6->tDH_min, VAR_9);
 VAR_18 = FUNC_6(VAR_6->tWB_max + VAR_6->tR_max, VAR_9);

 VAR_7->timing0 = FUNC_2(VAR_13) |
        FUNC_3(VAR_12) |
        FUNC_4(VAR_11);
 VAR_7->timing1 = FUNC_5(VAR_18 * 4096);
 if (VAR_9 > VAR_8) {
  VAR_15 = 1;
  VAR_10 = VAR_9 / 2;
 } else {
  VAR_15 = 0;
  VAR_10 = VAR_9;
 }

 VAR_14 = VAR_11 * VAR_9;
 VAR_16 = (VAR_6->tREA_max + 4000 - VAR_14) * 8;
 if (VAR_16 > 0)
  VAR_17 = VAR_16 / VAR_10;
 else
  VAR_17 = 0;

 VAR_7->ctrl1n = FUNC_1(VAR_19);
 if (VAR_17)
  VAR_7->ctrl1n |= FUNC_0(VAR_17) |
         VAR_0 |
         (VAR_15 ? VAR_1 : 0);
}
