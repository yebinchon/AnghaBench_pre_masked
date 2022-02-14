
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venc_enc_param {int frm_rate; int intra_period; int gop_size; int bitrate; int buf_height; int buf_width; int height; int width; int h264_level; int h264_profile; int input_yuv_fmt; } ;
struct mtk_enc_params {int framerate_num; int framerate_denom; int bitrate; int gop_size; int intra_period; int h264_level; int h264_profile; } ;
struct mtk_vcodec_ctx {struct mtk_enc_params enc_params; struct mtk_q_data* q_data; } ;
struct mtk_q_data {int coded_height; int coded_width; int visible_height; int visible_width; TYPE_1__* fmt; } ;
struct TYPE_2__ {int fourcc; } ;


 size_t VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct mtk_vcodec_ctx *VAR_5,
    struct venc_enc_param *VAR_6)
{
 struct mtk_q_data *VAR_7 = &VAR_5->q_data[VAR_0];
 struct mtk_enc_params *VAR_8 = &VAR_5->enc_params;

 switch (VAR_7->fmt->fourcc) {
 case 129:
  VAR_6->input_yuv_fmt = VAR_1;
  break;
 case 128:
  VAR_6->input_yuv_fmt = VAR_4;
  break;
 case 131:
  VAR_6->input_yuv_fmt = VAR_2;
  break;
 case 130:
  VAR_6->input_yuv_fmt = VAR_3;
  break;
 default:
  FUNC_1("Unsupported fourcc =%d", VAR_7->fmt->fourcc);
  break;
 }
 VAR_6->h264_profile = VAR_8->h264_profile;
 VAR_6->h264_level = VAR_8->h264_level;


 VAR_6->width = VAR_7->visible_width;
 VAR_6->height = VAR_7->visible_height;

 VAR_6->buf_width = VAR_7->coded_width;
 VAR_6->buf_height = VAR_7->coded_height;
 VAR_6->frm_rate = VAR_8->framerate_num /
   VAR_8->framerate_denom;
 VAR_6->intra_period = VAR_8->intra_period;
 VAR_6->gop_size = VAR_8->gop_size;
 VAR_6->bitrate = VAR_8->bitrate;

 FUNC_0(0,
  "fmt 0x%x, P/L %d/%d, w/h %d/%d, buf %d/%d, fps/bps %d/%d, gop %d, i_period %d",
  VAR_6->input_yuv_fmt, VAR_6->h264_profile,
  VAR_6->h264_level, VAR_6->width, VAR_6->height,
  VAR_6->buf_width, VAR_6->buf_height,
  VAR_6->frm_rate, VAR_6->bitrate,
  VAR_6->gop_size, VAR_6->intra_period);
}
