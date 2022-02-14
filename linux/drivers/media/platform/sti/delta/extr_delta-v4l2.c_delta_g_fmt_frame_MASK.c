
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int sizeimage; int bytesperline; int field; int height; int width; int pixelformat; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int private_data; } ;
struct delta_streaminfo {int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct delta_frameinfo {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int size; int pixelformat; int aligned_width; int field; int aligned_height; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {int flags; int name; struct delta_streaminfo streaminfo; struct delta_frameinfo frameinfo; struct delta_dev* dev; } ;
typedef int str ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct delta_frameinfo*,unsigned char*,int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct delta_ctx* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct delta_ctx *VAR_5 = FUNC_3(VAR_2->private_data);
 struct delta_dev *VAR_6 = VAR_5->dev;
 struct v4l2_pix_format *VAR_7 = &VAR_4->fmt.pix;
 struct delta_frameinfo *VAR_8 = &VAR_5->frameinfo;
 struct delta_streaminfo *VAR_9 = &VAR_5->streaminfo;
 unsigned char VAR_10[100] = "";

 if (!(VAR_5->flags & VAR_0))
  FUNC_1(VAR_6->dev,
   "%s V4L2 GET_FMT (CAPTURE): no frame information available, default to %s\n",
   VAR_5->name,
   FUNC_0(VAR_8, VAR_10, sizeof(VAR_10)));

 VAR_7->pixelformat = VAR_8->pixelformat;
 VAR_7->width = VAR_8->aligned_width;
 VAR_7->height = VAR_8->aligned_height;
 VAR_7->field = VAR_8->field;
 VAR_7->bytesperline = FUNC_2(VAR_8->aligned_width,
            VAR_8->pixelformat);
 VAR_7->sizeimage = VAR_8->size;

 if (VAR_5->flags & VAR_1) {

  VAR_8->colorspace = VAR_9->colorspace;
  VAR_8->xfer_func = VAR_9->xfer_func;
  VAR_8->ycbcr_enc = VAR_9->ycbcr_enc;
  VAR_8->quantization = VAR_9->quantization;
 }
 VAR_7->colorspace = VAR_8->colorspace;
 VAR_7->xfer_func = VAR_8->xfer_func;
 VAR_7->ycbcr_enc = VAR_8->ycbcr_enc;
 VAR_7->quantization = VAR_8->quantization;

 return 0;
}
