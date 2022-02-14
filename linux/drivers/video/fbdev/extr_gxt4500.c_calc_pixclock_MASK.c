
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gxt4500_par {int refclk_ps; int pll_m; int pll_pd1; int pll_pd2; int pll_n; } ;



__attribute__((used)) static int FUNC_0(struct gxt4500_par *VAR_0)
{
 return VAR_0->refclk_ps * VAR_0->pll_m * VAR_0->pll_pd1 * VAR_0->pll_pd2
  / VAR_0->pll_n;
}
