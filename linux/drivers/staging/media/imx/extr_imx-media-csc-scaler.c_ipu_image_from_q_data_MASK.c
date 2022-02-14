
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {scalar_t__ ycbcr_enc; scalar_t__ quantization; int colorspace; } ;
struct ipu_image {int rect; struct v4l2_pix_format pix; } ;
struct ipu_csc_scaler_q_data {int rect; struct v4l2_pix_format cur_fmt; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct ipu_image *VAR_2,
      struct ipu_csc_scaler_q_data *VAR_3)
{
 struct v4l2_pix_format *VAR_4 = &VAR_3->cur_fmt;

 VAR_2->pix = *VAR_4;
 if (VAR_4->ycbcr_enc == VAR_1)
  VAR_2->pix.ycbcr_enc = FUNC_0(VAR_4->colorspace);
 if (VAR_4->quantization == VAR_0)
  VAR_2->pix.ycbcr_enc = FUNC_0(VAR_4->colorspace);
 VAR_2->rect = VAR_3->rect;
}
