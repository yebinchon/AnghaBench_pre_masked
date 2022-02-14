
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; int quantization; int xfer_func; int ycbcr_enc; int colorspace; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; int type; } ;
struct ipu_image {TYPE_1__ pix; } ;
struct ipu_csc_scaler_q_data {TYPE_1__ cur_fmt; } ;
struct ipu_csc_scaler_ctx {int rot_mode; } ;
struct file {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


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
 struct ipu_csc_scaler_ctx* FUNC_0 (void*) ;
 struct ipu_csc_scaler_q_data* FUNC_1 (struct ipu_csc_scaler_ctx*,int ) ;
 int FUNC_2 (struct ipu_image*,struct ipu_image*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_10, void *VAR_11,
      struct v4l2_format *VAR_12)
{
 struct ipu_csc_scaler_ctx *VAR_13 = FUNC_0(VAR_11);
 struct ipu_csc_scaler_q_data *VAR_14 = FUNC_1(VAR_13, VAR_12->type);
 struct ipu_image VAR_15, VAR_16;
 enum v4l2_field VAR_17;

 VAR_17 = VAR_12->fmt.pix.field;
 if (VAR_17 == VAR_5)
  VAR_17 = VAR_6;
 else if (VAR_17 != VAR_6)
  return -VAR_0;

 if (VAR_12->type == VAR_1) {
  struct ipu_csc_scaler_q_data *VAR_18 =
   FUNC_1(VAR_13, VAR_2);

  VAR_16.pix = VAR_12->fmt.pix;
  VAR_15.pix = VAR_18->cur_fmt;
 } else {
  struct ipu_csc_scaler_q_data *VAR_19 =
   FUNC_1(VAR_13, VAR_1);

  VAR_15.pix = VAR_12->fmt.pix;
  VAR_16.pix = VAR_19->cur_fmt;
 }

 FUNC_2(&VAR_15, &VAR_16, VAR_13->rot_mode);

 VAR_12->fmt.pix = (VAR_12->type == VAR_1) ?
  VAR_16.pix : VAR_15.pix;

 if (VAR_12->type == VAR_1) {
  VAR_12->fmt.pix.colorspace = VAR_14->cur_fmt.colorspace;
  VAR_12->fmt.pix.ycbcr_enc = VAR_14->cur_fmt.ycbcr_enc;
  VAR_12->fmt.pix.xfer_func = VAR_14->cur_fmt.xfer_func;
  VAR_12->fmt.pix.quantization = VAR_14->cur_fmt.quantization;
 } else if (VAR_12->fmt.pix.colorspace == VAR_3) {
  VAR_12->fmt.pix.colorspace = VAR_4;
  VAR_12->fmt.pix.ycbcr_enc = VAR_9;
  VAR_12->fmt.pix.xfer_func = VAR_8;
  VAR_12->fmt.pix.quantization = VAR_7;
 }

 return 0;
}
