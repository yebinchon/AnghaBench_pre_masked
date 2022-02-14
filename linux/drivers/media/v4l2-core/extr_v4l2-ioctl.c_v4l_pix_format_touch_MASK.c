
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {scalar_t__ xfer_func; scalar_t__ quantization; scalar_t__ ycbcr_enc; scalar_t__ flags; int colorspace; int field; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct v4l2_pix_format *VAR_2)
{





 VAR_2->field = VAR_1;
 VAR_2->colorspace = VAR_0;
 VAR_2->flags = 0;
 VAR_2->ycbcr_enc = 0;
 VAR_2->quantization = 0;
 VAR_2->xfer_func = 0;
}
