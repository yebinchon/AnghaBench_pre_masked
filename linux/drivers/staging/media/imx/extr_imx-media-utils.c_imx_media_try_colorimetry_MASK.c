
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int colorspace; scalar_t__ xfer_func; int ycbcr_enc; int quantization; int code; } ;
struct imx_media_pixfmt {scalar_t__ cs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct imx_media_pixfmt* FUNC_3 (int ,int ) ;
 struct imx_media_pixfmt* FUNC_4 (int ,int ,int) ;

void FUNC_5(struct v4l2_mbus_framefmt *VAR_7,
          bool VAR_8)
{
 const struct imx_media_pixfmt *VAR_9;
 bool VAR_10 = 0;

 VAR_9 = FUNC_4(VAR_7->code, VAR_0, 1);
 if (!VAR_9)
  VAR_9 = FUNC_3(VAR_7->code, VAR_0);
 if (VAR_9 && VAR_9->cs == VAR_1)
  VAR_10 = 1;

 switch (VAR_7->colorspace) {
 case 129:
 case 130:
 case 133:
 case 128:
 case 135:
 case 132:
 case 134:
 case 131:
  break;
 default:
  VAR_7->colorspace = 128;
  break;
 }

 if (VAR_7->xfer_func == VAR_3)
  VAR_7->xfer_func =
   FUNC_1(VAR_7->colorspace);

 if (VAR_8) {
  if (VAR_7->ycbcr_enc != VAR_4 &&
      VAR_7->ycbcr_enc != VAR_5)
   VAR_7->ycbcr_enc = VAR_4;
 } else {
  if (VAR_7->ycbcr_enc == VAR_6) {
   VAR_7->ycbcr_enc =
    FUNC_2(VAR_7->colorspace);
  }
 }

 if (VAR_7->quantization == VAR_2)
  VAR_7->quantization =
   FUNC_0(VAR_10,
            VAR_7->colorspace,
            VAR_7->ycbcr_enc);
}
