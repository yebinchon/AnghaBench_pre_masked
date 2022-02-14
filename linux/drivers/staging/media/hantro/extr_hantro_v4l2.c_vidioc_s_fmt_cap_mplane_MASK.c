
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_pix_format_mplane {scalar_t__ pixelformat; scalar_t__ height; scalar_t__ width; int quantization; int xfer_func; int ycbcr_enc; int colorspace; } ;
struct TYPE_5__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct hantro_fmt {int dummy; } ;
struct TYPE_7__ {int quantization; int xfer_func; int ycbcr_enc; int colorspace; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct hantro_ctx {TYPE_4__* vpu_dst_fmt; TYPE_3__ src_fmt; struct v4l2_pix_format_mplane dst_fmt; TYPE_2__ fh; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int codec_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hantro_ctx* FUNC_0 (void*) ;
 TYPE_4__* FUNC_1 (struct hantro_fmt const*,unsigned int,scalar_t__) ;
 struct hantro_fmt* FUNC_2 (struct hantro_ctx*,unsigned int*) ;
 scalar_t__ FUNC_3 (struct hantro_ctx*) ;
 int FUNC_4 (struct hantro_ctx*) ;
 int FUNC_5 (struct hantro_ctx*,scalar_t__) ;
 struct vb2_queue* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (struct vb2_queue*) ;
 int FUNC_8 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_9 (int ,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_2, void *VAR_3,
       struct v4l2_format *VAR_4)
{
 struct v4l2_pix_format_mplane *VAR_5 = &VAR_4->fmt.pix_mp;
 struct hantro_ctx *VAR_6 = FUNC_0(VAR_3);
 const struct hantro_fmt *VAR_7;
 struct vb2_queue *VAR_8;
 unsigned int VAR_9;
 int VAR_10;


 VAR_8 = FUNC_6(VAR_6->fh.m2m_ctx, VAR_4->type);
 if (FUNC_7(VAR_8))
  return -VAR_0;

 if (FUNC_3(VAR_6)) {
  struct vb2_queue *VAR_11;






  VAR_11 = FUNC_6(VAR_6->fh.m2m_ctx,
       VAR_1);
  if (FUNC_7(VAR_11) &&
      (VAR_5->pixelformat != VAR_6->dst_fmt.pixelformat ||
       VAR_5->height != VAR_6->dst_fmt.height ||
       VAR_5->width != VAR_6->dst_fmt.width))
   return -VAR_0;
 }

 VAR_10 = FUNC_8(VAR_2, VAR_3, VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_7 = FUNC_2(VAR_6, &VAR_9);
 VAR_6->vpu_dst_fmt = FUNC_1(VAR_7, VAR_9,
           VAR_5->pixelformat);
 VAR_6->dst_fmt = *VAR_5;
 if (FUNC_3(VAR_6))
  FUNC_4(VAR_6);


 VAR_6->src_fmt.colorspace = VAR_5->colorspace;
 VAR_6->src_fmt.ycbcr_enc = VAR_5->ycbcr_enc;
 VAR_6->src_fmt.xfer_func = VAR_5->xfer_func;
 VAR_6->src_fmt.quantization = VAR_5->quantization;

 FUNC_9(0, "CAPTURE codec mode: %d\n", VAR_6->vpu_dst_fmt->codec_mode);
 FUNC_9(0, "fmt - w: %d, h: %d\n",
    VAR_5->width, VAR_5->height);

 FUNC_5(VAR_6, VAR_5->pixelformat);

 return 0;
}
