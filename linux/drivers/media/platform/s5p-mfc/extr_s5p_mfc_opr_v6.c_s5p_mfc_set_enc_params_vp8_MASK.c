
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_vp8_enc_params {int profile; int rc_frame_qp; int rc_p_frame_qp; int rc_max_qp; int rc_min_qp; int imd_4x4; int num_partitions; int num_ref; } ;
struct s5p_mfc_regs {int e_vp8_options; int e_vbv_init_delay; int e_vbv_buffer_size; int e_rc_qp_bound; int e_fixed_picture_qp; int e_rc_config; int e_rc_frame_rate; int e_picture_profile; int e_gop_config; } ;
struct TYPE_2__ {struct s5p_mfc_vp8_enc_params vp8; } ;
struct s5p_mfc_enc_params {int num_b_frame; int rc_mb; int rc_framerate_num; int rc_framerate_denom; scalar_t__ frame_skip_mode; int vbv_size; unsigned int vbv_delay; scalar_t__ rc_frame; TYPE_1__ codec; } ;
struct s5p_mfc_dev {struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {struct s5p_mfc_enc_params enc_params; struct s5p_mfc_dev* dev; } ;






 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_ctx *VAR_1)
{
 struct s5p_mfc_dev *VAR_2 = VAR_1->dev;
 const struct s5p_mfc_regs *VAR_3 = VAR_2->mfc_regs;
 struct s5p_mfc_enc_params *VAR_4 = &VAR_1->enc_params;
 struct s5p_mfc_vp8_enc_params *VAR_5 = &VAR_4->codec.vp8;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;

 FUNC_0();

 FUNC_3(VAR_1);


 VAR_6 = FUNC_2(VAR_3->e_gop_config);
 VAR_6 &= ~(0x3 << 16);
 VAR_6 |= ((VAR_4->num_b_frame & 0x3) << 16);
 FUNC_4(VAR_6, VAR_3->e_gop_config);


 VAR_6 = VAR_5->profile & 0x3;
 FUNC_4(VAR_6, VAR_3->e_picture_profile);


 VAR_6 = FUNC_2(VAR_3->e_rc_config);

 VAR_6 &= ~(0x1 << 8);
 VAR_6 |= ((VAR_4->rc_mb & 0x1) << 8);
 FUNC_4(VAR_6, VAR_3->e_rc_config);


 if (VAR_4->rc_frame && VAR_4->rc_framerate_num && VAR_4->rc_framerate_denom) {
  VAR_6 = 0;
  VAR_6 |= ((VAR_4->rc_framerate_num & 0xFFFF) << 16);
  VAR_6 |= VAR_4->rc_framerate_denom & 0xFFFF;
  FUNC_4(VAR_6, VAR_3->e_rc_frame_rate);
 }


 VAR_6 &= ~(0x7F);
 VAR_6 |= VAR_5->rc_frame_qp & 0x7F;
 FUNC_4(VAR_6, VAR_3->e_rc_config);


 FUNC_4(0x0, VAR_3->e_fixed_picture_qp);
 if (!VAR_4->rc_frame && !VAR_4->rc_mb) {
  VAR_6 = 0;
  VAR_6 |= ((VAR_5->rc_p_frame_qp & 0x7F) << 8);
  VAR_6 |= VAR_5->rc_frame_qp & 0x7F;
  FUNC_4(VAR_6, VAR_3->e_fixed_picture_qp);
 }


 VAR_6 = ((VAR_5->rc_max_qp & 0x7F) << 8);

 VAR_6 |= VAR_5->rc_min_qp & 0x7F;
 FUNC_4(VAR_6, VAR_3->e_rc_qp_bound);


 if (VAR_4->frame_skip_mode ==
   VAR_0) {
  FUNC_4(VAR_4->vbv_size & 0xFFFF, VAR_3->e_vbv_buffer_size);

  if (VAR_4->rc_frame)
   FUNC_4(VAR_4->vbv_delay, VAR_3->e_vbv_init_delay);
 }


 VAR_6 = 0;
 VAR_6 |= (VAR_5->imd_4x4 & 0x1) << 10;
 switch (VAR_5->num_partitions) {
 case 131:
  VAR_7 = 0;
  break;
 case 130:
  VAR_7 = 2;
  break;
 case 129:
  VAR_7 = 4;
  break;
 case 128:
  VAR_7 = 8;
  break;
 }
 VAR_6 |= (VAR_7 & 0xF) << 3;
 VAR_6 |= (VAR_5->num_ref & 0x2);
 FUNC_4(VAR_6, VAR_3->e_vp8_options);

 FUNC_1();

 return 0;
}
