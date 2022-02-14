
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef unsigned int u32 ;
struct TYPE_2__ {int clkin; struct dss_pll_hw* hw; } ;
struct hdmi_pll_data {TYPE_1__ pll; } ;
struct dss_pll_hw {int fint_max; int clkdco_min; } ;
struct dss_pll_clock_info {unsigned int n; unsigned int m; unsigned int mf; unsigned int* mX; unsigned int sd; unsigned long fint; unsigned long clkdco; unsigned long* clkout; } ;


 unsigned int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (char*,unsigned long,unsigned long,...) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,int) ;
 unsigned long FUNC_5 (int ,unsigned long) ;

void FUNC_6(struct hdmi_pll_data *VAR_0,
 unsigned long VAR_1, struct dss_pll_clock_info *VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;
 unsigned long VAR_6, VAR_7;
 unsigned long VAR_8;
 unsigned VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 const struct dss_pll_hw *VAR_15 = VAR_0->pll.hw;

 VAR_14 = FUNC_3(VAR_0->pll.clkin);

 FUNC_1("clkin %lu, target tmds %lu\n", VAR_14, VAR_1);

 VAR_6 = VAR_1 * 10;


 VAR_9 = FUNC_0(VAR_14, VAR_15->fint_max);
 VAR_3 = VAR_14 / VAR_9;


 VAR_8 = FUNC_5(VAR_15->clkdco_min, VAR_3);
 VAR_12 = FUNC_0(VAR_8, VAR_6);
 if (VAR_12 == 0)
  VAR_12 = 1;

 VAR_7 = VAR_6 * VAR_12;
 VAR_10 = VAR_7 / VAR_3;

 VAR_4 = VAR_3 * VAR_10;


 if (FUNC_2(VAR_7 - VAR_4 > VAR_3))
  VAR_11 = 0;
 else
  VAR_11 = (u32)FUNC_4(262144ull * (VAR_7 - VAR_4), VAR_3);

 if (VAR_11 > 0)
  VAR_4 += (u32)FUNC_4((u64)VAR_11 * VAR_3, 262144);

 VAR_5 = VAR_4 / VAR_12;


 VAR_13 = FUNC_0(VAR_3 * VAR_10, 250000000);

 FUNC_1("N = %u, M = %u, M.f = %u, M2 = %u, SD = %u\n",
  VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 FUNC_1("Fint %lu, clkdco %lu, clkout %lu\n", VAR_3, VAR_4, VAR_5);

 VAR_2->n = VAR_9;
 VAR_2->m = VAR_10;
 VAR_2->mf = VAR_11;
 VAR_2->mX[0] = VAR_12;
 VAR_2->sd = VAR_13;

 VAR_2->fint = VAR_3;
 VAR_2->clkdco = VAR_4;
 VAR_2->clkout[0] = VAR_5;
}
