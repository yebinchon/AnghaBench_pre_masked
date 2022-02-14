
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct venc_h264_inst {int work_buf_allocated; int prepend_hdr; int vpu_inst; TYPE_2__* vsi; } ;
struct venc_enc_param {int h264_level; int h264_profile; int intra_period; int frm_rate; int gop_size; int buf_height; int buf_width; int height; int width; int bitrate; int input_yuv_fmt; } ;
typedef enum venc_set_param_type { ____Placeholder_venc_set_param_type } venc_set_param_type ;
struct TYPE_3__ {int wfd; int level; int profile; int intra_period; int framerate; int gop_size; int buf_h; int buf_w; int pic_h; int pic_w; int bitrate; int input_fourcc; } ;
struct TYPE_4__ {TYPE_1__ config; } ;




 int FUNC_0 (struct venc_h264_inst*) ;
 int FUNC_1 (struct venc_h264_inst*) ;
 int FUNC_2 (struct venc_h264_inst*,int ) ;
 int FUNC_3 (struct venc_h264_inst*,int ) ;
 int FUNC_4 (struct venc_h264_inst*,char*,...) ;
 int FUNC_5 (struct venc_h264_inst*) ;
 int FUNC_6 (int *,int,struct venc_enc_param*) ;

__attribute__((used)) static int FUNC_7(void *VAR_0,
         enum venc_set_param_type VAR_1,
         struct venc_enc_param *VAR_2)
{
 int VAR_3 = 0;
 struct venc_h264_inst *VAR_4 = (struct venc_h264_inst *)VAR_0;

 FUNC_4(VAR_4, "->type=%d", VAR_1);

 switch (VAR_1) {
 case 129:
  VAR_4->vsi->config.input_fourcc = VAR_2->input_yuv_fmt;
  VAR_4->vsi->config.bitrate = VAR_2->bitrate;
  VAR_4->vsi->config.pic_w = VAR_2->width;
  VAR_4->vsi->config.pic_h = VAR_2->height;
  VAR_4->vsi->config.buf_w = VAR_2->buf_width;
  VAR_4->vsi->config.buf_h = VAR_2->buf_height;
  VAR_4->vsi->config.gop_size = VAR_2->gop_size;
  VAR_4->vsi->config.framerate = VAR_2->frm_rate;
  VAR_4->vsi->config.intra_period = VAR_2->intra_period;
  VAR_4->vsi->config.profile =
   FUNC_3(VAR_4, VAR_2->h264_profile);
  VAR_4->vsi->config.level =
   FUNC_2(VAR_4, VAR_2->h264_level);
  VAR_4->vsi->config.wfd = 0;
  VAR_3 = FUNC_6(&VAR_4->vpu_inst, VAR_1, VAR_2);
  if (VAR_3)
   break;
  if (VAR_4->work_buf_allocated) {
   FUNC_1(VAR_4);
   VAR_4->work_buf_allocated = 0;
  }
  VAR_3 = FUNC_0(VAR_4);
  if (VAR_3)
   break;
  VAR_4->work_buf_allocated = 1;
  break;

 case 128:
  VAR_4->prepend_hdr = 1;
  FUNC_4(VAR_4, "set prepend header mode");
  break;

 default:
  VAR_3 = FUNC_6(&VAR_4->vpu_inst, VAR_1, VAR_2);
  break;
 }

 FUNC_5(VAR_4);

 return VAR_3;
}
