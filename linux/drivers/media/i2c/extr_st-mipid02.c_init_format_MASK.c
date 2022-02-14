
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int width; int height; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int field; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct v4l2_mbus_framefmt *VAR_4)
{
 VAR_4->code = VAR_0;
 VAR_4->field = VAR_2;
 VAR_4->colorspace = VAR_1;
 VAR_4->ycbcr_enc = FUNC_1(VAR_1);
 VAR_4->quantization = VAR_3;
 VAR_4->xfer_func = FUNC_0(VAR_1);
 VAR_4->width = 640;
 VAR_4->height = 480;
}
