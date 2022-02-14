
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s5p_mfc_regs {int e_metadata_buffer_size; int e_metadata_buffer_addr; int e_min_bit_count; int e_max_bit_count; int e_bit_count_enable; int e_picture_tag; int e_rc_roi_ctrl; int e_param_change; int e_roi_buffer_addr; int e_frame_insertion; int e_mv_ver_range; int e_mv_hor_range; int e_rc_config; int e_enc_options; int e_rc_mode; int e_rc_bit_rate; int e_padding_ctrl; int pixel_format; int e_ir_size; int e_gop_config; int e_frame_crop_offset; int e_cropped_frame_height; int e_cropped_frame_width; int e_frame_height; int e_frame_width; } ;
struct s5p_mfc_enc_params {int gop_size; scalar_t__ slice_mode; int intra_refresh_mb; int pad_cr; int pad_cb; int pad_luma; int rc_frame; int rc_bitrate; scalar_t__ rc_reaction_coeff; int seq_hdr_mode; int frame_skip_mode; unsigned int mv_h_range; unsigned int mv_v_range; scalar_t__ pad; int slice_bit; int slice_mb; } ;
struct s5p_mfc_dev {struct s5p_mfc_regs* mfc_regs; } ;
struct TYPE_3__ {int bits; int mb; } ;
struct s5p_mfc_ctx {int img_width; int img_height; scalar_t__ slice_mode; TYPE_2__* src_fmt; TYPE_1__ slice_size; struct s5p_mfc_enc_params enc_params; struct s5p_mfc_dev* dev; } ;
struct TYPE_4__ {scalar_t__ fourcc; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_ctx *VAR_7)
{
 struct s5p_mfc_dev *VAR_8 = VAR_7->dev;
 const struct s5p_mfc_regs *VAR_9 = VAR_8->mfc_regs;
 struct s5p_mfc_enc_params *VAR_10 = &VAR_7->enc_params;
 unsigned int VAR_11 = 0;

 FUNC_0();


 FUNC_4(VAR_7->img_width, VAR_9->e_frame_width);

 FUNC_4(VAR_7->img_height, VAR_9->e_frame_height);


 FUNC_4(VAR_7->img_width, VAR_9->e_cropped_frame_width);

 FUNC_4(VAR_7->img_height, VAR_9->e_cropped_frame_height);

 FUNC_4(0x0, VAR_9->e_frame_crop_offset);


 VAR_11 = 0;
 VAR_11 |= VAR_10->gop_size & 0xFFFF;
 FUNC_4(VAR_11, VAR_9->e_gop_config);



 VAR_7->slice_mode = VAR_10->slice_mode;
 VAR_11 = 0;
 if (VAR_10->slice_mode == VAR_3) {
  VAR_11 |= (0x1 << 3);
  FUNC_4(VAR_11, VAR_9->e_enc_options);
  VAR_7->slice_size.mb = VAR_10->slice_mb;
 } else if (VAR_10->slice_mode == VAR_2) {
  VAR_11 |= (0x1 << 3);
  FUNC_4(VAR_11, VAR_9->e_enc_options);
  VAR_7->slice_size.bits = VAR_10->slice_bit;
 } else {
  VAR_11 &= ~(0x1 << 3);
  FUNC_4(VAR_11, VAR_9->e_enc_options);
 }

 FUNC_3(VAR_7);


 FUNC_4(VAR_10->intra_refresh_mb, VAR_9->e_ir_size);
 VAR_11 = FUNC_2(VAR_9->e_enc_options);
 if (VAR_10->intra_refresh_mb == 0)
  VAR_11 &= ~(0x1 << 4);
 else
  VAR_11 |= (0x1 << 4);
 FUNC_4(VAR_11, VAR_9->e_enc_options);


 VAR_11 = FUNC_2(VAR_9->e_enc_options);
 VAR_11 &= ~(0x1 << 9);
 FUNC_4(VAR_11, VAR_9->e_enc_options);


 if (VAR_7->src_fmt->fourcc == VAR_4) {

  VAR_11 = FUNC_2(VAR_9->e_enc_options);
  VAR_11 &= ~(0x1 << 7);
  FUNC_4(VAR_11, VAR_9->e_enc_options);

  FUNC_4(0x0, VAR_9->pixel_format);
 } else if (VAR_7->src_fmt->fourcc == VAR_6) {

  VAR_11 = FUNC_2(VAR_9->e_enc_options);
  VAR_11 &= ~(0x1 << 7);
  FUNC_4(VAR_11, VAR_9->e_enc_options);

  FUNC_4(0x1, VAR_9->pixel_format);
 } else if (VAR_7->src_fmt->fourcc == VAR_5) {

  VAR_11 = FUNC_2(VAR_9->e_enc_options);
  VAR_11 |= (0x1 << 7);
  FUNC_4(VAR_11, VAR_9->e_enc_options);

  FUNC_4(0x0, VAR_9->pixel_format);
 }



 VAR_11 = FUNC_2(VAR_9->e_enc_options);
 VAR_11 |= (0x1 << 8);
 FUNC_4(VAR_11, VAR_9->e_enc_options);


 FUNC_4(0x0, VAR_9->e_padding_ctrl);
 if (VAR_10->pad) {
  VAR_11 = 0;

  VAR_11 |= (1UL << 31);

  VAR_11 |= ((VAR_10->pad_cr & 0xFF) << 16);

  VAR_11 |= ((VAR_10->pad_cb & 0xFF) << 8);

  VAR_11 |= VAR_10->pad_luma & 0xFF;
  FUNC_4(VAR_11, VAR_9->e_padding_ctrl);
 }


 VAR_11 = 0;

 VAR_11 |= ((VAR_10->rc_frame & 0x1) << 9);
 FUNC_4(VAR_11, VAR_9->e_rc_config);


 if (VAR_10->rc_frame)
  FUNC_4(VAR_10->rc_bitrate,
   VAR_9->e_rc_bit_rate);
 else
  FUNC_4(1, VAR_9->e_rc_bit_rate);


 if (VAR_10->rc_frame) {
  if (VAR_10->rc_reaction_coeff < VAR_1)
   FUNC_4(1, VAR_9->e_rc_mode);
  else
   FUNC_4(2, VAR_9->e_rc_mode);
 }


 VAR_11 = FUNC_2(VAR_9->e_enc_options);
 VAR_11 &= ~(0x1 << 2);
 VAR_11 |= ((VAR_10->seq_hdr_mode & 0x1) << 2);


 VAR_11 &= ~(0x3);
 VAR_11 |= (VAR_10->frame_skip_mode & 0x3);
 FUNC_4(VAR_11, VAR_9->e_enc_options);


 VAR_11 = FUNC_2(VAR_9->e_rc_config);
 VAR_11 &= ~(0x1 << 10);
 FUNC_4(VAR_11, VAR_9->e_rc_config);


 VAR_11 = (VAR_10->mv_h_range & VAR_0);
 FUNC_4(VAR_11, VAR_9->e_mv_hor_range);

 VAR_11 = (VAR_10->mv_v_range & VAR_0);
 FUNC_4(VAR_11, VAR_9->e_mv_ver_range);

 FUNC_4(0x0, VAR_9->e_frame_insertion);
 FUNC_4(0x0, VAR_9->e_roi_buffer_addr);
 FUNC_4(0x0, VAR_9->e_param_change);
 FUNC_4(0x0, VAR_9->e_rc_roi_ctrl);
 FUNC_4(0x0, VAR_9->e_picture_tag);

 FUNC_4(0x0, VAR_9->e_bit_count_enable);
 FUNC_4(0x0, VAR_9->e_max_bit_count);
 FUNC_4(0x0, VAR_9->e_min_bit_count);

 FUNC_4(0x0, VAR_9->e_metadata_buffer_addr);
 FUNC_4(0x0, VAR_9->e_metadata_buffer_size);

 FUNC_1();

 return 0;
}
