
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeonfb_info {int dummy; } ;
struct radeon_regs {int crtc_gen_cntl; int crtc_ext_cntl; int crtc_more_cntl; int dac_cntl; int crtc_h_total_disp; int crtc_h_sync_strt_wid; int crtc_v_total_disp; int crtc_v_sync_strt_wid; int crtc_pitch; int surface_cntl; int fp_crtc_h_total_disp; int fp_crtc_v_total_disp; int fp_gen_cntl; int fp_h_sync_strt_wid; int fp_horz_stretch; int fp_v_sync_strt_wid; int fp_vert_stretch; int lvds_gen_cntl; int lvds_pll_cntl; int tmds_crc; int tmds_transmitter_cntl; int clk_cntl_index; void* ppll_ref_div; void* ppll_div_3; void* vclk_ecp_cntl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (struct radeonfb_info*) ;

__attribute__((used)) static void FUNC_3 (struct radeonfb_info *VAR_25,
          struct radeon_regs *VAR_26)
{

 VAR_26->crtc_gen_cntl = FUNC_1(VAR_2);
 VAR_26->crtc_ext_cntl = FUNC_1(VAR_1);
 VAR_26->crtc_more_cntl = FUNC_1(VAR_5);
 VAR_26->dac_cntl = FUNC_1(VAR_9);
        VAR_26->crtc_h_total_disp = FUNC_1(VAR_4);
        VAR_26->crtc_h_sync_strt_wid = FUNC_1(VAR_3);
        VAR_26->crtc_v_total_disp = FUNC_1(VAR_8);
        VAR_26->crtc_v_sync_strt_wid = FUNC_1(VAR_7);
 VAR_26->crtc_pitch = FUNC_1(VAR_6);
 VAR_26->surface_cntl = FUNC_1(VAR_21);


 VAR_26->fp_crtc_h_total_disp = FUNC_1(VAR_10);
 VAR_26->fp_crtc_v_total_disp = FUNC_1(VAR_11);
 VAR_26->fp_gen_cntl = FUNC_1(VAR_12);
 VAR_26->fp_h_sync_strt_wid = FUNC_1(VAR_14);
 VAR_26->fp_horz_stretch = FUNC_1(VAR_13);
 VAR_26->fp_v_sync_strt_wid = FUNC_1(VAR_16);
 VAR_26->fp_vert_stretch = FUNC_1(VAR_15);
 VAR_26->lvds_gen_cntl = FUNC_1(VAR_17);
 VAR_26->lvds_pll_cntl = FUNC_1(VAR_18);
 VAR_26->tmds_crc = FUNC_1(VAR_22);
 VAR_26->tmds_transmitter_cntl = FUNC_1(VAR_23);
 VAR_26->vclk_ecp_cntl = FUNC_0(VAR_24);


 VAR_26->clk_cntl_index = FUNC_1(VAR_0) & ~0x3f;
 FUNC_2(VAR_25);
 VAR_26->ppll_div_3 = FUNC_0(VAR_19);
 VAR_26->ppll_ref_div = FUNC_0(VAR_20);
}
