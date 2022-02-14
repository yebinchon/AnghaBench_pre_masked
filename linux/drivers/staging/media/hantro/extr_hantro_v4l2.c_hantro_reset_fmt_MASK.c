
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format_mplane {int xfer_func; int quantization; int ycbcr_enc; int colorspace; int field; int pixelformat; } ;
struct hantro_fmt {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_pix_format_mplane*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct v4l2_pix_format_mplane *VAR_5,
   const struct hantro_fmt *VAR_6)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->pixelformat = VAR_6->fourcc;
 VAR_5->field = VAR_1;
 VAR_5->colorspace = VAR_0,
 VAR_5->ycbcr_enc = VAR_4;
 VAR_5->quantization = VAR_2;
 VAR_5->xfer_func = VAR_3;
}
