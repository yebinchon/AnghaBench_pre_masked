
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lck_div; int pck_div; unsigned long lck; unsigned long pck; } ;
struct dsi_clk_calc_ctx {int dsi_vm; TYPE_1__* config; int dispc_vm; TYPE_2__ dispc_cinfo; } ;
struct TYPE_3__ {int * timings; } ;


 int FUNC_0 (struct dsi_clk_calc_ctx*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,int *) ;

__attribute__((used)) static bool FUNC_4(int VAR_0, int VAR_1, unsigned long VAR_2,
  unsigned long VAR_3, void *VAR_4)
{
 struct dsi_clk_calc_ctx *VAR_5 = VAR_4;

 VAR_5->dispc_cinfo.lck_div = VAR_0;
 VAR_5->dispc_cinfo.pck_div = VAR_1;
 VAR_5->dispc_cinfo.lck = VAR_2;
 VAR_5->dispc_cinfo.pck = VAR_3;

 if (FUNC_0(VAR_5) == 0)
  return 0;
 return 1;
}
