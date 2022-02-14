
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_mpeg4_enc_params {int rc_p_frame_qp; unsigned int rc_frame_qp; int rc_max_qp; unsigned int rc_min_qp; } ;
struct TYPE_2__ {struct s5p_mfc_mpeg4_enc_params mpeg4; } ;
struct s5p_mfc_enc_params {int rc_framerate_denom; int rc_framerate_num; scalar_t__ frame_skip_mode; int vbv_size; scalar_t__ rc_frame; TYPE_1__ codec; } ;
struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {struct s5p_mfc_enc_params enc_params; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (struct s5p_mfc_dev*,int ) ;
 int FUNC_1 (struct s5p_mfc_dev*,unsigned int,int ) ;
 unsigned int FUNC_2 (struct s5p_mfc_ctx*,int ) ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;
 int FUNC_4 (struct s5p_mfc_ctx*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_ctx *VAR_6)
{
 struct s5p_mfc_dev *VAR_7 = VAR_6->dev;
 struct s5p_mfc_enc_params *VAR_8 = &VAR_6->enc_params;
 struct s5p_mfc_mpeg4_enc_params *VAR_9 = &VAR_8->codec.mpeg4;
 unsigned int VAR_10;
 unsigned int VAR_11;

 FUNC_3(VAR_6);

 if (!VAR_8->rc_frame) {
  VAR_11 = FUNC_2(VAR_6, VAR_1);
  VAR_11 &= ~(0xFFF);
  VAR_11 |= (VAR_9->rc_p_frame_qp & 0x3F);
  FUNC_4(VAR_6, VAR_11, VAR_1);
 }

 if (VAR_8->rc_frame && VAR_8->rc_framerate_denom)
  FUNC_1(VAR_7, VAR_8->rc_framerate_num * 1000
   / VAR_8->rc_framerate_denom, VAR_3);
 else
  FUNC_1(VAR_7, 0, VAR_3);

 VAR_10 = FUNC_0(VAR_7, VAR_2);

 VAR_10 &= ~(0x3F);
 VAR_10 |= VAR_9->rc_frame_qp;
 FUNC_1(VAR_7, VAR_10, VAR_2);

 VAR_10 = FUNC_0(VAR_7, VAR_4);

 VAR_10 &= ~(0x3F << 8);
 VAR_10 |= (VAR_9->rc_max_qp << 8);

 VAR_10 &= ~(0x3F);
 VAR_10 |= VAR_9->rc_min_qp;
 FUNC_1(VAR_7, VAR_10, VAR_4);

 VAR_11 = FUNC_2(VAR_6, VAR_0);

 if (VAR_8->frame_skip_mode ==
   VAR_5) {
  VAR_11 &= ~(0xFFFF << 16);
  VAR_11 |= (VAR_8->vbv_size << 16);
 }
 FUNC_4(VAR_6, VAR_11, VAR_0);
 return 0;
}
