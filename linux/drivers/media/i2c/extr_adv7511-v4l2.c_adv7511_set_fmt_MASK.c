
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int code; int colorspace; int quantization; int ycbcr_enc; int xfer_func; } ;
struct v4l2_subdev_format {scalar_t__ pad; scalar_t__ which; TYPE_1__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; int colorspace; int quantization; int xfer_func; int ycbcr_enc; } ;
struct adv7511_state {scalar_t__ content_type; int fmt_code; int colorspace; int quantization; int rgb_quantization_range_ctrl; int xfer_func; int ycbcr_enc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;


 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct adv7511_state*,TYPE_1__*) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int,int,int) ;
 struct adv7511_state* FUNC_3 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_23,
      struct v4l2_subdev_pad_config *VAR_24,
      struct v4l2_subdev_format *VAR_25)
{
 struct adv7511_state *VAR_26 = FUNC_3(VAR_23);
 u8 VAR_27 = VAR_4;
 u8 VAR_28 = VAR_10;
 u8 VAR_29 = VAR_5;
 u8 VAR_30 = VAR_12;
 u8 VAR_31 = VAR_16;
 u8 VAR_32 = VAR_26->content_type != VAR_18;
 u8 VAR_33 = VAR_32 ? VAR_26->content_type : VAR_17;

 if (VAR_25->pad != 0)
  return -VAR_0;
 switch (VAR_25->format.code) {
 case 136:
 case 135:
 case 137:
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_26, &VAR_25->format);
 if (VAR_25->which == VAR_19) {
  struct v4l2_mbus_framefmt *VAR_34;

  VAR_34 = FUNC_4(VAR_23, VAR_24, VAR_25->pad);
  VAR_34->code = VAR_25->format.code;
  VAR_34->colorspace = VAR_25->format.colorspace;
  VAR_34->ycbcr_enc = VAR_25->format.ycbcr_enc;
  VAR_34->quantization = VAR_25->format.quantization;
  VAR_34->xfer_func = VAR_25->format.xfer_func;
  return 0;
 }

 switch (VAR_25->format.code) {
 case 136:
  FUNC_2(VAR_23, 0x15, 0xf0, 0x01);
  FUNC_2(VAR_23, 0x16, 0x03, 0xb8);
  VAR_29 = VAR_6;
  break;
 case 135:
  FUNC_2(VAR_23, 0x15, 0xf0, 0x01);
  FUNC_2(VAR_23, 0x16, 0x03, 0xbc);
  VAR_29 = VAR_6;
  break;
 case 137:
 default:
  FUNC_2(VAR_23, 0x15, 0xf0, 0x00);
  FUNC_2(VAR_23, 0x16, 0x03, 0x00);
  break;
 }
 VAR_26->fmt_code = VAR_25->format.code;
 VAR_26->colorspace = VAR_25->format.colorspace;
 VAR_26->ycbcr_enc = VAR_25->format.ycbcr_enc;
 VAR_26->quantization = VAR_25->format.quantization;
 VAR_26->xfer_func = VAR_25->format.xfer_func;

 switch (VAR_25->format.colorspace) {
 case 133:
  VAR_27 = VAR_1;
  VAR_28 = VAR_29 ? VAR_8 :
    VAR_7;
  break;
 case 131:
  VAR_27 = VAR_29 ? VAR_2 : VAR_4;
  if (VAR_29 && VAR_25->format.ycbcr_enc == VAR_21) {
   VAR_27 = VAR_1;
   VAR_28 = VAR_10;
  }
  break;
 case 132:
  VAR_27 = VAR_29 ? VAR_3 : VAR_4;
  if (VAR_29 && VAR_25->format.ycbcr_enc == VAR_22) {
   VAR_27 = VAR_1;
   VAR_28 = VAR_11;
  }
  break;
 case 130:
  VAR_27 = VAR_29 ? VAR_1 : VAR_4;
  VAR_28 = VAR_29 ? VAR_9 :
    VAR_10;
  break;
 case 134:
  VAR_27 = VAR_1;
  if (VAR_29 && VAR_25->format.ycbcr_enc == VAR_20)
   VAR_28 = 5;
  else
   VAR_28 = 6;
  break;
 default:
  break;
 }
 switch (VAR_25->format.quantization) {
 case 129:
  VAR_30 = VAR_29 ? VAR_12 :
   VAR_13;
  VAR_31 = VAR_30 ? VAR_30 - 1 : VAR_15;
  break;
 case 128:
  VAR_30 = VAR_29 ? VAR_12 :
   VAR_14;
  VAR_31 = VAR_30 ? VAR_30 - 1 : VAR_16;
  break;
 }

 FUNC_2(VAR_23, 0x4a, 0xbf, 0);
 FUNC_2(VAR_23, 0x55, 0x9f, VAR_29 << 5);
 FUNC_2(VAR_23, 0x56, 0x3f, VAR_27 << 6);
 FUNC_2(VAR_23, 0x57, 0x83, (VAR_28 << 4) | (VAR_30 << 2) | (VAR_32 << 7));
 FUNC_2(VAR_23, 0x59, 0x0f, (VAR_31 << 6) | (VAR_33 << 4));
 FUNC_2(VAR_23, 0x4a, 0xff, 1);
 FUNC_1(VAR_23, VAR_26->rgb_quantization_range_ctrl);

 return 0;
}
