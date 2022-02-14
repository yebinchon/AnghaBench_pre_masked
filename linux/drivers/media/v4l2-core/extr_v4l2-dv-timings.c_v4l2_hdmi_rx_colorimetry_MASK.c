
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_hdmi_colorimetry {void* xfer_func; void* ycbcr_enc; void* colorspace; void* quantization; void* member_3; int member_2; int member_1; void* member_0; } ;
struct hdmi_vendor_infoframe {scalar_t__ vic; } ;
struct hdmi_avi_infoframe {int video_code; int colorspace; int extended_colorimetry; int colorimetry; int quantization_range; } ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;

struct v4l2_hdmi_colorimetry
FUNC_0(const struct hdmi_avi_infoframe *VAR_17,
    const struct hdmi_vendor_infoframe *VAR_18,
    unsigned int VAR_19)
{
 struct v4l2_hdmi_colorimetry VAR_20 = {
  VAR_4,
  VAR_14,
  VAR_5,
  VAR_9
 };
 bool VAR_21 = VAR_17->video_code || (VAR_18 && VAR_18->vic);
 bool VAR_22 = VAR_19 <= 576;
 bool VAR_23 = VAR_17->video_code > 1;

 switch (VAR_17->colorspace) {
 case 137:

  switch (VAR_17->colorimetry) {
  case 141:
   switch (VAR_17->extended_colorimetry) {
   case 134:
    VAR_20.colorspace = VAR_1;
    VAR_20.xfer_func = VAR_8;
    break;
   case 136:
    VAR_20.colorspace = VAR_0;
    VAR_20.xfer_func = VAR_7;
    break;
   default:
    break;
   }
   break;
  default:
   break;
  }
  switch (VAR_17->quantization_range) {
  case 128:
   VAR_20.quantization = VAR_6;
   break;
  case 129:
   break;
  default:
   if (VAR_23)
    VAR_20.quantization = VAR_6;
   break;
  }
  break;

 default:

  VAR_20.quantization = VAR_6;
  switch (VAR_17->colorimetry) {
  case 138:
   if (!VAR_21)
    break;
   if (VAR_22) {
    VAR_20.colorspace = VAR_3;
    VAR_20.ycbcr_enc = VAR_10;
   } else {
    VAR_20.colorspace = VAR_2;
    VAR_20.ycbcr_enc = VAR_11;
   }
   VAR_20.xfer_func = VAR_7;
   break;
  case 140:
   VAR_20.colorspace = VAR_3;
   VAR_20.ycbcr_enc = VAR_10;
   VAR_20.xfer_func = VAR_7;
   break;
  case 139:
   VAR_20.colorspace = VAR_2;
   VAR_20.ycbcr_enc = VAR_11;
   VAR_20.xfer_func = VAR_7;
   break;
  case 141:
   switch (VAR_17->extended_colorimetry) {
   case 131:
    VAR_20.colorspace = VAR_2;
    VAR_20.ycbcr_enc = VAR_16;
    VAR_20.xfer_func = VAR_7;
    break;
   case 130:
    VAR_20.colorspace = VAR_2;
    VAR_20.ycbcr_enc = VAR_15;
    VAR_20.xfer_func = VAR_7;
    break;
   case 132:
    VAR_20.colorspace = VAR_4;
    VAR_20.ycbcr_enc = VAR_10;
    VAR_20.xfer_func = VAR_9;
    break;
   case 133:
    VAR_20.colorspace = VAR_1;
    VAR_20.ycbcr_enc = VAR_10;
    VAR_20.xfer_func = VAR_8;
    break;
   case 136:
    VAR_20.colorspace = VAR_0;
    VAR_20.ycbcr_enc = VAR_12;
    VAR_20.xfer_func = VAR_7;
    break;
   case 135:
    VAR_20.colorspace = VAR_0;
    VAR_20.ycbcr_enc = VAR_13;
    VAR_20.xfer_func = VAR_7;
    break;
   default:
    VAR_20.colorspace = VAR_2;
    VAR_20.ycbcr_enc = VAR_11;
    VAR_20.xfer_func = VAR_7;
    break;
   }
   break;
  default:
   break;
  }




  break;
 }
 return VAR_20;
}
