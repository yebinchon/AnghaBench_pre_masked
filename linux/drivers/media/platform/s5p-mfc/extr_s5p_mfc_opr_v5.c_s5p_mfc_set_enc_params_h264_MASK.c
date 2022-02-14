
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_h264_enc_params {int level; unsigned int profile; unsigned int interlace; unsigned int loop_filter_mode; int loop_filter_alpha; int loop_filter_beta; scalar_t__ entropy_mode; int num_ref_pic_4p; unsigned int max_ref_pic; unsigned int _8x8_transform; unsigned int rc_frame_qp; int rc_max_qp; unsigned int rc_min_qp; int rc_mb_dark; int rc_mb_smooth; int rc_mb_static; unsigned int rc_mb_activity; int rc_b_frame_qp; int rc_p_frame_qp; int vui_sar; unsigned int vui_sar_idc; int vui_ext_sar_width; unsigned int vui_ext_sar_height; int open_gop; unsigned int open_gop_size; int cpb_size; } ;
struct TYPE_2__ {struct s5p_mfc_h264_enc_params h264; } ;
struct s5p_mfc_enc_params {int num_b_frame; int rc_mb; int rc_framerate_denom; int rc_framerate_num; scalar_t__ frame_skip_mode; scalar_t__ rc_frame; TYPE_1__ codec; } ;
struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {int img_height; struct s5p_mfc_enc_params enc_params; struct s5p_mfc_dev* dev; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 unsigned int FUNC_0 (struct s5p_mfc_dev*,int ) ;
 int FUNC_1 (struct s5p_mfc_dev*,unsigned int,int ) ;
 unsigned int FUNC_2 (struct s5p_mfc_ctx*,int ) ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;
 int FUNC_4 (struct s5p_mfc_ctx*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_ctx *VAR_21)
{
 struct s5p_mfc_dev *VAR_22 = VAR_21->dev;
 struct s5p_mfc_enc_params *VAR_23 = &VAR_21->enc_params;
 struct s5p_mfc_h264_enc_params *VAR_24 = &VAR_23->codec.h264;
 unsigned int VAR_25;
 unsigned int VAR_26;

 FUNC_3(VAR_21);

 VAR_25 = FUNC_0(VAR_22, VAR_11);

 VAR_25 &= ~(0x3 << 16);
 VAR_25 |= (VAR_23->num_b_frame << 16);
 FUNC_1(VAR_22, VAR_25, VAR_11);

 VAR_25 = FUNC_0(VAR_22, VAR_12);

 VAR_25 &= ~(0xFF << 8);
 VAR_25 |= (VAR_24->level << 8);

 VAR_25 &= ~(0x3F);
 VAR_25 |= VAR_24->profile;
 FUNC_1(VAR_22, VAR_25, VAR_12);

 FUNC_1(VAR_22, VAR_24->interlace, VAR_10);

 if (VAR_24->interlace)
  FUNC_1(VAR_22, VAR_21->img_height >> 1, VAR_17);

 FUNC_1(VAR_22, VAR_24->loop_filter_mode, VAR_9);

 if (VAR_24->loop_filter_alpha < 0) {
  VAR_25 = 0x10;
  VAR_25 |= (0xFF - VAR_24->loop_filter_alpha) + 1;
 } else {
  VAR_25 = 0x00;
  VAR_25 |= (VAR_24->loop_filter_alpha & 0xF);
 }
 FUNC_1(VAR_22, VAR_25, VAR_4);

 if (VAR_24->loop_filter_beta < 0) {
  VAR_25 = 0x10;
  VAR_25 |= (0xFF - VAR_24->loop_filter_beta) + 1;
 } else {
  VAR_25 = 0x00;
  VAR_25 |= (VAR_24->loop_filter_beta & 0xF);
 }
 FUNC_1(VAR_22, VAR_25, VAR_5);

 if (VAR_24->entropy_mode == VAR_20)
  FUNC_1(VAR_22, 1, VAR_6);
 else
  FUNC_1(VAR_22, 0, VAR_6);

 VAR_25 = FUNC_0(VAR_22, VAR_7);

 VAR_25 &= ~(0x3 << 5);
 VAR_25 |= (VAR_24->num_ref_pic_4p << 5);

 VAR_25 &= ~(0x1F);
 VAR_25 |= VAR_24->max_ref_pic;
 FUNC_1(VAR_22, VAR_25, VAR_7);

 FUNC_1(VAR_22, VAR_24->_8x8_transform, VAR_8);

 VAR_25 = FUNC_0(VAR_22, VAR_13);

 VAR_25 &= ~(0x1 << 8);
 VAR_25 |= (VAR_23->rc_mb << 8);

 VAR_25 &= ~(0x3F);
 VAR_25 |= VAR_24->rc_frame_qp;
 FUNC_1(VAR_22, VAR_25, VAR_13);

 if (VAR_23->rc_frame && VAR_23->rc_framerate_denom)
  FUNC_1(VAR_22, VAR_23->rc_framerate_num * 1000
   / VAR_23->rc_framerate_denom, VAR_14);
 else
  FUNC_1(VAR_22, 0, VAR_14);

 VAR_25 = FUNC_0(VAR_22, VAR_16);

 VAR_25 &= ~(0x3F << 8);
 VAR_25 |= (VAR_24->rc_max_qp << 8);

 VAR_25 &= ~(0x3F);
 VAR_25 |= VAR_24->rc_min_qp;
 FUNC_1(VAR_22, VAR_25, VAR_16);

 if (VAR_23->rc_mb) {
  VAR_25 = FUNC_0(VAR_22, VAR_15);

  VAR_25 &= ~(0x1 << 3);
  VAR_25 |= (VAR_24->rc_mb_dark << 3);

  VAR_25 &= ~(0x1 << 2);
  VAR_25 |= (VAR_24->rc_mb_smooth << 2);

  VAR_25 &= ~(0x1 << 1);
  VAR_25 |= (VAR_24->rc_mb_static << 1);

  VAR_25 &= ~(0x1);
  VAR_25 |= VAR_24->rc_mb_activity;
  FUNC_1(VAR_22, VAR_25, VAR_15);
 }
 if (!VAR_23->rc_frame && !VAR_23->rc_mb) {
  VAR_26 = FUNC_2(VAR_21, VAR_3);
  VAR_26 &= ~(0xFFF);
  VAR_26 |= ((VAR_24->rc_b_frame_qp & 0x3F) << 6);
  VAR_26 |= (VAR_24->rc_p_frame_qp & 0x3F);
  FUNC_4(VAR_21, VAR_26, VAR_3);
 }

 VAR_26 = FUNC_2(VAR_21, VAR_1);

 VAR_26 &= ~(0x1 << 15);
 VAR_26 |= (VAR_24->vui_sar << 1);
 FUNC_4(VAR_21, VAR_26, VAR_1);
 if (VAR_24->vui_sar) {

  VAR_26 = FUNC_2(VAR_21, VAR_18);
  VAR_26 &= ~(0xFF);
  VAR_26 |= VAR_24->vui_sar_idc;
  FUNC_4(VAR_21, VAR_26, VAR_18);
  if (VAR_24->vui_sar_idc == 0xFF) {

   VAR_26 = FUNC_2(VAR_21, VAR_0);
   VAR_26 &= ~(0xFFFFFFFF);
   VAR_26 |= VAR_24->vui_ext_sar_width << 16;
   VAR_26 |= VAR_24->vui_ext_sar_height;
   FUNC_4(VAR_21, VAR_26, VAR_0);
  }
 }

 VAR_26 = FUNC_2(VAR_21, VAR_2);

 VAR_26 &= ~(0x1 << 16);
 VAR_26 |= (VAR_24->open_gop << 16);

 if (VAR_24->open_gop) {
  VAR_26 &= ~(0xFFFF);
  VAR_26 |= VAR_24->open_gop_size;
 }
 FUNC_4(VAR_21, VAR_26, VAR_2);

 VAR_26 = FUNC_2(VAR_21, VAR_1);

 if (VAR_23->frame_skip_mode ==
   VAR_19) {
  VAR_26 &= ~(0xFFFF << 16);
  VAR_26 |= (VAR_24->cpb_size << 16);
 }
 FUNC_4(VAR_21, VAR_26, VAR_1);
 return 0;
}
