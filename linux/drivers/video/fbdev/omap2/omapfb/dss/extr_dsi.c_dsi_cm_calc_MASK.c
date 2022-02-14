
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_dsi_config {int hs_clk_min; int hs_clk_max; TYPE_1__* timings; int pixel_format; } ;
struct TYPE_4__ {int clkin; } ;
struct dsi_data {int num_lanes_used; TYPE_2__ pll; int pdev; } ;
struct dsi_clk_calc_ctx {unsigned long req_pck_min; unsigned long req_pck_nom; unsigned long req_pck_max; TYPE_2__* pll; struct omap_dss_dsi_config const* config; int dsidev; } ;
struct TYPE_3__ {unsigned long pixelclock; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,unsigned long,unsigned long,unsigned long,int ,struct dsi_clk_calc_ctx*) ;
 unsigned long FUNC_3 (int,unsigned long) ;
 int FUNC_4 (struct dsi_clk_calc_ctx*,int ,int) ;

__attribute__((used)) static bool FUNC_5(struct dsi_data *VAR_1,
  const struct omap_dss_dsi_config *VAR_2,
  struct dsi_clk_calc_ctx *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10;

 VAR_4 = FUNC_0(VAR_1->pll.clkin);
 VAR_5 = FUNC_1(VAR_2->pixel_format);
 VAR_6 = VAR_1->num_lanes_used - 1;







 VAR_9 = VAR_2->timings->pixelclock;
 VAR_9 = VAR_9 * 3 / 2;
 VAR_10 = VAR_9 * VAR_5 / 8 / VAR_6;

 FUNC_4(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->dsidev = VAR_1->pdev;
 VAR_3->pll = &VAR_1->pll;
 VAR_3->config = VAR_2;
 VAR_3->req_pck_min = VAR_9;
 VAR_3->req_pck_nom = VAR_9;
 VAR_3->req_pck_max = VAR_9 * 3 / 2;

 VAR_7 = FUNC_3(VAR_2->hs_clk_min * 4, VAR_10 * 4 * 4);
 VAR_8 = VAR_2->hs_clk_max * 4;

 return FUNC_2(VAR_3->pll, VAR_4,
   VAR_7, VAR_8,
   VAR_0, VAR_3);
}
