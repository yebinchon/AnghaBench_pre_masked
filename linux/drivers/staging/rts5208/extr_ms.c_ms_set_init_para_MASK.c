
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_info {int ms_clock; } ;
struct rtsx_chip {int fpga_ms_1bit_clk; int asic_ms_1bit_clk; scalar_t__ asic_code; int fpga_ms_4bit_clk; int asic_ms_4bit_clk; int fpga_ms_hg_clk; int asic_ms_hg_clk; struct ms_info ms_card; } ;


 scalar_t__ FUNC_0 (struct ms_info*) ;
 scalar_t__ FUNC_1 (struct ms_info*) ;
 scalar_t__ FUNC_2 (struct ms_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_5(struct rtsx_chip *VAR_3)
{
 struct ms_info *VAR_4 = &VAR_3->ms_card;
 int VAR_5;

 if (FUNC_0(VAR_4)) {
  if (VAR_3->asic_code)
   VAR_4->ms_clock = VAR_3->asic_ms_hg_clk;
  else
   VAR_4->ms_clock = VAR_3->fpga_ms_hg_clk;

 } else if (FUNC_2(VAR_4) || FUNC_1(VAR_4)) {
  if (VAR_3->asic_code)
   VAR_4->ms_clock = VAR_3->asic_ms_4bit_clk;
  else
   VAR_4->ms_clock = VAR_3->fpga_ms_4bit_clk;

 } else {
  if (VAR_3->asic_code)
   VAR_4->ms_clock = VAR_3->asic_ms_1bit_clk;
  else
   VAR_4->ms_clock = VAR_3->fpga_ms_1bit_clk;
 }

 VAR_5 = FUNC_4(VAR_3, VAR_4->ms_clock);
 if (VAR_5 != VAR_2)
  return VAR_1;

 VAR_5 = FUNC_3(VAR_3, VAR_0);
 if (VAR_5 != VAR_2)
  return VAR_1;

 return VAR_2;
}
