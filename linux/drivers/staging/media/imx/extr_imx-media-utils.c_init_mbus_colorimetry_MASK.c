
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int ycbcr_enc; int colorspace; int quantization; int xfer_func; } ;
struct imx_media_pixfmt {scalar_t__ cs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct v4l2_mbus_framefmt *VAR_3,
      const struct imx_media_pixfmt *VAR_4)
{
 VAR_3->colorspace = (VAR_4->cs == VAR_0) ?
  VAR_2 : VAR_1;
 VAR_3->xfer_func = FUNC_1(VAR_3->colorspace);
 VAR_3->ycbcr_enc = FUNC_2(VAR_3->colorspace);
 VAR_3->quantization =
  FUNC_0(VAR_4->cs == VAR_0,
           VAR_3->colorspace,
           VAR_3->ycbcr_enc);
}
