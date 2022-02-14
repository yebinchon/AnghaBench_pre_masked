
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n; int m; unsigned long fint; unsigned long clkdco; } ;
struct dpi_clk_calc_ctx {int pck_min; int pll; TYPE_1__ dsi_cinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long,int ,int ,int ,struct dpi_clk_calc_ctx*) ;

__attribute__((used)) static bool FUNC_2(int VAR_2, int VAR_3, unsigned long VAR_4,
  unsigned long VAR_5,
  void *VAR_6)
{
 struct dpi_clk_calc_ctx *VAR_7 = VAR_6;

 VAR_7->dsi_cinfo.n = VAR_2;
 VAR_7->dsi_cinfo.m = VAR_3;
 VAR_7->dsi_cinfo.fint = VAR_4;
 VAR_7->dsi_cinfo.clkdco = VAR_5;

 return FUNC_1(VAR_7->pll, VAR_5,
  VAR_7->pck_min, FUNC_0(VAR_0),
  VAR_1, VAR_7);
}
