
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_regs {scalar_t__ e_h264_fmo_num_slice_grp_minus1; scalar_t__ e_h264_fmo_slice_grp_map_type; scalar_t__ e_h264_fmo_slice_grp_change_rate_minus1; scalar_t__ e_h264_fmo_slice_grp_change_dir; int e_h264_fmo_run_length_minus1_0; scalar_t__ e_h264_frame_packing_sei_info; scalar_t__ e_h264_options; scalar_t__ e_h264_num_t_layer; scalar_t__ e_h264_hierarchical_qp_layer0; scalar_t__ e_h264_i_period; scalar_t__ e_extended_sar; scalar_t__ e_aspect_ratio; scalar_t__ e_mb_rc_config; scalar_t__ e_h264_lf_beta_offset; scalar_t__ e_h264_lf_alpha_offset; scalar_t__ e_cropped_frame_height; scalar_t__ e_frame_height; scalar_t__ e_vbv_init_delay; scalar_t__ e_vbv_buffer_size; scalar_t__ e_rc_frame_rate; scalar_t__ e_fixed_picture_qp; scalar_t__ e_rc_qp_bound; scalar_t__ e_rc_config; scalar_t__ e_picture_profile; scalar_t__ e_gop_config; } ;
struct s5p_mfc_h264_enc_params {int level; int profile; int rc_frame_qp; int rc_max_qp; int rc_min_qp; int rc_b_frame_qp; int rc_p_frame_qp; int cpb_size; int interlace; int loop_filter_mode; int loop_filter_alpha; int loop_filter_beta; int entropy_mode; int num_ref_pic_4p; int _8x8_transform; int rc_mb_dark; int rc_mb_smooth; int rc_mb_static; int rc_mb_activity; int vui_sar; int vui_sar_idc; int vui_ext_sar_width; int vui_ext_sar_height; int open_gop; int open_gop_size; int aso; int hier_qp_layer; int hier_qp_type; int* hier_qp_layer_qp; int sei_frame_packing; int sei_fp_curr_frame_0; int sei_fp_arrangement_type; int fmo_map_type; int fmo_slice_grp; int fmo_chg_dir; int fmo_chg_rate; int * fmo_run_len; scalar_t__ fmo; scalar_t__ hier_qp; } ;
struct TYPE_2__ {struct s5p_mfc_h264_enc_params h264; } ;
struct s5p_mfc_enc_params {int num_b_frame; int rc_mb; int rc_framerate_num; int rc_framerate_denom; scalar_t__ frame_skip_mode; int vbv_delay; scalar_t__ rc_frame; TYPE_1__ codec; } ;
struct s5p_mfc_dev {struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {int img_height; struct s5p_mfc_enc_params enc_params; struct s5p_mfc_dev* dev; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;




 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct s5p_mfc_ctx*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct s5p_mfc_ctx *VAR_1)
{
 struct s5p_mfc_dev *VAR_2 = VAR_1->dev;
 const struct s5p_mfc_regs *VAR_3 = VAR_2->mfc_regs;
 struct s5p_mfc_enc_params *VAR_4 = &VAR_1->enc_params;
 struct s5p_mfc_h264_enc_params *VAR_5 = &VAR_4->codec.h264;
 unsigned int VAR_6 = 0;
 int VAR_7;

 FUNC_1();

 FUNC_5(VAR_1);


 VAR_6 = FUNC_4(VAR_3->e_gop_config);
 VAR_6 &= ~(0x3 << 16);
 VAR_6 |= ((VAR_4->num_b_frame & 0x3) << 16);
 FUNC_6(VAR_6, VAR_3->e_gop_config);


 VAR_6 = 0;

 VAR_6 |= ((VAR_5->level & 0xFF) << 8);

 VAR_6 |= VAR_5->profile & 0x3F;
 FUNC_6(VAR_6, VAR_3->e_picture_profile);


 VAR_6 = FUNC_4(VAR_3->e_rc_config);

 VAR_6 &= ~(0x1 << 8);
 VAR_6 |= ((VAR_4->rc_mb & 0x1) << 8);
 FUNC_6(VAR_6, VAR_3->e_rc_config);


 VAR_6 &= ~(0x3F);
 VAR_6 |= VAR_5->rc_frame_qp & 0x3F;
 FUNC_6(VAR_6, VAR_3->e_rc_config);


 VAR_6 = 0;

 VAR_6 |= ((VAR_5->rc_max_qp & 0x3F) << 8);

 VAR_6 |= VAR_5->rc_min_qp & 0x3F;
 FUNC_6(VAR_6, VAR_3->e_rc_qp_bound);


 FUNC_6(0x0, VAR_3->e_fixed_picture_qp);
 if (!VAR_4->rc_frame && !VAR_4->rc_mb) {
  VAR_6 = 0;
  VAR_6 |= ((VAR_5->rc_b_frame_qp & 0x3F) << 16);
  VAR_6 |= ((VAR_5->rc_p_frame_qp & 0x3F) << 8);
  VAR_6 |= VAR_5->rc_frame_qp & 0x3F;
  FUNC_6(VAR_6, VAR_3->e_fixed_picture_qp);
 }


 if (VAR_4->rc_frame && VAR_4->rc_framerate_num && VAR_4->rc_framerate_denom) {
  VAR_6 = 0;
  VAR_6 |= ((VAR_4->rc_framerate_num & 0xFFFF) << 16);
  VAR_6 |= VAR_4->rc_framerate_denom & 0xFFFF;
  FUNC_6(VAR_6, VAR_3->e_rc_frame_rate);
 }


 if (VAR_4->frame_skip_mode ==
   VAR_0) {
  FUNC_6(VAR_5->cpb_size & 0xFFFF,
    VAR_3->e_vbv_buffer_size);

  if (VAR_4->rc_frame)
   FUNC_6(VAR_4->vbv_delay, VAR_3->e_vbv_init_delay);
 }


 VAR_6 = 0;
 VAR_6 |= ((VAR_5->interlace & 0x1) << 3);
 FUNC_6(VAR_6, VAR_3->e_h264_options);


 if (VAR_5->interlace) {
  FUNC_6(VAR_1->img_height >> 1,
    VAR_3->e_frame_height);

  FUNC_6(VAR_1->img_height >> 1,
    VAR_3->e_cropped_frame_height);
 }


 VAR_6 = FUNC_4(VAR_3->e_h264_options);
 VAR_6 &= ~(0x3 << 1);
 VAR_6 |= ((VAR_5->loop_filter_mode & 0x3) << 1);
 FUNC_6(VAR_6, VAR_3->e_h264_options);


 if (VAR_5->loop_filter_alpha < 0) {
  VAR_6 = 0x10;
  VAR_6 |= (0xFF - VAR_5->loop_filter_alpha) + 1;
 } else {
  VAR_6 = 0x00;
  VAR_6 |= (VAR_5->loop_filter_alpha & 0xF);
 }
 FUNC_6(VAR_6, VAR_3->e_h264_lf_alpha_offset);


 if (VAR_5->loop_filter_beta < 0) {
  VAR_6 = 0x10;
  VAR_6 |= (0xFF - VAR_5->loop_filter_beta) + 1;
 } else {
  VAR_6 = 0x00;
  VAR_6 |= (VAR_5->loop_filter_beta & 0xF);
 }
 FUNC_6(VAR_6, VAR_3->e_h264_lf_beta_offset);


 VAR_6 = FUNC_4(VAR_3->e_h264_options);
 VAR_6 &= ~(0x1);
 VAR_6 |= VAR_5->entropy_mode & 0x1;
 FUNC_6(VAR_6, VAR_3->e_h264_options);


 VAR_6 = FUNC_4(VAR_3->e_h264_options);
 VAR_6 &= ~(0x1 << 7);
 VAR_6 |= (((VAR_5->num_ref_pic_4p - 1) & 0x1) << 7);
 FUNC_6(VAR_6, VAR_3->e_h264_options);


 VAR_6 = FUNC_4(VAR_3->e_h264_options);
 VAR_6 &= ~(0x3 << 12);
 VAR_6 |= ((VAR_5->_8x8_transform & 0x3) << 12);
 FUNC_6(VAR_6, VAR_3->e_h264_options);


 FUNC_6(0x0, VAR_3->e_mb_rc_config);
 if (VAR_4->rc_mb) {
  VAR_6 = 0;

  VAR_6 |= ((VAR_5->rc_mb_dark & 0x1) << 3);

  VAR_6 |= ((VAR_5->rc_mb_smooth & 0x1) << 2);

  VAR_6 |= ((VAR_5->rc_mb_static & 0x1) << 1);

  VAR_6 |= VAR_5->rc_mb_activity & 0x1;
  FUNC_6(VAR_6, VAR_3->e_mb_rc_config);
 }


 FUNC_4(VAR_3->e_h264_options);
 VAR_6 &= ~(0x1 << 5);
 VAR_6 |= ((VAR_5->vui_sar & 0x1) << 5);
 FUNC_6(VAR_6, VAR_3->e_h264_options);

 FUNC_6(0x0, VAR_3->e_aspect_ratio);
 FUNC_6(0x0, VAR_3->e_extended_sar);
 if (VAR_5->vui_sar) {

  VAR_6 = 0;
  VAR_6 |= VAR_5->vui_sar_idc & 0xFF;
  FUNC_6(VAR_6, VAR_3->e_aspect_ratio);
  if (VAR_5->vui_sar_idc == 0xFF) {

   VAR_6 = 0;
   VAR_6 |= (VAR_5->vui_ext_sar_width & 0xFFFF) << 16;
   VAR_6 |= VAR_5->vui_ext_sar_height & 0xFFFF;
   FUNC_6(VAR_6, VAR_3->e_extended_sar);
  }
 }



 FUNC_4(VAR_3->e_h264_options);
 VAR_6 &= ~(0x1 << 4);
 VAR_6 |= ((VAR_5->open_gop & 0x1) << 4);
 FUNC_6(VAR_6, VAR_3->e_h264_options);


 FUNC_6(0x0, VAR_3->e_h264_i_period);
 if (VAR_5->open_gop) {
  VAR_6 = 0;
  VAR_6 |= VAR_5->open_gop_size & 0xFFFF;
  FUNC_6(VAR_6, VAR_3->e_h264_i_period);
 }


 FUNC_4(VAR_3->e_h264_options);
 VAR_6 &= ~(0x3 << 9);
 FUNC_6(VAR_6, VAR_3->e_h264_options);


 FUNC_4(VAR_3->e_h264_options);
 VAR_6 &= ~(0x1 << 14);
 FUNC_6(VAR_6, VAR_3->e_h264_options);


 FUNC_4(VAR_3->e_h264_options);
 VAR_6 &= ~(0x1 << 6);
 VAR_6 |= ((VAR_5->aso & 0x1) << 6);
 FUNC_6(VAR_6, VAR_3->e_h264_options);


 FUNC_4(VAR_3->e_h264_options);
 VAR_6 &= ~(0x1 << 8);
 VAR_6 |= ((VAR_5->open_gop & 0x1) << 8);
 FUNC_6(VAR_6, VAR_3->e_h264_options);
 VAR_6 = 0;
 if (VAR_5->hier_qp && VAR_5->hier_qp_layer) {
  VAR_6 |= (VAR_5->hier_qp_type & 0x1) << 0x3;
  VAR_6 |= VAR_5->hier_qp_layer & 0x7;
  FUNC_6(VAR_6, VAR_3->e_h264_num_t_layer);

  for (VAR_7 = 0; VAR_7 < VAR_5->hier_qp_layer &&
    VAR_7 < FUNC_0(VAR_5->hier_qp_layer_qp); VAR_7++) {
   FUNC_6(VAR_5->hier_qp_layer_qp[VAR_7],
    VAR_3->e_h264_hierarchical_qp_layer0
    + VAR_7 * 4);
  }
 }

 FUNC_6(VAR_6, VAR_3->e_h264_num_t_layer);


 FUNC_4(VAR_3->e_h264_options);
 VAR_6 &= ~(0x1 << 25);
 VAR_6 |= ((VAR_5->sei_frame_packing & 0x1) << 25);
 FUNC_6(VAR_6, VAR_3->e_h264_options);
 if (VAR_5->sei_frame_packing) {
  VAR_6 = 0;

  VAR_6 |= ((VAR_5->sei_fp_curr_frame_0 & 0x1) << 2);

  VAR_6 |= VAR_5->sei_fp_arrangement_type & 0x3;
  FUNC_6(VAR_6, VAR_3->e_h264_frame_packing_sei_info);
 }

 if (VAR_5->fmo) {
  switch (VAR_5->fmo_map_type) {
  case 131:
   if (VAR_5->fmo_slice_grp > 4)
    VAR_5->fmo_slice_grp = 4;
   for (VAR_7 = 0; VAR_7 < (VAR_5->fmo_slice_grp & 0xF); VAR_7++)
    FUNC_6(VAR_5->fmo_run_len[VAR_7] - 1,
     VAR_3->e_h264_fmo_run_length_minus1_0
     + VAR_7 * 4);
   break;
  case 129:
   if (VAR_5->fmo_slice_grp > 4)
    VAR_5->fmo_slice_grp = 4;
   break;
  case 130:
  case 128:
   if (VAR_5->fmo_slice_grp > 2)
    VAR_5->fmo_slice_grp = 2;
   FUNC_6(VAR_5->fmo_chg_dir & 0x1,
    VAR_3->e_h264_fmo_slice_grp_change_dir);

   FUNC_6(VAR_5->fmo_chg_rate,
   VAR_3->e_h264_fmo_slice_grp_change_rate_minus1);
   break;
  default:
   FUNC_3("Unsupported map type for FMO: %d\n",
     VAR_5->fmo_map_type);
   VAR_5->fmo_map_type = 0;
   VAR_5->fmo_slice_grp = 1;
   break;
  }

  FUNC_6(VAR_5->fmo_map_type,
    VAR_3->e_h264_fmo_slice_grp_map_type);
  FUNC_6(VAR_5->fmo_slice_grp - 1,
    VAR_3->e_h264_fmo_num_slice_grp_minus1);
 } else {
  FUNC_6(0, VAR_3->e_h264_fmo_num_slice_grp_minus1);
 }

 FUNC_2();

 return 0;
}
