
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; int field; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int pixelformat; } ;
struct v4l2_mbus_framefmt {int code; int width; int height; int field; int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct imx_media_pixfmt {scalar_t__ cs; int bpp; scalar_t__ planar; int fourcc; scalar_t__ ipufmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int*,int ,int ,int) ;
 struct imx_media_pixfmt* FUNC_1 (int,int ) ;
 struct imx_media_pixfmt* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct v4l2_pix_format *VAR_4,
      struct v4l2_mbus_framefmt *VAR_5,
      const struct imx_media_pixfmt *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 if (!VAR_6) {
  VAR_6 = FUNC_1(VAR_5->code, VAR_0);
  if (!VAR_6)
   VAR_6 = FUNC_2(VAR_5->code, VAR_0,
       1);
  if (!VAR_6)
   return -VAR_2;
 }





 if (VAR_6->ipufmt && VAR_6->cs == VAR_3) {
  u32 VAR_9;

  FUNC_0(&VAR_9, 0, VAR_1, 0);
  VAR_6 = FUNC_2(VAR_9, VAR_1, 0);
 }


 VAR_7 = FUNC_3(VAR_5->width, 8);


 if (VAR_6->planar)
  VAR_8 = FUNC_3(VAR_7, 16);
 else
  VAR_8 = FUNC_3((VAR_7 * VAR_6->bpp) >> 3, 8);

 VAR_4->width = VAR_7;
 VAR_4->height = VAR_5->height;
 VAR_4->pixelformat = VAR_6->fourcc;
 VAR_4->colorspace = VAR_5->colorspace;
 VAR_4->xfer_func = VAR_5->xfer_func;
 VAR_4->ycbcr_enc = VAR_5->ycbcr_enc;
 VAR_4->quantization = VAR_5->quantization;
 VAR_4->field = VAR_5->field;
 VAR_4->bytesperline = VAR_8;
 VAR_4->sizeimage = VAR_6->planar ? ((VAR_8 * VAR_4->height * VAR_6->bpp) >> 3) :
    VAR_8 * VAR_4->height;

 return 0;
}
