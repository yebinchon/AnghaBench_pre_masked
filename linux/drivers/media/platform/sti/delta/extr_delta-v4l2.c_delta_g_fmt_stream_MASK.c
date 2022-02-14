
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int sizeimage; scalar_t__ bytesperline; int field; int height; int width; int pixelformat; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int private_data; } ;
struct delta_streaminfo {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int field; int height; int width; int streamformat; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {int flags; int max_au_size; int name; struct delta_streaminfo streaminfo; struct delta_dev* dev; } ;
typedef int str ;


 int VAR_0 ;
 int FUNC_0 (struct delta_streaminfo*,unsigned char*,int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 struct delta_ctx* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
         struct v4l2_format *VAR_3)
{
 struct delta_ctx *VAR_4 = FUNC_2(VAR_1->private_data);
 struct delta_dev *VAR_5 = VAR_4->dev;
 struct v4l2_pix_format *VAR_6 = &VAR_3->fmt.pix;
 struct delta_streaminfo *VAR_7 = &VAR_4->streaminfo;
 unsigned char VAR_8[100] = "";

 if (!(VAR_4->flags & VAR_0))
  FUNC_1(VAR_5->dev,
   "%s V4L2 GET_FMT (OUTPUT): no stream information available, default to %s\n",
   VAR_4->name,
   FUNC_0(VAR_7, VAR_8, sizeof(VAR_8)));

 VAR_6->pixelformat = VAR_7->streamformat;
 VAR_6->width = VAR_7->width;
 VAR_6->height = VAR_7->height;
 VAR_6->field = VAR_7->field;
 VAR_6->bytesperline = 0;
 VAR_6->sizeimage = VAR_4->max_au_size;
 VAR_6->colorspace = VAR_7->colorspace;
 VAR_6->xfer_func = VAR_7->xfer_func;
 VAR_6->ycbcr_enc = VAR_7->ycbcr_enc;
 VAR_6->quantization = VAR_7->quantization;

 return 0;
}
