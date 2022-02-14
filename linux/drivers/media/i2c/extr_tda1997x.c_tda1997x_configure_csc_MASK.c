
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_hdmi_colorimetry {size_t quantization; int colorspace; } ;
struct TYPE_4__ {int height; } ;
struct TYPE_5__ {TYPE_1__ bt; } ;
struct hdmi_avi_infoframe {size_t colorspace; } ;
struct tda1997x_state {size_t vid_fmt; TYPE_3__* conv; int client; TYPE_2__ timings; struct v4l2_hdmi_colorimetry colorimetry; struct hdmi_avi_infoframe avi_infoframe; } ;
typedef int s16 ;
struct TYPE_6__ {int offout3; int offout2; int offout1; int p33coef; int p32coef; int p31coef; int p23coef; int p22coef; int p21coef; int p13coef; int p12coef; int p11coef; int offint3; int offint2; int offint1; int name; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;



 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 TYPE_3__* VAR_18 ;
 int VAR_19 ;
 int * VAR_20 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ) ;
 int FUNC_2 (struct v4l2_subdev*,scalar_t__,int ) ;
 struct tda1997x_state* FUNC_3 (struct v4l2_subdev*) ;
 int * VAR_21 ;
 int FUNC_4 (int,int ,int ,char*,int ,...) ;
 int * VAR_22 ;

__attribute__((used)) static void
FUNC_5(struct v4l2_subdev *VAR_23)
{
 struct tda1997x_state *VAR_24 = FUNC_3(VAR_23);
 struct hdmi_avi_infoframe *VAR_25 = &VAR_24->avi_infoframe;
 struct v4l2_hdmi_colorimetry *VAR_26 = &VAR_24->colorimetry;

 struct blanking_codes {
  s16 code_gy;
  s16 code_bu;
  s16 code_rv;
 };
 static const struct blanking_codes VAR_27 = { 64, 64, 64 };
 static const struct blanking_codes VAR_28 = { 64, 512, 512 };
 const struct blanking_codes *VAR_29 = ((void*)0);
 u8 VAR_30;

 FUNC_4(1, VAR_19, VAR_24->client, "input:%s quant:%s output:%s\n",
  VAR_20[VAR_25->colorspace],
  VAR_21[VAR_26->quantization],
  VAR_22[VAR_24->vid_fmt]);
 VAR_24->conv = ((void*)0);
 switch (VAR_24->vid_fmt) {

 case 128:
  VAR_29 = &VAR_27;
  if (VAR_26->colorspace == VAR_14) {
   if (VAR_26->quantization == VAR_16)
    VAR_24->conv = &VAR_18[VAR_11];
  } else {
   if (VAR_26->colorspace == VAR_12)
    VAR_24->conv = &VAR_18[VAR_1];
   else if (VAR_26->colorspace == VAR_13)
    VAR_24->conv = &VAR_18[VAR_0];
  }
  break;


 case 129:
 case 130:
  VAR_29 = &VAR_28;
  if ((VAR_26->colorspace == VAR_14) &&
      (VAR_26->quantization == VAR_15)) {
   if (VAR_24->timings.bt.height <= 576)
    VAR_24->conv = &VAR_18[VAR_7];
   else
    VAR_24->conv = &VAR_18[VAR_8];
  } else if ((VAR_26->colorspace == VAR_14) &&
      (VAR_26->quantization == VAR_16)) {
   if (VAR_24->timings.bt.height <= 576)
    VAR_24->conv = &VAR_18[VAR_9];
   else
    VAR_24->conv = &VAR_18[VAR_10];
  }
  break;
 }

 if (VAR_24->conv) {
  FUNC_4(1, VAR_19, VAR_24->client, "%s\n",
   VAR_24->conv->name);

  VAR_30 = FUNC_0(VAR_23, VAR_5);
  VAR_30 &= ~VAR_17;
  FUNC_1(VAR_23, VAR_5, VAR_30);

  FUNC_2(VAR_23, VAR_6 + 0, VAR_24->conv->offint1);
  FUNC_2(VAR_23, VAR_6 + 2, VAR_24->conv->offint2);
  FUNC_2(VAR_23, VAR_6 + 4, VAR_24->conv->offint3);

  FUNC_2(VAR_23, VAR_6 + 6, VAR_24->conv->p11coef);
  FUNC_2(VAR_23, VAR_6 + 8, VAR_24->conv->p12coef);
  FUNC_2(VAR_23, VAR_6 + 10, VAR_24->conv->p13coef);
  FUNC_2(VAR_23, VAR_6 + 12, VAR_24->conv->p21coef);
  FUNC_2(VAR_23, VAR_6 + 14, VAR_24->conv->p22coef);
  FUNC_2(VAR_23, VAR_6 + 16, VAR_24->conv->p23coef);
  FUNC_2(VAR_23, VAR_6 + 18, VAR_24->conv->p31coef);
  FUNC_2(VAR_23, VAR_6 + 20, VAR_24->conv->p32coef);
  FUNC_2(VAR_23, VAR_6 + 22, VAR_24->conv->p33coef);

  FUNC_2(VAR_23, VAR_6 + 24, VAR_24->conv->offout1);
  FUNC_2(VAR_23, VAR_6 + 26, VAR_24->conv->offout2);
  FUNC_2(VAR_23, VAR_6 + 28, VAR_24->conv->offout3);
 } else {

  VAR_30 = FUNC_0(VAR_23, VAR_5);
  VAR_30 |= VAR_17;
  FUNC_1(VAR_23, VAR_5, VAR_30);
 }


 if (VAR_29) {
  FUNC_2(VAR_23, VAR_3, VAR_29->code_gy);
  FUNC_2(VAR_23, VAR_2, VAR_29->code_bu);
  FUNC_2(VAR_23, VAR_4, VAR_29->code_rv);
 }
}
