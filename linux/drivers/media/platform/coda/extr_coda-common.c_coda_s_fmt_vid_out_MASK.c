
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_6__ {int height; int width; int pixelformat; int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; int type; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct coda_ctx {scalar_t__ inst_type; TYPE_1__ fh; struct coda_codec const* codec; TYPE_4__* dev; int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct coda_codec {int dummy; } ;
typedef int f_cap ;
struct TYPE_8__ {int v4l2_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct coda_codec* FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_2 (struct coda_ctx*,struct v4l2_format*,int *) ;
 int FUNC_3 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_4 (struct file*,void*,struct v4l2_format*) ;
 struct coda_ctx* FUNC_5 (void*) ;
 int FUNC_6 (struct v4l2_format*,int ,int) ;
 int FUNC_7 (int *,char*) ;
 struct vb2_queue* FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_4, void *VAR_5,
         struct v4l2_format *VAR_6)
{
 struct coda_ctx *VAR_7 = FUNC_5(VAR_5);
 const struct coda_codec *VAR_8;
 struct v4l2_format VAR_9;
 struct vb2_queue *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_7, VAR_6, ((void*)0));
 if (VAR_11)
  return VAR_11;

 VAR_7->colorspace = VAR_6->fmt.pix.colorspace;
 VAR_7->xfer_func = VAR_6->fmt.pix.xfer_func;
 VAR_7->ycbcr_enc = VAR_6->fmt.pix.ycbcr_enc;
 VAR_7->quantization = VAR_6->fmt.pix.quantization;

 if (VAR_7->inst_type != VAR_0)
  return 0;


 VAR_8 = FUNC_0(VAR_7->dev, VAR_6->fmt.pix.pixelformat,
    VAR_3);
 if (!VAR_8) {
  FUNC_7(&VAR_7->dev->v4l2_dev, "failed to determine codec\n");
  return -VAR_1;
 }
 VAR_7->codec = VAR_8;

 VAR_10 = FUNC_8(VAR_7->fh.m2m_ctx, VAR_2);
 if (!VAR_10)
  return -VAR_1;







 if (FUNC_9(VAR_10))
  return 0;

 FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.type = VAR_2;
 FUNC_1(VAR_4, VAR_5, &VAR_9);
 VAR_9.fmt.pix.width = VAR_6->fmt.pix.width;
 VAR_9.fmt.pix.height = VAR_6->fmt.pix.height;

 return FUNC_3(VAR_4, VAR_5, &VAR_9);
}
