
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_enc_params {unsigned int gop_size; unsigned int slice_mode; unsigned int slice_mb; unsigned int slice_bit; unsigned int intra_refresh_mb; int pad_cr; int pad_cb; unsigned int pad_luma; int rc_frame; unsigned int rc_bitrate; unsigned int rc_reaction_coeff; int seq_hdr_mode; int frame_skip_mode; unsigned int fixed_target_bit; scalar_t__ pad; } ;
struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {unsigned int img_width; unsigned int img_height; TYPE_1__* src_fmt; struct s5p_mfc_enc_params enc_params; struct s5p_mfc_dev* dev; } ;
struct TYPE_2__ {scalar_t__ fourcc; } ;


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
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 unsigned int FUNC_0 (struct s5p_mfc_dev*,int ) ;
 int FUNC_1 (struct s5p_mfc_dev*,unsigned int,int ) ;
 unsigned int FUNC_2 (struct s5p_mfc_ctx*,int ) ;
 int FUNC_3 (struct s5p_mfc_ctx*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct s5p_mfc_ctx *VAR_19)
{
 struct s5p_mfc_dev *VAR_20 = VAR_19->dev;
 struct s5p_mfc_enc_params *VAR_21 = &VAR_19->enc_params;
 unsigned int VAR_22;
 unsigned int VAR_23;


 FUNC_1(VAR_20, VAR_19->img_width, VAR_4);

 FUNC_1(VAR_20, VAR_19->img_height, VAR_14);

 VAR_22 = FUNC_0(VAR_20, VAR_10);
 VAR_22 |= (1 << 18);
 VAR_22 &= ~(0xFFFF);
 VAR_22 |= VAR_21->gop_size;
 FUNC_1(VAR_20, VAR_22, VAR_10);
 FUNC_1(VAR_20, 0, VAR_2);


 FUNC_1(VAR_20, VAR_21->slice_mode, VAR_7);
 if (VAR_21->slice_mode == VAR_16) {
  FUNC_1(VAR_20, VAR_21->slice_mb, VAR_8);
 } else if (VAR_21->slice_mode == VAR_15) {
  FUNC_1(VAR_20, VAR_21->slice_bit, VAR_6);
 } else {
  FUNC_1(VAR_20, 0, VAR_8);
  FUNC_1(VAR_20, 0, VAR_6);
 }

 FUNC_1(VAR_20, VAR_21->intra_refresh_mb, VAR_3);

 if (VAR_19->src_fmt->fourcc == VAR_17)
  FUNC_1(VAR_20, 0, VAR_5);
 else if (VAR_19->src_fmt->fourcc == VAR_18)
  FUNC_1(VAR_20, 3, VAR_5);

 VAR_22 = FUNC_0(VAR_20, VAR_9);
 if (VAR_21->pad) {

  VAR_22 |= (1UL << 31);

  VAR_22 &= ~(0xFF << 16);
  VAR_22 |= (VAR_21->pad_cr << 16);

  VAR_22 &= ~(0xFF << 8);
  VAR_22 |= (VAR_21->pad_cb << 8);

  VAR_22 &= ~(0xFF);
  VAR_22 |= (VAR_21->pad_luma);
 } else {

  VAR_22 = 0;
 }
 FUNC_1(VAR_20, VAR_22, VAR_9);

 VAR_22 = FUNC_0(VAR_20, VAR_12);

 VAR_22 &= ~(0x1 << 9);
 VAR_22 |= (VAR_21->rc_frame << 9);
 FUNC_1(VAR_20, VAR_22, VAR_12);

 if (VAR_21->rc_frame)
  FUNC_1(VAR_20, VAR_21->rc_bitrate,
   VAR_11);
 else
  FUNC_1(VAR_20, 0, VAR_11);

 if (VAR_21->rc_frame)
  FUNC_1(VAR_20, VAR_21->rc_reaction_coeff, VAR_13);
 VAR_23 = FUNC_2(VAR_19, VAR_0);

 VAR_23 &= ~(0x1 << 3);
 VAR_23 |= (VAR_21->seq_hdr_mode << 3);

 VAR_23 &= ~(0x3 << 1);
 VAR_23 |= (VAR_21->frame_skip_mode << 1);
 FUNC_3(VAR_19, VAR_23, VAR_0);

 FUNC_3(VAR_19, VAR_21->fixed_target_bit, VAR_1);
 return 0;
}
