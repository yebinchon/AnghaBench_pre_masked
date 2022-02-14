
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_mpeg4_enc_params {int level; unsigned int profile; unsigned int quarter_pixel; int rc_b_frame_qp; int rc_p_frame_qp; unsigned int rc_frame_qp; int rc_max_qp; unsigned int rc_min_qp; } ;
struct TYPE_2__ {struct s5p_mfc_mpeg4_enc_params mpeg4; } ;
struct s5p_mfc_enc_params {int num_b_frame; int rc_framerate_denom; int rc_framerate_num; scalar_t__ frame_skip_mode; int vbv_size; scalar_t__ rc_frame; TYPE_1__ codec; } ;
struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {struct s5p_mfc_enc_params enc_params; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int FUNC_0 (struct s5p_mfc_dev*,int ) ;
 int FUNC_1 (struct s5p_mfc_dev*,unsigned int,int ) ;
 unsigned int FUNC_2 (struct s5p_mfc_ctx*,int ) ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;
 int FUNC_4 (struct s5p_mfc_ctx*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_ctx *VAR_10)
{
 struct s5p_mfc_dev *VAR_11 = VAR_10->dev;
 struct s5p_mfc_enc_params *VAR_12 = &VAR_10->enc_params;
 struct s5p_mfc_mpeg4_enc_params *VAR_13 = &VAR_12->codec.mpeg4;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;

 FUNC_3(VAR_10);

 VAR_14 = FUNC_0(VAR_11, VAR_4);

 VAR_14 &= ~(0x3 << 16);
 VAR_14 |= (VAR_12->num_b_frame << 16);
 FUNC_1(VAR_11, VAR_14, VAR_4);

 VAR_14 = FUNC_0(VAR_11, VAR_5);

 VAR_14 &= ~(0xFF << 8);
 VAR_14 |= (VAR_13->level << 8);

 VAR_14 &= ~(0x3F);
 VAR_14 |= VAR_13->profile;
 FUNC_1(VAR_11, VAR_14, VAR_5);

 FUNC_1(VAR_11, VAR_13->quarter_pixel, VAR_3);

 if (!VAR_12->rc_frame) {
  VAR_15 = FUNC_2(VAR_10, VAR_1);
  VAR_15 &= ~(0xFFF);
  VAR_15 |= ((VAR_13->rc_b_frame_qp & 0x3F) << 6);
  VAR_15 |= (VAR_13->rc_p_frame_qp & 0x3F);
  FUNC_4(VAR_10, VAR_15, VAR_1);
 }

 if (VAR_12->rc_frame) {
  if (VAR_12->rc_framerate_denom > 0) {
   VAR_16 = VAR_12->rc_framerate_num * 1000 /
      VAR_12->rc_framerate_denom;
   FUNC_1(VAR_11, VAR_16,
    VAR_7);
   VAR_15 = FUNC_2(VAR_10, VAR_2);
   VAR_15 &= ~(0xFFFFFFFF);
   VAR_15 |= (1UL << 31);
   VAR_15 |= ((VAR_12->rc_framerate_num & 0x7FFF) << 16);
   VAR_15 |= (VAR_12->rc_framerate_denom & 0xFFFF);
   FUNC_4(VAR_10, VAR_15, VAR_2);
  }
 } else {
  FUNC_1(VAR_11, 0, VAR_7);
 }

 VAR_14 = FUNC_0(VAR_11, VAR_6);

 VAR_14 &= ~(0x3F);
 VAR_14 |= VAR_13->rc_frame_qp;
 FUNC_1(VAR_11, VAR_14, VAR_6);

 VAR_14 = FUNC_0(VAR_11, VAR_8);

 VAR_14 &= ~(0x3F << 8);
 VAR_14 |= (VAR_13->rc_max_qp << 8);

 VAR_14 &= ~(0x3F);
 VAR_14 |= VAR_13->rc_min_qp;
 FUNC_1(VAR_11, VAR_14, VAR_8);

 VAR_15 = FUNC_2(VAR_10, VAR_0);

 if (VAR_12->frame_skip_mode ==
   VAR_9) {
  VAR_15 &= ~(0xFFFF << 16);
  VAR_15 |= (VAR_12->vbv_size << 16);
 }
 FUNC_4(VAR_10, VAR_15, VAR_0);
 return 0;
}
