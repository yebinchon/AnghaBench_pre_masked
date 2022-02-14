
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int xfer_func; int quantization; int ycbcr_enc; int colorspace; } ;
struct TYPE_5__ {int pixelformat; } ;
struct TYPE_7__ {TYPE_2__ pix_mp; TYPE_1__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct mtk_video_fmt {int dummy; } ;
struct mtk_vcodec_ctx {int xfer_func; int quantization; int ycbcr_enc; int colorspace; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int fourcc; } ;


 size_t VAR_0 ;
 struct mtk_vcodec_ctx* FUNC_0 (void*) ;
 struct mtk_video_fmt* FUNC_1 (struct v4l2_format*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (struct v4l2_format*,struct mtk_video_fmt const*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
      struct v4l2_format *VAR_4)
{
 const struct mtk_video_fmt *VAR_5;
 struct mtk_vcodec_ctx *VAR_6 = FUNC_0(VAR_3);

 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5) {
  VAR_4->fmt.pix.pixelformat = VAR_1[VAR_0].fourcc;
  VAR_5 = FUNC_1(VAR_4);
 }
 VAR_4->fmt.pix_mp.colorspace = VAR_6->colorspace;
 VAR_4->fmt.pix_mp.ycbcr_enc = VAR_6->ycbcr_enc;
 VAR_4->fmt.pix_mp.quantization = VAR_6->quantization;
 VAR_4->fmt.pix_mp.xfer_func = VAR_6->xfer_func;

 return FUNC_2(VAR_4, VAR_5);
}
