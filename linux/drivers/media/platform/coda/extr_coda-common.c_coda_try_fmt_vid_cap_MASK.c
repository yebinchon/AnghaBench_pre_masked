
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_5__ {int width; int height; int bytesperline; int sizeimage; int pixelformat; int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct coda_q_data {int width; int height; int fourcc; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct coda_ctx {int dev; int quantization; int ycbcr_enc; int xfer_func; int colorspace; TYPE_1__ fh; } ;
struct coda_codec {scalar_t__ src_fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct coda_codec* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct coda_ctx*,struct coda_codec const*,struct v4l2_format*) ;
 int FUNC_2 (struct coda_ctx*,struct v4l2_format*,int*) ;
 int FUNC_3 (struct coda_ctx*,struct v4l2_format*) ;
 struct coda_ctx* FUNC_4 (void*) ;
 struct coda_q_data* FUNC_5 (struct coda_ctx*,int ) ;
 int FUNC_6 (int,int) ;
 struct vb2_queue* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_4, void *VAR_5,
    struct v4l2_format *VAR_6)
{
 struct coda_ctx *VAR_7 = FUNC_4(VAR_5);
 const struct coda_q_data *VAR_8;
 const struct coda_codec *VAR_9;
 struct vb2_queue *VAR_10;
 int VAR_11;
 bool VAR_12;

 VAR_11 = FUNC_3(VAR_7, VAR_6);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8 = FUNC_5(VAR_7, VAR_1);





 VAR_10 = FUNC_7(VAR_7->fh.m2m_ctx, VAR_1);
 if (FUNC_8(VAR_10)) {
  VAR_6->fmt.pix.width = VAR_8->width;
  VAR_6->fmt.pix.height = VAR_8->height;
 }

 VAR_6->fmt.pix.colorspace = VAR_7->colorspace;
 VAR_6->fmt.pix.xfer_func = VAR_7->xfer_func;
 VAR_6->fmt.pix.ycbcr_enc = VAR_7->ycbcr_enc;
 VAR_6->fmt.pix.quantization = VAR_7->quantization;

 VAR_8 = FUNC_5(VAR_7, VAR_1);
 VAR_9 = FUNC_0(VAR_7->dev, VAR_8->fourcc,
    VAR_6->fmt.pix.pixelformat);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_7, VAR_9, VAR_6);
 if (VAR_11 < 0)
  return VAR_11;


 if (VAR_9 && VAR_9->src_fourcc == VAR_2) {
  VAR_6->fmt.pix.height = FUNC_6(VAR_6->fmt.pix.height, 16);
  VAR_6->fmt.pix.bytesperline = FUNC_6(VAR_6->fmt.pix.width, 16);
  VAR_6->fmt.pix.sizeimage = VAR_6->fmt.pix.bytesperline *
           VAR_6->fmt.pix.height * 3 / 2;

  VAR_11 = FUNC_2(VAR_7, VAR_6, &VAR_12);
  if (VAR_11 < 0)
   return VAR_11;

  if (VAR_6->fmt.pix.pixelformat == VAR_3) {
   if (!VAR_12)
    return -VAR_0;

   VAR_6->fmt.pix.bytesperline = FUNC_6(VAR_6->fmt.pix.width, 16) * 2;
   VAR_6->fmt.pix.sizeimage = VAR_6->fmt.pix.bytesperline *
    VAR_6->fmt.pix.height;
  }
 }

 return 0;
}
