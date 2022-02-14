
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpi_data {TYPE_1__* pll; } ;
struct dpi_clk_calc_ctx {unsigned long pck_min; unsigned long pck_max; TYPE_1__* pll; } ;
struct TYPE_2__ {int clkin; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,unsigned long,unsigned long,unsigned long,int ,struct dpi_clk_calc_ctx*) ;
 int FUNC_2 (struct dpi_clk_calc_ctx*,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct dpi_data *VAR_1, unsigned long VAR_2,
  struct dpi_clk_calc_ctx *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5, VAR_6;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->pll = VAR_1->pll;
 VAR_3->pck_min = VAR_2 - 1000;
 VAR_3->pck_max = VAR_2 + 1000;

 VAR_5 = 0;
 VAR_6 = 0;

 VAR_4 = FUNC_0(VAR_3->pll->clkin);

 return FUNC_1(VAR_3->pll, VAR_4,
   VAR_5, VAR_6,
   VAR_0, VAR_3);
}
