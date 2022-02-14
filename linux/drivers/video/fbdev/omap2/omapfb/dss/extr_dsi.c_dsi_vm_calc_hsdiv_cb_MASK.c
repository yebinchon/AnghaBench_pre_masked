
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* mX; unsigned long* clkout; } ;
struct dsi_clk_calc_ctx {int req_pck_max; int req_pck_min; TYPE_2__* config; TYPE_1__ dsi_cinfo; } ;
struct TYPE_4__ {scalar_t__ trans_mode; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long,int ,unsigned long,int ,struct dsi_clk_calc_ctx*) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_1(int VAR_3, unsigned long VAR_4,
  void *VAR_5)
{
 struct dsi_clk_calc_ctx *VAR_6 = VAR_5;
 unsigned long VAR_7;

 VAR_6->dsi_cinfo.mX[VAR_0] = VAR_3;
 VAR_6->dsi_cinfo.clkout[VAR_0] = VAR_4;






 if (VAR_6->config->trans_mode == VAR_1)
  VAR_7 = VAR_6->req_pck_max + 10000000;
 else
  VAR_7 = VAR_6->req_pck_max;

 return FUNC_0(VAR_4, VAR_6->req_pck_min, VAR_7,
   VAR_2, VAR_6);
}
