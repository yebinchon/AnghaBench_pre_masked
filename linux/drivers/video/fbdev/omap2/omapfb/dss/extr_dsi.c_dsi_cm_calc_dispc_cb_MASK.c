
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_video_timings {unsigned long pixelclock; int hsw; int hfp; int hbp; int vsw; scalar_t__ vbp; scalar_t__ vfp; int y_res; int x_res; } ;
struct TYPE_3__ {int lck_div; int pck_div; unsigned long lck; unsigned long pck; } ;
struct dsi_clk_calc_ctx {TYPE_2__* config; TYPE_1__ dispc_cinfo; struct omap_video_timings dispc_vm; } ;
struct TYPE_4__ {struct omap_video_timings* timings; } ;



__attribute__((used)) static bool FUNC_0(int VAR_0, int VAR_1, unsigned long VAR_2,
  unsigned long VAR_3, void *VAR_4)
{
 struct dsi_clk_calc_ctx *VAR_5 = VAR_4;
 struct omap_video_timings *VAR_6 = &VAR_5->dispc_vm;

 VAR_5->dispc_cinfo.lck_div = VAR_0;
 VAR_5->dispc_cinfo.pck_div = VAR_1;
 VAR_5->dispc_cinfo.lck = VAR_2;
 VAR_5->dispc_cinfo.pck = VAR_3;

 *VAR_6 = *VAR_5->config->timings;
 VAR_6->pixelclock = VAR_3;
 VAR_6->x_res = VAR_5->config->timings->x_res;
 VAR_6->y_res = VAR_5->config->timings->y_res;
 VAR_6->hsw = VAR_6->hfp = VAR_6->hbp = VAR_6->vsw = 1;
 VAR_6->vfp = VAR_6->vbp = 0;

 return 1;
}
