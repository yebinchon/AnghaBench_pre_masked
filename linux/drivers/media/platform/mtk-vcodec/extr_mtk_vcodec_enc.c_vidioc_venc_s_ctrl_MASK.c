
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; int val; } ;
struct mtk_enc_params {int force_intra; int gop_size; int intra_period; int h264_level; int h264_profile; int rc_mb; int seq_hdr_mode; int h264_max_qp; int rc_frame; int num_b_frame; int bitrate; } ;
struct mtk_vcodec_ctx {int param_change; struct mtk_enc_params enc_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mtk_vcodec_ctx* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl *VAR_5)
{
 struct mtk_vcodec_ctx *VAR_6 = FUNC_0(VAR_5);
 struct mtk_enc_params *VAR_7 = &VAR_6->enc_params;
 int VAR_8 = 0;

 switch (VAR_5->id) {
 case 138:
  FUNC_1(2, "V4L2_CID_MPEG_VIDEO_BITRATE val = %d",
          VAR_5->val);
  VAR_7->bitrate = VAR_5->val;
  VAR_6->param_change |= VAR_1;
  break;
 case 137:
  FUNC_1(2, "V4L2_CID_MPEG_VIDEO_B_FRAMES val = %d",
          VAR_5->val);
  VAR_7->num_b_frame = VAR_5->val;
  break;
 case 135:
  FUNC_1(2, "V4L2_CID_MPEG_VIDEO_FRAME_RC_ENABLE val = %d",
          VAR_5->val);
  VAR_7->rc_frame = VAR_5->val;
  break;
 case 131:
  FUNC_1(2, "V4L2_CID_MPEG_VIDEO_H264_MAX_QP val = %d",
          VAR_5->val);
  VAR_7->h264_max_qp = VAR_5->val;
  break;
 case 129:
  FUNC_1(2, "V4L2_CID_MPEG_VIDEO_HEADER_MODE val = %d",
          VAR_5->val);
  VAR_7->seq_hdr_mode = VAR_5->val;
  break;
 case 128:
  FUNC_1(2, "V4L2_CID_MPEG_VIDEO_MB_RC_ENABLE val = %d",
          VAR_5->val);
  VAR_7->rc_mb = VAR_5->val;
  break;
 case 130:
  FUNC_1(2, "V4L2_CID_MPEG_VIDEO_H264_PROFILE val = %d",
          VAR_5->val);
  VAR_7->h264_profile = VAR_5->val;
  break;
 case 132:
  FUNC_1(2, "V4L2_CID_MPEG_VIDEO_H264_LEVEL val = %d",
          VAR_5->val);
  VAR_7->h264_level = VAR_5->val;
  break;
 case 133:
  FUNC_1(2, "V4L2_CID_MPEG_VIDEO_H264_I_PERIOD val = %d",
          VAR_5->val);
  VAR_7->intra_period = VAR_5->val;
  VAR_6->param_change |= VAR_4;
  break;
 case 134:
  FUNC_1(2, "V4L2_CID_MPEG_VIDEO_GOP_SIZE val = %d",
          VAR_5->val);
  VAR_7->gop_size = VAR_5->val;
  VAR_6->param_change |= VAR_3;
  break;
 case 136:
  FUNC_1(2, "V4L2_CID_MPEG_VIDEO_FORCE_KEY_FRAME");
  VAR_7->force_intra = 1;
  VAR_6->param_change |= VAR_2;
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }

 return VAR_8;
}
