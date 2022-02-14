
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int colorspace; int ycbcr_enc; int quantization; int height; int width; int xfer_func; int field; int num_planes; int pixelformat; } ;
struct TYPE_2__ {int colorspace; int ycbcr_enc; int quantization; scalar_t__ field; int height; int width; int xfer_func; } ;
struct fdp1_q_data {TYPE_1__ format; } ;
struct fdp1_fmt {int num_planes; int fourcc; } ;
struct fdp1_ctx {struct fdp1_q_data out_q; } ;
typedef enum v4l2_ycbcr_encoding { ____Placeholder_v4l2_ycbcr_encoding } v4l2_ycbcr_encoding ;
typedef enum v4l2_quantization { ____Placeholder_v4l2_quantization } v4l2_quantization ;
typedef enum v4l2_colorspace { ____Placeholder_v4l2_colorspace } v4l2_colorspace ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct v4l2_pix_format_mplane*,struct fdp1_fmt const*) ;
 struct fdp1_fmt* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct fdp1_fmt const*) ;

__attribute__((used)) static void FUNC_5(struct fdp1_ctx *VAR_8,
     const struct fdp1_fmt **VAR_9,
     struct v4l2_pix_format_mplane *VAR_10)
{
 struct fdp1_q_data *VAR_11 = &VAR_8->out_q;
 enum v4l2_colorspace VAR_12;
 enum v4l2_ycbcr_encoding VAR_13;
 enum v4l2_quantization VAR_14;
 const struct fdp1_fmt *VAR_15;
 bool VAR_16;
 VAR_12 = VAR_11->format.colorspace;

 VAR_13 = VAR_11->format.ycbcr_enc;
 if (VAR_13 == VAR_7)
  VAR_13 = FUNC_1(VAR_12);

 VAR_14 = VAR_11->format.quantization;
 if (VAR_14 == VAR_3)
  VAR_14 = FUNC_0(0, VAR_12,
            VAR_13);

 VAR_16 = VAR_13 == VAR_5 ||
      (VAR_13 == VAR_6 &&
       VAR_14 == VAR_4);

 VAR_15 = FUNC_3(VAR_10->pixelformat);
 if (!VAR_15 || (!VAR_16 && FUNC_4(VAR_15)))
  VAR_15 = FUNC_3(VAR_2);

 if (VAR_9)
  *VAR_9 = VAR_15;

 VAR_10->pixelformat = VAR_15->fourcc;
 VAR_10->num_planes = VAR_15->num_planes;
 VAR_10->field = VAR_1;







 VAR_10->colorspace = VAR_11->format.colorspace;
 VAR_10->xfer_func = VAR_11->format.xfer_func;

 if (FUNC_4(VAR_15)) {
  VAR_10->ycbcr_enc = VAR_7;
  VAR_10->quantization = VAR_3;
 } else {
  VAR_10->ycbcr_enc = VAR_11->format.ycbcr_enc;
  VAR_10->quantization = VAR_11->format.quantization;
 }






 VAR_10->width = VAR_11->format.width;
 if (VAR_11->format.field == VAR_0)
  VAR_10->height = 2 * VAR_11->format.height;
 else
  VAR_10->height = VAR_11->format.height;

 FUNC_2(VAR_10, VAR_15);
}
