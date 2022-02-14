
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_regs {int e_mpeg4_hec_period; int e_mpeg4_options; int e_vbv_init_delay; int e_vbv_buffer_size; int e_rc_frame_rate; int e_fixed_picture_qp; int e_rc_qp_bound; int e_rc_config; int e_picture_profile; int e_gop_config; } ;
struct s5p_mfc_mpeg4_enc_params {int level; int profile; int rc_frame_qp; int rc_max_qp; int rc_min_qp; int rc_b_frame_qp; int rc_p_frame_qp; } ;
struct TYPE_2__ {struct s5p_mfc_mpeg4_enc_params mpeg4; } ;
struct s5p_mfc_enc_params {int num_b_frame; int rc_mb; int rc_framerate_num; int rc_framerate_denom; scalar_t__ frame_skip_mode; int vbv_size; int vbv_delay; scalar_t__ rc_frame; TYPE_1__ codec; } ;
struct s5p_mfc_dev {struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {struct s5p_mfc_enc_params enc_params; struct s5p_mfc_dev* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_ctx *VAR_1)
{
 struct s5p_mfc_dev *VAR_2 = VAR_1->dev;
 const struct s5p_mfc_regs *VAR_3 = VAR_2->mfc_regs;
 struct s5p_mfc_enc_params *VAR_4 = &VAR_1->enc_params;
 struct s5p_mfc_mpeg4_enc_params *VAR_5 = &VAR_4->codec.mpeg4;
 unsigned int VAR_6 = 0;

 FUNC_0();

 FUNC_3(VAR_1);


 VAR_6 = FUNC_2(VAR_3->e_gop_config);
 VAR_6 &= ~(0x3 << 16);
 VAR_6 |= ((VAR_4->num_b_frame & 0x3) << 16);
 FUNC_4(VAR_6, VAR_3->e_gop_config);


 VAR_6 = 0;

 VAR_6 |= ((VAR_5->level & 0xFF) << 8);

 VAR_6 |= VAR_5->profile & 0x3F;
 FUNC_4(VAR_6, VAR_3->e_picture_profile);


 VAR_6 = FUNC_2(VAR_3->e_rc_config);

 VAR_6 &= ~(0x1 << 8);
 VAR_6 |= ((VAR_4->rc_mb & 0x1) << 8);
 FUNC_4(VAR_6, VAR_3->e_rc_config);


 VAR_6 &= ~(0x3F);
 VAR_6 |= VAR_5->rc_frame_qp & 0x3F;
 FUNC_4(VAR_6, VAR_3->e_rc_config);


 VAR_6 = 0;

 VAR_6 |= ((VAR_5->rc_max_qp & 0x3F) << 8);

 VAR_6 |= VAR_5->rc_min_qp & 0x3F;
 FUNC_4(VAR_6, VAR_3->e_rc_qp_bound);


 FUNC_4(0x0, VAR_3->e_fixed_picture_qp);
 if (!VAR_4->rc_frame && !VAR_4->rc_mb) {
  VAR_6 = 0;
  VAR_6 |= ((VAR_5->rc_b_frame_qp & 0x3F) << 16);
  VAR_6 |= ((VAR_5->rc_p_frame_qp & 0x3F) << 8);
  VAR_6 |= VAR_5->rc_frame_qp & 0x3F;
  FUNC_4(VAR_6, VAR_3->e_fixed_picture_qp);
 }


 if (VAR_4->rc_frame && VAR_4->rc_framerate_num && VAR_4->rc_framerate_denom) {
  VAR_6 = 0;
  VAR_6 |= ((VAR_4->rc_framerate_num & 0xFFFF) << 16);
  VAR_6 |= VAR_4->rc_framerate_denom & 0xFFFF;
  FUNC_4(VAR_6, VAR_3->e_rc_frame_rate);
 }


 if (VAR_4->frame_skip_mode ==
   VAR_0) {
  FUNC_4(VAR_4->vbv_size & 0xFFFF, VAR_3->e_vbv_buffer_size);

  if (VAR_4->rc_frame)
   FUNC_4(VAR_4->vbv_delay, VAR_3->e_vbv_init_delay);
 }


 FUNC_4(0x0, VAR_3->e_mpeg4_options);
 FUNC_4(0x0, VAR_3->e_mpeg4_hec_period);

 FUNC_1();

 return 0;
}
