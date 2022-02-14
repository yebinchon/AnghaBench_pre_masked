
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dummy; } ;
struct omap_video_timings {int x_res; int y_res; } ;
struct TYPE_2__ {int hsa; int hfp; int hbp; int vsa; int vfp; int vbp; int window_sync; scalar_t__ trans_mode; } ;
struct dsi_data {int num_lanes_used; scalar_t__ mode; TYPE_1__ vm_timings; int pix_fmt; struct omap_video_timings timings; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int,int,...) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (unsigned int,int,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct dsi_data* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,int ,int) ;
 int FUNC_10 (struct platform_device*,int) ;

__attribute__((used)) static void FUNC_11(struct platform_device *VAR_10)
{
 struct dsi_data *VAR_11 = FUNC_6(VAR_10);
 unsigned VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned VAR_16, VAR_17;
 unsigned VAR_18, VAR_19, VAR_20;
 unsigned VAR_21, VAR_22;
 unsigned VAR_23, VAR_24;
 unsigned VAR_25, VAR_26;
 unsigned VAR_27;
 int VAR_28 = VAR_11->num_lanes_used - 1;
 u32 VAR_29;

 VAR_29 = FUNC_8(VAR_10, VAR_1);
 VAR_18 = FUNC_3(VAR_29, 31, 24);
 VAR_19 = FUNC_3(VAR_29, 23, 16);
 VAR_20 = VAR_19 - VAR_18;
 VAR_21 = FUNC_3(VAR_29, 15, 8);
 VAR_22 = FUNC_3(VAR_29, 7, 0);

 VAR_29 = FUNC_8(VAR_10, VAR_2);
 VAR_12 = FUNC_3(VAR_29, 20, 16) * 2;
 VAR_15 = FUNC_3(VAR_29, 15, 8);
 VAR_13 = FUNC_3(VAR_29, 7, 0);

 VAR_29 = FUNC_8(VAR_10, VAR_3);
 VAR_14 = FUNC_3(VAR_29, 7, 0);


 VAR_16 = 20;

 VAR_17 = FUNC_10(VAR_10, 60) + 26;

 VAR_27 = FUNC_1(4, VAR_28);

 VAR_23 = FUNC_1(VAR_16 + VAR_12 + VAR_13 + VAR_14,
   4);
 VAR_24 = FUNC_1(VAR_17 + VAR_21, 4) + VAR_27;

 FUNC_0(VAR_23 == 0 || VAR_23 > 255);
 FUNC_0(VAR_24 == 0 || VAR_24 > 255);

 VAR_29 = FUNC_8(VAR_10, VAR_0);
 VAR_29 = FUNC_4(VAR_29, VAR_23, 15, 8);
 VAR_29 = FUNC_4(VAR_29, VAR_24, 7, 0);
 FUNC_9(VAR_10, VAR_0, VAR_29);

 FUNC_2("ddr_clk_pre %u, ddr_clk_post %u\n",
   VAR_23,
   VAR_24);

 VAR_25 = 1 + FUNC_1(VAR_12, 4) +
  FUNC_1(VAR_18, 4) +
  FUNC_1(VAR_20 + 3, 4);

 VAR_26 = FUNC_1(VAR_21 + VAR_22, 4) + 1 + VAR_27;

 VAR_29 = FUNC_5(VAR_25, 31, 16) |
  FUNC_5(VAR_26, 15, 0);
 FUNC_9(VAR_10, VAR_7, VAR_29);

 FUNC_2("enter_hs_mode_lat %u, exit_hs_mode_lat %u\n",
   VAR_25, VAR_26);

  if (VAR_11->mode == VAR_9) {

  int VAR_30 = VAR_11->vm_timings.hsa;
  int VAR_31 = VAR_11->vm_timings.hfp;
  int VAR_32 = VAR_11->vm_timings.hbp;
  int VAR_33 = VAR_11->vm_timings.vsa;
  int VAR_34 = VAR_11->vm_timings.vfp;
  int VAR_35 = VAR_11->vm_timings.vbp;
  int VAR_36 = VAR_11->vm_timings.window_sync;
  bool VAR_37;
  struct omap_video_timings *VAR_38 = &VAR_11->timings;
  int VAR_39 = FUNC_7(VAR_11->pix_fmt);
  int VAR_40, VAR_41, VAR_42;

  VAR_37 = VAR_11->vm_timings.trans_mode == VAR_8;
  VAR_41 = VAR_37 ?
   ((VAR_30 == 0 && VAR_28 == 3) ? 1 : FUNC_1(4, VAR_28)) : 0;

  VAR_42 = FUNC_1(VAR_38->x_res * VAR_39, 8);


  VAR_40 = FUNC_1(4, VAR_28) + (VAR_37 ? VAR_30 : 0) + VAR_41 + VAR_31 +
   FUNC_1(VAR_42 + 6, VAR_28) + VAR_32;

  FUNC_2("HBP: %d, HFP: %d, HSA: %d, TL: %d TXBYTECLKHS\n", VAR_32,
   VAR_31, VAR_37 ? VAR_30 : 0, VAR_40);
  FUNC_2("VBP: %d, VFP: %d, VSA: %d, VACT: %d lines\n", VAR_35, VAR_34,
   VAR_33, VAR_38->y_res);

  VAR_29 = FUNC_8(VAR_10, VAR_4);
  VAR_29 = FUNC_4(VAR_29, VAR_32, 11, 0);
  VAR_29 = FUNC_4(VAR_29, VAR_31, 23, 12);
  VAR_29 = FUNC_4(VAR_29, VAR_37 ? VAR_30 : 0, 31, 24);
  FUNC_9(VAR_10, VAR_4, VAR_29);

  VAR_29 = FUNC_8(VAR_10, VAR_5);
  VAR_29 = FUNC_4(VAR_29, VAR_35, 7, 0);
  VAR_29 = FUNC_4(VAR_29, VAR_34, 15, 8);
  VAR_29 = FUNC_4(VAR_29, VAR_33, 23, 16);
  VAR_29 = FUNC_4(VAR_29, VAR_36, 27, 24);
  FUNC_9(VAR_10, VAR_5, VAR_29);

  VAR_29 = FUNC_8(VAR_10, VAR_6);
  VAR_29 = FUNC_4(VAR_29, VAR_38->y_res, 14, 0);
  VAR_29 = FUNC_4(VAR_29, VAR_40, 31, 16);
  FUNC_9(VAR_10, VAR_6, VAR_29);
 }
}
