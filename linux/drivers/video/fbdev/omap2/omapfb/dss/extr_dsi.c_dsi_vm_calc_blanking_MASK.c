
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct omap_video_timings {int x_res; int hfp; int hbp; int hsw; unsigned long pixelclock; int vfp; int y_res; int vbp; int vsw; } ;
struct omap_dss_dsi_videomode_timings {unsigned long hsclk; int ndl; int bitspp; int hss; int hsa; int hse; int hbp; int hact; int hfp; scalar_t__ trans_mode; int hsa_blanking_mode; int hfp_blanking_mode; int hbp_blanking_mode; int window_sync; int ddr_clk_always_on; scalar_t__ blanking_mode; int vfp; int vact; int vbp; int vsa; } ;
struct omap_dss_dsi_config {scalar_t__ trans_mode; int ddr_clk_always_on; struct omap_video_timings* timings; int pixel_format; } ;
struct dsi_data {int num_lanes_used; int line_buffer_size; } ;
struct TYPE_4__ {unsigned long pck; } ;
struct TYPE_3__ {int clkdco; } ;
struct dsi_clk_calc_ctx {unsigned long req_pck_min; unsigned long req_pck_max; unsigned long req_pck_nom; struct omap_video_timings dispc_vm; struct omap_dss_dsi_videomode_timings dsi_vm; TYPE_2__ dispc_cinfo; TYPE_1__ dsi_cinfo; struct omap_dss_dsi_config* config; int dsidev; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,unsigned long) ;
 struct dsi_data* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct omap_dss_dsi_videomode_timings*,int ,int) ;

__attribute__((used)) static bool FUNC_6(struct dsi_clk_calc_ctx *VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_2(VAR_2->dsidev);
 const struct omap_dss_dsi_config *VAR_4 = VAR_2->config;
 int VAR_5 = FUNC_3(VAR_4->pixel_format);
 int VAR_6 = VAR_3->num_lanes_used - 1;
 unsigned long VAR_7 = VAR_2->dsi_cinfo.clkdco / 4;
 unsigned long VAR_8 = VAR_7 / 4;

 unsigned long VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;
 int VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25;
 const struct omap_video_timings *VAR_26;
 struct omap_video_timings *VAR_27;
 struct omap_dss_dsi_videomode_timings *VAR_28;
 u64 VAR_29, VAR_30;

 VAR_29 = (u64)VAR_8 * VAR_6 * 8;

 VAR_26 = VAR_4->timings;
 VAR_10 = VAR_2->req_pck_min;
 VAR_12 = VAR_2->req_pck_max;
 VAR_11 = VAR_2->req_pck_nom;

 VAR_9 = VAR_2->dispc_cinfo.pck;
 VAR_30 = (u64)VAR_9 * VAR_5;

 VAR_13 = VAR_26->x_res;

 VAR_15 = VAR_26->hfp + VAR_26->hbp + VAR_26->hsw;
 VAR_14 = VAR_13 + VAR_15;

 VAR_19 = FUNC_0(FUNC_0(VAR_13 * VAR_5, 8) + 6, VAR_6);





 if (VAR_3->line_buffer_size < VAR_13 * VAR_5 / 8) {
  if (VAR_30 != VAR_29)
   return 0;
 } else {
  if (VAR_30 < VAR_29)
   return 0;
 }


 if (VAR_29 < (u64)VAR_5 * VAR_10)
  return 0;


 if (VAR_4->trans_mode != VAR_0) {
  if (VAR_29 > (u64)VAR_5 * VAR_12)
   return 0;
 }

 VAR_21 = FUNC_0(4, VAR_6);

 if (VAR_4->trans_mode == VAR_1) {
  if (VAR_6 == 3 && VAR_26->hsw == 0)
   VAR_22 = 1;
  else
   VAR_22 = FUNC_0(4, VAR_6);
 } else {
  VAR_22 = 0;
 }


 VAR_18 = FUNC_1((u64)VAR_14 * VAR_8, VAR_11);


 if (VAR_18 < VAR_21 + VAR_22 + VAR_19)
  return 0;


 VAR_20 = VAR_18 - VAR_19;


 VAR_16 = FUNC_1((u64)VAR_18 * VAR_9, VAR_8);


 if ((u64)VAR_18 * VAR_9 != (u64)VAR_16 * VAR_8)
  return 0;

 VAR_17 = VAR_16 - VAR_13;



 VAR_28 = &VAR_2->dsi_vm;
 FUNC_5(VAR_28, 0, sizeof(*VAR_28));

 VAR_28->hsclk = VAR_7;

 VAR_28->ndl = VAR_6;
 VAR_28->bitspp = VAR_5;

 if (VAR_4->trans_mode != VAR_1) {
  VAR_24 = 0;
 } else if (VAR_6 == 3 && VAR_26->hsw == 0) {
  VAR_24 = 0;
 } else {
  VAR_24 = FUNC_1((u64)VAR_26->hsw * VAR_8, VAR_11);
  VAR_24 = FUNC_4(VAR_24 - VAR_22, 1);
 }

 VAR_25 = FUNC_1((u64)VAR_26->hbp * VAR_8, VAR_11);
 VAR_25 = FUNC_4(VAR_25, 1);

 VAR_23 = VAR_20 - (VAR_21 + VAR_24 + VAR_22 + VAR_25);
 if (VAR_23 < 1) {
  int VAR_31;


  VAR_31 = 1 - VAR_23;
  VAR_25 = FUNC_4(VAR_25 - VAR_31, 1);
  VAR_23 = VAR_20 - (VAR_21 + VAR_24 + VAR_22 + VAR_25);

  if (VAR_23 < 1 && VAR_24 > 0) {

   VAR_31 = 1 - VAR_23;
   VAR_24 = FUNC_4(VAR_24 - VAR_31, 1);
   VAR_23 = VAR_20 - (VAR_21 + VAR_24 + VAR_22 + VAR_25);
  }
 }

 if (VAR_23 < 1)
  return 0;

 VAR_28->hss = VAR_21;
 VAR_28->hsa = VAR_24;
 VAR_28->hse = VAR_22;
 VAR_28->hbp = VAR_25;
 VAR_28->hact = VAR_13;
 VAR_28->hfp = VAR_23;

 VAR_28->vsa = VAR_26->vsw;
 VAR_28->vbp = VAR_26->vbp;
 VAR_28->vact = VAR_26->y_res;
 VAR_28->vfp = VAR_26->vfp;

 VAR_28->trans_mode = VAR_4->trans_mode;

 VAR_28->blanking_mode = 0;
 VAR_28->hsa_blanking_mode = 1;
 VAR_28->hfp_blanking_mode = 1;
 VAR_28->hbp_blanking_mode = 1;

 VAR_28->ddr_clk_always_on = VAR_4->ddr_clk_always_on;
 VAR_28->window_sync = 4;



 VAR_27 = &VAR_2->dispc_vm;
 *VAR_27 = *VAR_26;
 VAR_27->pixelclock = VAR_9;

 if (VAR_4->trans_mode == VAR_1) {
  VAR_24 = FUNC_1((u64)VAR_26->hsw * VAR_9,
    VAR_11);
  VAR_24 = FUNC_4(VAR_24, 1);
 } else {
  VAR_24 = 1;
 }

 VAR_25 = FUNC_1((u64)VAR_26->hbp * VAR_9, VAR_11);
 VAR_25 = FUNC_4(VAR_25, 1);

 VAR_23 = VAR_17 - VAR_24 - VAR_25;
 if (VAR_23 < 1) {
  int VAR_32;


  VAR_32 = 1 - VAR_23;
  VAR_25 = FUNC_4(VAR_25 - VAR_32, 1);
  VAR_23 = VAR_17 - VAR_24 - VAR_25;

  if (VAR_23 < 1) {

   VAR_32 = 1 - VAR_23;
   VAR_24 = FUNC_4(VAR_24 - VAR_32, 1);
   VAR_23 = VAR_17 - VAR_24 - VAR_25;
  }
 }

 if (VAR_23 < 1)
  return 0;

 VAR_27->hfp = VAR_23;
 VAR_27->hsw = VAR_24;
 VAR_27->hbp = VAR_25;

 return 1;
}
