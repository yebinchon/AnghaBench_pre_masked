
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_regs {scalar_t__ e_fixed_picture_qp; scalar_t__ e_rc_qp_bound; scalar_t__ e_rc_frame_rate; scalar_t__ e_rc_config; scalar_t__ e_hier_bit_rate_layer0; scalar_t__ e_hier_qp_layer0; scalar_t__ e_num_t_layer; scalar_t__ e_hevc_lf_tc_offset_div2; scalar_t__ e_hevc_lf_beta_offset_div2; scalar_t__ e_hevc_refresh_period; scalar_t__ e_hevc_options; scalar_t__ e_picture_profile; scalar_t__ e_gop_config; } ;
struct s5p_mfc_hevc_enc_params {int level; int tier; int profile; int loopfilter; int loopfilter_disable; int loopfilter_across; int max_partition_depth; int num_refs_for_p; int refreshtype; int const_intra_period_enable; int lossless_cu_enable; int wavefront_enable; int enable_ltr; int hier_qp_enable; int general_pb_enable; int temporal_id_enable; int strong_intra_smooth; int intra_pu_split_disable; int tmv_prediction_disable; int max_num_merge_mv; int encoding_nostartcode_enable; int prepend_sps_pps_to_idr; int refreshperiod; unsigned int lf_beta_offset_div2; unsigned int lf_tc_offset_div2; int num_hier_layer; int hier_qp_type; unsigned int* hier_qp_layer; unsigned int* hier_bit_layer; unsigned int rc_frame_qp; int rc_framerate; int rc_max_qp; unsigned int rc_min_qp; int rc_b_frame_qp; int rc_p_frame_qp; } ;
struct TYPE_2__ {struct s5p_mfc_hevc_enc_params hevc; } ;
struct s5p_mfc_enc_params {int num_b_frame; int rc_mb; scalar_t__ rc_frame; TYPE_1__ codec; } ;
struct s5p_mfc_dev {struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {int img_width; int img_height; struct s5p_mfc_enc_params enc_params; struct s5p_mfc_dev* dev; } ;


 unsigned int VAR_0 ;



 int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_ctx *VAR_1)
{
 struct s5p_mfc_dev *VAR_2 = VAR_1->dev;
 const struct s5p_mfc_regs *VAR_3 = VAR_2->mfc_regs;
 struct s5p_mfc_enc_params *VAR_4 = &VAR_1->enc_params;
 struct s5p_mfc_hevc_enc_params *VAR_5 = &VAR_4->codec.hevc;
 unsigned int VAR_6 = 0;
 int VAR_7;

 FUNC_0();

 FUNC_3(VAR_1);


 VAR_6 = FUNC_2(VAR_3->e_gop_config);

 VAR_6 &= ~(0x3 << 16);
 VAR_6 |= (VAR_4->num_b_frame << 16);
 FUNC_4(VAR_6, VAR_3->e_gop_config);


 if ((VAR_1->img_width == 3840) && (VAR_1->img_height == 2160)) {
  VAR_5->level = 51;
  VAR_5->tier = 0;

 }


 VAR_6 = 0;

 VAR_6 |= VAR_5->profile & 0x3;

 VAR_6 &= ~(0xFF << 8);
 VAR_6 |= (VAR_5->level << 8);

 VAR_6 |= (VAR_5->tier << 16);
 FUNC_4(VAR_6, VAR_3->e_picture_profile);

 switch (VAR_5->loopfilter) {
 case 130:
  VAR_5->loopfilter_disable = 1;
  break;
 case 128:
  VAR_5->loopfilter_disable = 0;
  VAR_5->loopfilter_across = 1;
  break;
 case 129:
  VAR_5->loopfilter_disable = 0;
  VAR_5->loopfilter_across = 0;
  break;
 }


 VAR_6 = 0;
 VAR_6 |= (VAR_5->max_partition_depth & 0x1);
 VAR_6 |= (VAR_5->num_refs_for_p-1) << 2;
 VAR_6 |= (VAR_5->refreshtype & 0x3) << 3;
 VAR_6 |= (VAR_5->const_intra_period_enable & 0x1) << 5;
 VAR_6 |= (VAR_5->lossless_cu_enable & 0x1) << 6;
 VAR_6 |= (VAR_5->wavefront_enable & 0x1) << 7;
 VAR_6 |= (VAR_5->loopfilter_disable & 0x1) << 8;
 VAR_6 |= (VAR_5->loopfilter_across & 0x1) << 9;
 VAR_6 |= (VAR_5->enable_ltr & 0x1) << 10;
 VAR_6 |= (VAR_5->hier_qp_enable & 0x1) << 11;
 VAR_6 |= (VAR_5->general_pb_enable & 0x1) << 13;
 VAR_6 |= (VAR_5->temporal_id_enable & 0x1) << 14;
 VAR_6 |= (VAR_5->strong_intra_smooth & 0x1) << 15;
 VAR_6 |= (VAR_5->intra_pu_split_disable & 0x1) << 16;
 VAR_6 |= (VAR_5->tmv_prediction_disable & 0x1) << 17;
 VAR_6 |= (VAR_5->max_num_merge_mv & 0x7) << 18;
 VAR_6 |= (VAR_5->encoding_nostartcode_enable & 0x1) << 23;
 VAR_6 |= (VAR_5->prepend_sps_pps_to_idr << 26);

 FUNC_4(VAR_6, VAR_3->e_hevc_options);

 if (VAR_5->refreshtype) {
  VAR_6 = 0;
  VAR_6 |= (VAR_5->refreshperiod & 0xFFFF);
  FUNC_4(VAR_6, VAR_3->e_hevc_refresh_period);
 }

 if (!(VAR_5->loopfilter_disable & 0x1)) {
  VAR_6 = 0;
  VAR_6 |= (VAR_5->lf_beta_offset_div2);
  FUNC_4(VAR_6, VAR_3->e_hevc_lf_beta_offset_div2);
  VAR_6 = 0;
  VAR_6 |= (VAR_5->lf_tc_offset_div2);
  FUNC_4(VAR_6, VAR_3->e_hevc_lf_tc_offset_div2);
 }

 if (VAR_5->num_hier_layer) {
  VAR_6 = 0;
  VAR_6 |= (VAR_5->hier_qp_type & 0x1) << 0x3;
  VAR_6 |= VAR_5->num_hier_layer & 0x7;
  FUNC_4(VAR_6, VAR_3->e_num_t_layer);

  if (VAR_5->hier_qp_enable) {
   for (VAR_7 = 0; VAR_7 < 7; VAR_7++)
    FUNC_4(VAR_5->hier_qp_layer[VAR_7],
     VAR_3->e_hier_qp_layer0 + VAR_7 * 4);
  }
  if (VAR_4->rc_frame) {
   for (VAR_7 = 0; VAR_7 < 7; VAR_7++)
    FUNC_4(VAR_5->hier_bit_layer[VAR_7],
      VAR_3->e_hier_bit_rate_layer0
      + VAR_7 * 4);
  }
 }


 VAR_6 = FUNC_2(VAR_3->e_rc_config);

 VAR_6 &= ~(0x1 << 8);
 VAR_6 |= (VAR_4->rc_mb << 8);
 FUNC_4(VAR_6, VAR_3->e_rc_config);

 VAR_6 &= ~(0xFF);
 VAR_6 |= VAR_5->rc_frame_qp;
 FUNC_4(VAR_6, VAR_3->e_rc_config);


 if (VAR_4->rc_frame) {
  VAR_6 = 0;
  VAR_6 &= ~(0xFFFF << 16);
  VAR_6 |= ((VAR_5->rc_framerate) << 16);
  VAR_6 &= ~(0xFFFF);
  VAR_6 |= VAR_0;
  FUNC_4(VAR_6, VAR_3->e_rc_frame_rate);
 }


 VAR_6 = 0;

 VAR_6 &= ~(0xFF << 8);
 VAR_6 |= (VAR_5->rc_max_qp << 8);

 VAR_6 &= ~(0xFF);
 VAR_6 |= VAR_5->rc_min_qp;
 FUNC_4(VAR_6, VAR_3->e_rc_qp_bound);

 FUNC_4(0x0, VAR_3->e_fixed_picture_qp);
 if (!VAR_4->rc_frame && !VAR_4->rc_mb) {
  VAR_6 = 0;
  VAR_6 &= ~(0xFF << 16);
  VAR_6 |= (VAR_5->rc_b_frame_qp << 16);
  VAR_6 &= ~(0xFF << 8);
  VAR_6 |= (VAR_5->rc_p_frame_qp << 8);
  VAR_6 &= ~(0xFF);
  VAR_6 |= VAR_5->rc_frame_qp;
  FUNC_4(VAR_6, VAR_3->e_fixed_picture_qp);
 }
 FUNC_1();

 return 0;
}
