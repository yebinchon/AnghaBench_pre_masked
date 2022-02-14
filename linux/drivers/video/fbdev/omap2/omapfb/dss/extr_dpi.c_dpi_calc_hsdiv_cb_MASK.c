
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* mX; unsigned long* clkout; } ;
struct dpi_clk_calc_ctx {int pck_min; int pck_max; TYPE_1__ dsi_cinfo; } ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned long,int,int ,int ,struct dpi_clk_calc_ctx*) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(int VAR_2, unsigned long VAR_3,
  void *VAR_4)
{
 struct dpi_clk_calc_ctx *VAR_5 = VAR_4;






 if (VAR_2 > 1 && VAR_2 % 2 != 0 && VAR_5->pck_min >= 100000000)
  return 0;

 VAR_5->dsi_cinfo.mX[VAR_0] = VAR_2;
 VAR_5->dsi_cinfo.clkout[VAR_0] = VAR_3;

 return FUNC_0(VAR_3, VAR_5->pck_min, VAR_5->pck_max,
   VAR_1, VAR_5);
}
