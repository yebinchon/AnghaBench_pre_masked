
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ width; scalar_t__ height; scalar_t__ pixelformat; scalar_t__ field; scalar_t__ colorspace; scalar_t__ ycbcr_enc; scalar_t__ quantization; scalar_t__ xfer_func; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_2__ fmt; } ;



__attribute__((used)) static int
FUNC_0(const struct v4l2_format *VAR_0, const struct v4l2_format *VAR_1)
{
 return VAR_0->type == VAR_1->type &&
  VAR_0->fmt.pix.width == VAR_1->fmt.pix.width &&
  VAR_0->fmt.pix.height == VAR_1->fmt.pix.height &&
  VAR_0->fmt.pix.pixelformat == VAR_1->fmt.pix.pixelformat &&
  VAR_0->fmt.pix.field == VAR_1->fmt.pix.field &&
  VAR_0->fmt.pix.colorspace == VAR_1->fmt.pix.colorspace &&
  VAR_0->fmt.pix.ycbcr_enc == VAR_1->fmt.pix.ycbcr_enc &&
  VAR_0->fmt.pix.quantization == VAR_1->fmt.pix.quantization &&
  VAR_0->fmt.pix.xfer_func == VAR_1->fmt.pix.xfer_func;
}
