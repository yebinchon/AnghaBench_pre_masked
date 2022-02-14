
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_configure_opts_mipi_dphy {int clk_post; int clk_pre; int clk_prepare; int clk_settle; int clk_trail; int clk_zero; int hs_exit; int hs_prepare; int hs_zero; int hs_settle; int hs_skip; int init; int lpx; int ta_get; int ta_go; int ta_sure; int wakeup; unsigned long long hs_clk_rate; unsigned int lanes; int hs_trail; scalar_t__ eot; scalar_t__ d_term_en; scalar_t__ clk_term_en; scalar_t__ clk_miss; } ;


 unsigned long long FUNC_0 (int ,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long long,unsigned long long) ;
 int FUNC_2 (int,int) ;

int FUNC_3(unsigned long VAR_2,
         unsigned int VAR_3,
         unsigned int VAR_4,
         struct phy_configure_opts_mipi_dphy *VAR_5)
{
 unsigned long long VAR_6;
 unsigned long long VAR_7;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = VAR_2 * VAR_3;
 FUNC_1(VAR_6, VAR_4);

 VAR_7 = FUNC_0(VAR_1, VAR_6);
 FUNC_1(VAR_7, VAR_6);

 VAR_5->clk_miss = 0;
 VAR_5->clk_post = 60000 + 52 * VAR_7;
 VAR_5->clk_pre = 8000;
 VAR_5->clk_prepare = 38000;
 VAR_5->clk_settle = 95000;
 VAR_5->clk_term_en = 0;
 VAR_5->clk_trail = 60000;
 VAR_5->clk_zero = 262000;
 VAR_5->d_term_en = 0;
 VAR_5->eot = 0;
 VAR_5->hs_exit = 100000;
 VAR_5->hs_prepare = 40000 + 4 * VAR_7;
 VAR_5->hs_zero = 105000 + 6 * VAR_7;
 VAR_5->hs_settle = 85000 + 6 * VAR_7;
 VAR_5->hs_skip = 40000;
 VAR_5->hs_trail = FUNC_2(4 * 8 * VAR_7, 60000 + 4 * 4 * VAR_7);

 VAR_5->init = 100;
 VAR_5->lpx = 60000;
 VAR_5->ta_get = 5 * VAR_5->lpx;
 VAR_5->ta_go = 4 * VAR_5->lpx;
 VAR_5->ta_sure = 2 * VAR_5->lpx;
 VAR_5->wakeup = 1000;

 VAR_5->hs_clk_rate = VAR_6;
 VAR_5->lanes = VAR_4;

 return 0;
}
