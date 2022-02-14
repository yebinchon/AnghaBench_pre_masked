
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {int sd_clock; } ;
struct rtsx_chip {int asic_sd_sdr104_clk; int fpga_sd_sdr104_clk; int asic_sd_ddr50_clk; int fpga_sd_ddr50_clk; int asic_sd_sdr50_clk; int fpga_sd_sdr50_clk; int asic_sd_hs_clk; int fpga_sd_hs_clk; int asic_mmc_52m_clk; int fpga_mmc_52m_clk; scalar_t__ asic_code; struct sd_info sd_card; } ;


 scalar_t__ FUNC_0 (struct sd_info*) ;
 scalar_t__ FUNC_1 (struct sd_info*) ;
 scalar_t__ FUNC_2 (struct sd_info*) ;
 scalar_t__ FUNC_3 (struct sd_info*) ;
 scalar_t__ FUNC_4 (struct sd_info*) ;
 scalar_t__ FUNC_5 (struct sd_info*) ;
 scalar_t__ FUNC_6 (struct sd_info*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(struct rtsx_chip *VAR_1)
{
 struct sd_info *VAR_2 = &VAR_1->sd_card;

 if (FUNC_5(VAR_2)) {
  if (VAR_1->asic_code)
   VAR_2->sd_clock = VAR_1->asic_sd_sdr104_clk;
  else
   VAR_2->sd_clock = VAR_1->fpga_sd_sdr104_clk;

 } else if (FUNC_3(VAR_2)) {
  if (VAR_1->asic_code)
   VAR_2->sd_clock = VAR_1->asic_sd_ddr50_clk;
  else
   VAR_2->sd_clock = VAR_1->fpga_sd_ddr50_clk;

 } else if (FUNC_6(VAR_2)) {
  if (VAR_1->asic_code)
   VAR_2->sd_clock = VAR_1->asic_sd_sdr50_clk;
  else
   VAR_2->sd_clock = VAR_1->fpga_sd_sdr50_clk;

 } else if (FUNC_4(VAR_2)) {
  if (VAR_1->asic_code)
   VAR_2->sd_clock = VAR_1->asic_sd_hs_clk;
  else
   VAR_2->sd_clock = VAR_1->fpga_sd_hs_clk;

 } else if (FUNC_1(VAR_2) || FUNC_2(VAR_2)) {
  if (VAR_1->asic_code)
   VAR_2->sd_clock = VAR_1->asic_mmc_52m_clk;
  else
   VAR_2->sd_clock = VAR_1->fpga_mmc_52m_clk;

 } else if (FUNC_0(VAR_2)) {
  if (VAR_1->asic_code)
   VAR_2->sd_clock = 48;
  else
   VAR_2->sd_clock = VAR_0;
 }
}
