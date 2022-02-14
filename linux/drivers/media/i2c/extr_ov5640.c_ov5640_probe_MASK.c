
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_mbus_framefmt {int width; int height; int field; int colorspace; int xfer_func; int quantization; int ycbcr_enc; int code; } ;
struct TYPE_11__ {int function; } ;
struct TYPE_10__ {int flags; TYPE_5__ entity; } ;
struct TYPE_9__ {int handler; } ;
struct TYPE_12__ {int flags; } ;
struct TYPE_8__ {int numerator; int denominator; } ;
struct ov5640_dev {size_t current_fr; int ae_target; int upside_down; scalar_t__ xclk_freq; TYPE_3__ sd; int lock; TYPE_2__ ctrls; TYPE_6__ pad; void* reset_gpio; void* pwdn_gpio; void* xclk; int ep; int * current_mode; int * last_mode; TYPE_1__ frame_interval; struct v4l2_mbus_framefmt fmt; struct i2c_client* i2c_client; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (void*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*,int) ;
 void* FUNC_8 (struct device*,char*) ;
 void* FUNC_9 (struct device*,char*,int ) ;
 struct ov5640_dev* FUNC_10 (struct device*,int,int ) ;
 struct fwnode_handle* FUNC_11 (int ,int *) ;
 int FUNC_12 (struct fwnode_handle*) ;
 int FUNC_13 (int ,char*,int*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*,int,TYPE_6__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct ov5640_dev*) ;
 int * VAR_16 ;
 int FUNC_19 (struct ov5640_dev*) ;
 int FUNC_20 (struct ov5640_dev*) ;
 int * VAR_17 ;
 int VAR_18 ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct fwnode_handle*,int *) ;
 int FUNC_24 (TYPE_3__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_25(struct i2c_client *VAR_19)
{
 struct device *VAR_20 = &VAR_19->dev;
 struct fwnode_handle *VAR_21;
 struct ov5640_dev *VAR_22;
 struct v4l2_mbus_framefmt *VAR_23;
 u32 VAR_24;
 int VAR_25;

 VAR_22 = FUNC_10(VAR_20, sizeof(*VAR_22), VAR_2);
 if (!VAR_22)
  return -VAR_1;

 VAR_22->i2c_client = VAR_19;





 VAR_23 = &VAR_22->fmt;
 VAR_23->code = VAR_4;
 VAR_23->colorspace = VAR_11;
 VAR_23->ycbcr_enc = FUNC_3(VAR_23->colorspace);
 VAR_23->quantization = VAR_13;
 VAR_23->xfer_func = FUNC_2(VAR_23->colorspace);
 VAR_23->width = 640;
 VAR_23->height = 480;
 VAR_23->field = VAR_12;
 VAR_22->frame_interval.numerator = 1;
 VAR_22->frame_interval.denominator = VAR_16[VAR_7];
 VAR_22->current_fr = VAR_7;
 VAR_22->current_mode =
  &VAR_17[VAR_8];
 VAR_22->last_mode = VAR_22->current_mode;

 VAR_22->ae_target = 52;


 VAR_25 = FUNC_13(FUNC_6(&VAR_19->dev), "rotation",
           &VAR_24);
 if (!VAR_25) {
  switch (VAR_24) {
  case 180:
   VAR_22->upside_down = 1;

  case 0:
   break;
  default:
   FUNC_7(VAR_20, "%u degrees rotation is not supported, ignoring...\n",
     VAR_24);
  }
 }

 VAR_21 = FUNC_11(FUNC_6(&VAR_19->dev),
        ((void*)0));
 if (!VAR_21) {
  FUNC_5(VAR_20, "endpoint node not found\n");
  return -VAR_0;
 }

 VAR_25 = FUNC_23(VAR_21, &VAR_22->ep);
 FUNC_12(VAR_21);
 if (VAR_25) {
  FUNC_5(VAR_20, "Could not parse endpoint\n");
  return VAR_25;
 }


 VAR_22->xclk = FUNC_8(VAR_20, "xclk");
 if (FUNC_0(VAR_22->xclk)) {
  FUNC_5(VAR_20, "failed to get xclk\n");
  return FUNC_1(VAR_22->xclk);
 }

 VAR_22->xclk_freq = FUNC_4(VAR_22->xclk);
 if (VAR_22->xclk_freq < VAR_10 ||
     VAR_22->xclk_freq > VAR_9) {
  FUNC_5(VAR_20, "xclk frequency out of range: %d Hz\n",
   VAR_22->xclk_freq);
  return -VAR_0;
 }


 VAR_22->pwdn_gpio = FUNC_9(VAR_20, "powerdown",
          VAR_3);
 if (FUNC_0(VAR_22->pwdn_gpio))
  return FUNC_1(VAR_22->pwdn_gpio);


 VAR_22->reset_gpio = FUNC_9(VAR_20, "reset",
           VAR_3);
 if (FUNC_0(VAR_22->reset_gpio))
  return FUNC_1(VAR_22->reset_gpio);

 FUNC_24(&VAR_22->sd, VAR_19, &VAR_18);

 VAR_22->sd.flags |= VAR_14 |
       VAR_15;
 VAR_22->pad.flags = VAR_6;
 VAR_22->sd.entity.function = VAR_5;
 VAR_25 = FUNC_15(&VAR_22->sd.entity, 1, &VAR_22->pad);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_19(VAR_22);
 if (VAR_25)
  return VAR_25;

 FUNC_17(&VAR_22->lock);

 VAR_25 = FUNC_18(VAR_22);
 if (VAR_25)
  goto entity_cleanup;

 VAR_25 = FUNC_20(VAR_22);
 if (VAR_25)
  goto entity_cleanup;

 VAR_25 = FUNC_21(&VAR_22->sd);
 if (VAR_25)
  goto free_ctrls;

 return 0;

free_ctrls:
 FUNC_22(&VAR_22->ctrls.handler);
entity_cleanup:
 FUNC_16(&VAR_22->lock);
 FUNC_14(&VAR_22->sd.entity);
 return VAR_25;
}
