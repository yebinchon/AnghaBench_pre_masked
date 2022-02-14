
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct vicodec_ctx {TYPE_2__ state; int is_enc; } ;
struct v4l2_pix_format_mplane {int quantization; int ycbcr_enc; int xfer_func; int colorspace; void* pixelformat; } ;
struct v4l2_pix_format {int quantization; int ycbcr_enc; int xfer_func; int colorspace; void* pixelformat; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {void* id; } ;


 int VAR_0 ;


 void* VAR_1 ;
 struct vicodec_ctx* FUNC_0 (struct file*) ;
 TYPE_3__* FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (struct vicodec_ctx*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
      struct v4l2_format *VAR_5)
{
 struct vicodec_ctx *VAR_6 = FUNC_0(VAR_3);
 struct v4l2_pix_format_mplane *VAR_7;
 struct v4l2_pix_format *VAR_8;

 switch (VAR_5->type) {
 case 129:
  if (VAR_2)
   return -VAR_0;
  VAR_8 = &VAR_5->fmt.pix;
  VAR_8->pixelformat = VAR_6->is_enc ? VAR_1 :
       FUNC_1(VAR_5->fmt.pix.pixelformat)->id;
  VAR_8->colorspace = VAR_6->state.colorspace;
  VAR_8->xfer_func = VAR_6->state.xfer_func;
  VAR_8->ycbcr_enc = VAR_6->state.ycbcr_enc;
  VAR_8->quantization = VAR_6->state.quantization;
  break;
 case 128:
  if (!VAR_2)
   return -VAR_0;
  VAR_7 = &VAR_5->fmt.pix_mp;
  VAR_7->pixelformat = VAR_6->is_enc ? VAR_1 :
          FUNC_1(VAR_7->pixelformat)->id;
  VAR_7->colorspace = VAR_6->state.colorspace;
  VAR_7->xfer_func = VAR_6->state.xfer_func;
  VAR_7->ycbcr_enc = VAR_6->state.ycbcr_enc;
  VAR_7->quantization = VAR_6->state.quantization;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_2(VAR_6, VAR_5);
}
