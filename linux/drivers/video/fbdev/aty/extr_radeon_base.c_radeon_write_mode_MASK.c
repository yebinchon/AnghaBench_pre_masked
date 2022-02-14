
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeonfb_info {int dummy; } ;
struct radeon_regs {int vclk_ecp_cntl; int tmds_transmitter_cntl; int tmds_crc; int fp_gen_cntl; int fp_vert_stretch; int fp_horz_stretch; int fp_v_sync_strt_wid; int fp_h_sync_strt_wid; int fp_crtc_v_total_disp; int fp_crtc_h_total_disp; int surface_cntl; int crtc_pitch; int crtc_v_sync_strt_wid; int crtc_v_total_disp; int crtc_h_sync_strt_wid; int crtc_h_total_disp; int dac_cntl; int crtc_more_cntl; int crtc_ext_cntl; int crtc_gen_cntl; int * surf_info; int * surf_upper_bound; int * surf_lower_bound; } ;
struct TYPE_2__ {int val; scalar_t__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct radeonfb_info*) ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 TYPE_1__* VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct radeonfb_info*,int ,int ) ;
 int FUNC_6 (struct radeonfb_info*,struct radeon_regs*) ;

void FUNC_7 (struct radeonfb_info *VAR_36, struct radeon_regs *VAR_37,
   int VAR_38)
{
 int VAR_39;
 int VAR_40 = FUNC_3(VAR_36);

 if (VAR_35)
  return;

 if (!VAR_38)
  FUNC_5(VAR_36, VAR_16, 0);

 FUNC_4(31);
 for (VAR_39=0; VAR_39<10; VAR_39++)
  FUNC_1(VAR_34[VAR_39].reg, VAR_34[VAR_39].val);


 for (VAR_39=0; VAR_39<8; VAR_39++) {
  FUNC_1(VAR_28 + 0x10*VAR_39, VAR_37->surf_lower_bound[VAR_39]);
  FUNC_1(VAR_29 + 0x10*VAR_39, VAR_37->surf_upper_bound[VAR_39]);
  FUNC_1(VAR_27 + 0x10*VAR_39, VAR_37->surf_info[VAR_39]);
 }

 FUNC_1(VAR_2, VAR_37->crtc_gen_cntl);
 FUNC_2(VAR_1, VAR_37->crtc_ext_cntl,
  ~(VAR_3 | VAR_10 | VAR_0));
 FUNC_1(VAR_6, VAR_37->crtc_more_cntl);
 FUNC_2(VAR_14, VAR_37->dac_cntl, VAR_15 | VAR_13);
 FUNC_1(VAR_5, VAR_37->crtc_h_total_disp);
 FUNC_1(VAR_4, VAR_37->crtc_h_sync_strt_wid);
 FUNC_1(VAR_12, VAR_37->crtc_v_total_disp);
 FUNC_1(VAR_11, VAR_37->crtc_v_sync_strt_wid);
 FUNC_1(VAR_7, 0);
 FUNC_1(VAR_8, 0);
 FUNC_1(VAR_9, VAR_37->crtc_pitch);
 FUNC_1(VAR_30, VAR_37->surface_cntl);

 FUNC_6(VAR_36, VAR_37);

 if ((VAR_40 == VAR_25) || (VAR_40 == VAR_26)) {
  FUNC_4(10);
  FUNC_1(VAR_18, VAR_37->fp_crtc_h_total_disp);
  FUNC_1(VAR_19, VAR_37->fp_crtc_v_total_disp);
  FUNC_1(VAR_22, VAR_37->fp_h_sync_strt_wid);
  FUNC_1(VAR_24, VAR_37->fp_v_sync_strt_wid);
  FUNC_1(VAR_21, VAR_37->fp_horz_stretch);
  FUNC_1(VAR_23, VAR_37->fp_vert_stretch);
  FUNC_1(VAR_20, VAR_37->fp_gen_cntl);
  FUNC_1(VAR_31, VAR_37->tmds_crc);
  FUNC_1(VAR_32, VAR_37->tmds_transmitter_cntl);
 }

 if (!VAR_38)
  FUNC_5(VAR_36, VAR_17, 0);

 FUNC_4(2);
 FUNC_0(VAR_33, VAR_37->vclk_ecp_cntl);

 return;
}
