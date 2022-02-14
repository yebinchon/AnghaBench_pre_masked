
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_pix_format {int quantization; int ycbcr_enc; int xfer_func; int colorspace; scalar_t__ pixelformat; int height; int width; int sizeimage; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct file {int private_data; } ;
struct delta_dev {int dev; } ;
struct TYPE_6__ {int quantization; int ycbcr_enc; int xfer_func; int colorspace; scalar_t__ streamformat; int height; int width; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct delta_ctx {int flags; TYPE_3__ streaminfo; int max_au_size; int name; TYPE_2__ fh; struct delta_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_1 (int ,char*,int ,...) ;
 struct delta_ctx* FUNC_2 (int ) ;
 struct vb2_queue* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3,
         struct v4l2_format *VAR_4)
{
 struct delta_ctx *VAR_5 = FUNC_2(VAR_2->private_data);
 struct delta_dev *VAR_6 = VAR_5->dev;
 struct vb2_queue *VAR_7;
 struct v4l2_pix_format *VAR_8 = &VAR_4->fmt.pix;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_9) {
  FUNC_1(VAR_6->dev,
   "%s V4L2 S_FMT (OUTPUT): unsupported format %4.4s\n",
   VAR_5->name, (char *)&VAR_8->pixelformat);
  return VAR_9;
 }

 VAR_7 = FUNC_3(VAR_5->fh.m2m_ctx, VAR_4->type);
 if (FUNC_4(VAR_7)) {
  FUNC_1(VAR_6->dev, "%s V4L2 S_FMT (OUTPUT): queue busy\n",
   VAR_5->name);
  return -VAR_1;
 }

 VAR_5->max_au_size = VAR_8->sizeimage;
 VAR_5->streaminfo.width = VAR_8->width;
 VAR_5->streaminfo.height = VAR_8->height;
 VAR_5->streaminfo.streamformat = VAR_8->pixelformat;
 VAR_5->streaminfo.colorspace = VAR_8->colorspace;
 VAR_5->streaminfo.xfer_func = VAR_8->xfer_func;
 VAR_5->streaminfo.ycbcr_enc = VAR_8->ycbcr_enc;
 VAR_5->streaminfo.quantization = VAR_8->quantization;
 VAR_5->flags |= VAR_0;

 return 0;
}
