
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev_format {int format; int which; int member_0; } ;
struct v4l2_pix_format {int pixelformat; scalar_t__ width; scalar_t__ height; scalar_t__ bytesperline; int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cobalt_stream {int pixfmt; scalar_t__ width; scalar_t__ height; scalar_t__ stride; int sd; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int bpp; int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 scalar_t__ FUNC_0 (struct file*,void*,struct v4l2_format*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,struct v4l2_pix_format*,int ) ;
 int FUNC_2 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct cobalt_stream* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_9, void *VAR_10,
  struct v4l2_format *VAR_11)
{
 struct cobalt_stream *VAR_12 = FUNC_4(VAR_9);
 struct v4l2_pix_format *VAR_13 = &VAR_11->fmt.pix;
 struct v4l2_subdev_format VAR_14 = { 0 };
 u32 VAR_15;

 if (FUNC_0(VAR_9, VAR_10, VAR_11))
  return -VAR_3;

 if (FUNC_3(&VAR_12->q) && (VAR_13->pixelformat != VAR_12->pixfmt ||
     VAR_13->width != VAR_12->width || VAR_13->height != VAR_12->height ||
     VAR_13->bytesperline != VAR_12->stride))
  return -VAR_2;

 switch (VAR_13->pixelformat) {
 case 128:
  VAR_12->bpp = VAR_1;
  VAR_15 = VAR_5;
  break;
 case 129:
  VAR_12->bpp = VAR_0;
  VAR_15 = VAR_4;
  break;
 default:
  return -VAR_3;
 }
 VAR_12->width = VAR_13->width;
 VAR_12->height = VAR_13->height;
 VAR_12->stride = VAR_13->bytesperline;
 VAR_12->pixfmt = VAR_13->pixelformat;
 VAR_12->colorspace = VAR_13->colorspace;
 VAR_12->xfer_func = VAR_13->xfer_func;
 VAR_12->ycbcr_enc = VAR_13->ycbcr_enc;
 VAR_12->quantization = VAR_13->quantization;
 VAR_14.which = VAR_6;
 FUNC_1(&VAR_14.format, VAR_13, VAR_15);
 FUNC_2(VAR_12->sd, VAR_7, VAR_8, ((void*)0), &VAR_14);
 return 0;
}
