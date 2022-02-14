
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_pix_format {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int field; int sizeimage; scalar_t__ pixelformat; int width; int bytesperline; int height; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct file {int private_data; } ;
struct delta_frameinfo {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int field; int size; int aligned_height; int aligned_width; scalar_t__ pixelformat; int height; int width; } ;
struct delta_dev {int dev; } ;
struct delta_dec {int dummy; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct delta_ctx {scalar_t__ state; int name; struct delta_frameinfo frameinfo; int flags; TYPE_2__ fh; struct delta_dec* dec; struct delta_dev* dev; } ;
typedef int str ;
typedef int frameinfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct delta_dec const*,int ,struct delta_ctx*,struct delta_frameinfo*) ;
 char* FUNC_1 (struct delta_frameinfo*,unsigned char*,int) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (struct delta_frameinfo*,int ,int) ;
 int VAR_4 ;
 struct delta_ctx* FUNC_6 (int ) ;
 struct vb2_queue* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_5, void *VAR_6, struct v4l2_format *VAR_7)
{
 struct delta_ctx *VAR_8 = FUNC_6(VAR_5->private_data);
 struct delta_dev *VAR_9 = VAR_8->dev;
 const struct delta_dec *VAR_10 = VAR_8->dec;
 struct v4l2_pix_format *VAR_11 = &VAR_7->fmt.pix;
 struct delta_frameinfo VAR_12;
 unsigned char VAR_13[100] = "";
 struct vb2_queue *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_7(VAR_8->fh.m2m_ctx, VAR_7->type);
 if (FUNC_8(VAR_14)) {
  FUNC_3(VAR_9->dev, "%s V4L2 S_FMT (CAPTURE): queue busy\n",
   VAR_8->name);
  return -VAR_2;
 }

 if (VAR_8->state < VAR_1) {






  VAR_15 = FUNC_2(VAR_5, VAR_6, VAR_7);
  if (VAR_15) {
   FUNC_3(VAR_9->dev,
    "%s V4L2 S_FMT (CAPTURE): unsupported format %4.4s\n",
    VAR_8->name, (char *)&VAR_11->pixelformat);
   return VAR_15;
  }

  return 0;
 }


 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.pixelformat = VAR_11->pixelformat;
 VAR_12.width = VAR_11->width;
 VAR_12.height = VAR_11->height;
 VAR_12.aligned_width = VAR_11->width;
 VAR_12.aligned_height = VAR_11->height;
 VAR_12.size = VAR_11->sizeimage;
 VAR_12.field = VAR_11->field;
 VAR_12.colorspace = VAR_11->colorspace;
 VAR_12.xfer_func = VAR_11->xfer_func;
 VAR_12.ycbcr_enc = VAR_11->ycbcr_enc;
 VAR_12.quantization = VAR_11->quantization;
 VAR_15 = FUNC_0(VAR_10, VAR_4, VAR_8, &VAR_12);
 if (VAR_15)
  return VAR_15;


 VAR_15 = FUNC_0(VAR_10, VAR_3, VAR_8, &VAR_12);
 if (VAR_15)
  return VAR_15;

 VAR_8->flags |= VAR_0;
 VAR_8->frameinfo = VAR_12;
 FUNC_3(VAR_9->dev,
  "%s V4L2 SET_FMT (CAPTURE): frameinfo updated to %s\n",
  VAR_8->name,
  FUNC_1(&VAR_12, VAR_13, sizeof(VAR_13)));

 VAR_11->pixelformat = VAR_12.pixelformat;
 VAR_11->width = VAR_12.aligned_width;
 VAR_11->height = VAR_12.aligned_height;
 VAR_11->bytesperline = FUNC_4(VAR_11->width, VAR_11->pixelformat);
 VAR_11->sizeimage = VAR_12.size;
 VAR_11->field = VAR_12.field;
 VAR_11->colorspace = VAR_12.colorspace;
 VAR_11->xfer_func = VAR_12.xfer_func;
 VAR_11->ycbcr_enc = VAR_12.ycbcr_enc;
 VAR_11->quantization = VAR_12.quantization;

 return 0;
}
