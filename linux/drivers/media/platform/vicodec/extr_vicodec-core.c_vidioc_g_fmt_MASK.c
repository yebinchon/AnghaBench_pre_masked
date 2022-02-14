
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vicodec_q_data {int coded_width; int sizeimage; int coded_height; struct v4l2_fwht_pixfmt_info* info; } ;
struct TYPE_7__ {int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct vicodec_ctx {TYPE_3__ state; TYPE_1__ fh; } ;
struct vb2_queue {int dummy; } ;
struct v4l2_pix_format_mplane {int width; int num_planes; TYPE_4__* plane_fmt; int reserved; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int pixelformat; void* field; int height; } ;
struct v4l2_pix_format {int width; int bytesperline; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int sizeimage; int pixelformat; void* field; int height; } ;
struct v4l2_fwht_pixfmt_info {int bytesperline_mult; int id; } ;
struct TYPE_6__ {struct v4l2_pix_format_mplane pix_mp; struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_2__ fmt; } ;
struct TYPE_8__ {int bytesperline; int reserved; int sizeimage; } ;


 int VAR_0 ;




 void* VAR_1 ;
 struct vicodec_q_data* FUNC_0 (struct vicodec_ctx*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 struct vb2_queue* FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct vicodec_ctx *VAR_3, struct v4l2_format *VAR_4)
{
 struct vb2_queue *VAR_5;
 struct vicodec_q_data *VAR_6;
 struct v4l2_pix_format_mplane *VAR_7;
 struct v4l2_pix_format *VAR_8;
 const struct v4l2_fwht_pixfmt_info *VAR_9;

 VAR_5 = FUNC_2(VAR_3->fh.m2m_ctx, VAR_4->type);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_3, VAR_4->type);
 VAR_9 = VAR_6->info;

 switch (VAR_4->type) {
 case 131:
 case 129:
  if (VAR_2)
   return -VAR_0;
  VAR_8 = &VAR_4->fmt.pix;
  VAR_8->width = VAR_6->coded_width;
  VAR_8->height = VAR_6->coded_height;
  VAR_8->field = VAR_1;
  VAR_8->pixelformat = VAR_9->id;
  VAR_8->bytesperline = VAR_6->coded_width *
     VAR_9->bytesperline_mult;
  VAR_8->sizeimage = VAR_6->sizeimage;
  VAR_8->colorspace = VAR_3->state.colorspace;
  VAR_8->xfer_func = VAR_3->state.xfer_func;
  VAR_8->ycbcr_enc = VAR_3->state.ycbcr_enc;
  VAR_8->quantization = VAR_3->state.quantization;
  break;

 case 130:
 case 128:
  if (!VAR_2)
   return -VAR_0;
  VAR_7 = &VAR_4->fmt.pix_mp;
  VAR_7->width = VAR_6->coded_width;
  VAR_7->height = VAR_6->coded_height;
  VAR_7->field = VAR_1;
  VAR_7->pixelformat = VAR_9->id;
  VAR_7->num_planes = 1;
  VAR_7->plane_fmt[0].bytesperline =
    VAR_6->coded_width * VAR_9->bytesperline_mult;
  VAR_7->plane_fmt[0].sizeimage = VAR_6->sizeimage;
  VAR_7->colorspace = VAR_3->state.colorspace;
  VAR_7->xfer_func = VAR_3->state.xfer_func;
  VAR_7->ycbcr_enc = VAR_3->state.ycbcr_enc;
  VAR_7->quantization = VAR_3->state.quantization;
  FUNC_1(VAR_7->reserved, 0, sizeof(VAR_7->reserved));
  FUNC_1(VAR_7->plane_fmt[0].reserved, 0,
         sizeof(VAR_7->plane_fmt[0].reserved));
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
