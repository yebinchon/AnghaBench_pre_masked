
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_3__ {int xfer_func; int quantization; int ycbcr_enc; int colorspace; int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; scalar_t__ which; TYPE_1__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int xfer_func; int quantization; int ycbcr_enc; int colorspace; int code; } ;
struct adv7511_state {int xfer_func; int quantization; int ycbcr_enc; int colorspace; int fmt_code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct adv7511_state*,TYPE_1__*) ;
 struct adv7511_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 struct v4l2_mbus_framefmt* FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2,
      struct v4l2_subdev_pad_config *VAR_3,
      struct v4l2_subdev_format *VAR_4)
{
 struct adv7511_state *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->pad != 0)
  return -VAR_0;

 FUNC_2(&VAR_4->format, 0, sizeof(VAR_4->format));
 FUNC_0(VAR_5, &VAR_4->format);

 if (VAR_4->which == VAR_1) {
  struct v4l2_mbus_framefmt *VAR_6;

  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4->pad);
  VAR_4->format.code = VAR_6->code;
  VAR_4->format.colorspace = VAR_6->colorspace;
  VAR_4->format.ycbcr_enc = VAR_6->ycbcr_enc;
  VAR_4->format.quantization = VAR_6->quantization;
  VAR_4->format.xfer_func = VAR_6->xfer_func;
 } else {
  VAR_4->format.code = VAR_5->fmt_code;
  VAR_4->format.colorspace = VAR_5->colorspace;
  VAR_4->format.ycbcr_enc = VAR_5->ycbcr_enc;
  VAR_4->format.quantization = VAR_5->quantization;
  VAR_4->format.xfer_func = VAR_5->xfer_func;
 }

 return 0;
}
