
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_lp_clock_info {unsigned int lp_clk_div; unsigned long lp_clk; } ;


 unsigned int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_1,
  unsigned long VAR_2, unsigned long VAR_3,
  struct dsi_lp_clock_info *VAR_4)
{
 unsigned VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_3 * 2);
 VAR_6 = VAR_1 / 2 / VAR_5;

 if (VAR_6 < VAR_2 || VAR_6 > VAR_3)
  return -VAR_0;

 VAR_4->lp_clk_div = VAR_5;
 VAR_4->lp_clk = VAR_6;

 return 0;
}
