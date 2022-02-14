
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_16__ {int function; } ;
struct v4l2_subdev {int flags; TYPE_10__ entity; TYPE_2__* ctrl_handler; int * internal_ops; } ;
struct v4l2_fract {int numerator; int denominator; } ;
struct TYPE_19__ {int error; } ;
struct TYPE_17__ {int flags; } ;
struct ov7670_info {int clock_speed; int pll_bypass; int pclk_hb_disable; TYPE_2__ hdl; struct v4l2_subdev sd; TYPE_11__ pad; void* saturation; void* auto_exposure; void* auto_gain; void* exposure; void* gain; void* hue; TYPE_9__* devtype; scalar_t__ clkrc; int format; int * wsize; int * fmt; int * clk; int use_smbus; int min_height; int min_width; } ;
struct ov7670_config {int clock_speed; scalar_t__ pclk_hb_disable; scalar_t__ pll_bypass; int use_smbus; int min_height; int min_width; } ;
struct i2c_device_id {size_t driver_data; } ;
struct TYPE_20__ {struct ov7670_config* platform_data; } ;
struct i2c_client {int addr; TYPE_1__* adapter; TYPE_8__ dev; } ;
struct TYPE_21__ {int (* set_framerate ) (struct v4l2_subdev*,struct v4l2_fract*) ;int * win_sizes; } ;
struct TYPE_18__ {int name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int *) ;
 int VAR_21 ;
 scalar_t__ FUNC_4 (TYPE_8__*) ;
 int * FUNC_5 (TYPE_8__*,char*) ;
 struct ov7670_info* FUNC_6 (TYPE_8__*,int,int ) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (TYPE_10__*,int,TYPE_11__*) ;
 int VAR_22 ;
 int FUNC_9 (struct v4l2_subdev*) ;
 TYPE_9__* VAR_23 ;
 int * VAR_24 ;
 int FUNC_10 (struct v4l2_subdev*,int *) ;
 int FUNC_11 (struct i2c_client*,struct ov7670_info*) ;
 int VAR_25 ;
 int FUNC_12 (TYPE_8__*,struct ov7670_info*) ;
 int FUNC_13 (struct v4l2_subdev*) ;
 int FUNC_14 (struct v4l2_subdev*) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_15 (struct v4l2_subdev*,struct v4l2_fract*) ;
 int FUNC_16 (struct v4l2_subdev*) ;
 int FUNC_17 (int,void**,int ,int) ;
 int FUNC_18 (int,void**) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*,int) ;
 int FUNC_21 (TYPE_2__*) ;
 void* FUNC_22 (TYPE_2__*,int *,int ,int,int,int,int) ;
 void* FUNC_23 (TYPE_2__*,int *,int ,int ,int ,int ) ;
 int FUNC_24 (TYPE_2__*,int *,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_25 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_26 (int,int ,struct i2c_client*,char*,int,int ) ;
 int FUNC_27 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_28(struct i2c_client *VAR_28,
   const struct i2c_device_id *VAR_29)
{
 struct v4l2_fract VAR_30;
 struct v4l2_subdev *VAR_31;
 struct ov7670_info *VAR_32;
 int VAR_33;

 VAR_32 = FUNC_6(&VAR_28->dev, sizeof(*VAR_32), VAR_3);
 if (VAR_32 == ((void*)0))
  return -VAR_2;
 VAR_31 = &VAR_32->sd;
 FUNC_25(VAR_31, VAR_28, &VAR_25);






 VAR_32->clock_speed = 30;

 if (FUNC_4(&VAR_28->dev)) {
  VAR_33 = FUNC_12(&VAR_28->dev, VAR_32);
  if (VAR_33)
   return VAR_33;

 } else if (VAR_28->dev.platform_data) {
  struct ov7670_config *VAR_34 = VAR_28->dev.platform_data;





  VAR_32->min_width = VAR_34->min_width;
  VAR_32->min_height = VAR_34->min_height;
  VAR_32->use_smbus = VAR_34->use_smbus;

  if (VAR_34->clock_speed)
   VAR_32->clock_speed = VAR_34->clock_speed;

  if (VAR_34->pll_bypass)
   VAR_32->pll_bypass = 1;

  if (VAR_34->pclk_hb_disable)
   VAR_32->pclk_hb_disable = 1;
 }

 VAR_32->clk = FUNC_5(&VAR_28->dev, "xclk");
 if (FUNC_1(VAR_32->clk)) {
  VAR_33 = FUNC_2(VAR_32->clk);
  if (VAR_33 == -VAR_1)
   VAR_32->clk = ((void*)0);
  else
   return VAR_33;
 }

 VAR_33 = FUNC_11(VAR_28, VAR_32);
 if (VAR_33)
  return VAR_33;

 FUNC_14(VAR_31);

 if (VAR_32->clk) {
  VAR_32->clock_speed = FUNC_3(VAR_32->clk) / 1000000;
  if (VAR_32->clock_speed < 10 || VAR_32->clock_speed > 48) {
   VAR_33 = -VAR_0;
   goto power_off;
  }
 }


 VAR_33 = FUNC_9(VAR_31);
 if (VAR_33) {
  FUNC_26(1, VAR_21, VAR_28,
   "chip found @ 0x%x (%s) is not an ov7670 chip.\n",
   VAR_28->addr << 1, VAR_28->adapter->name);
  goto power_off;
 }
 FUNC_27(VAR_28, "chip found @ 0x%02x (%s)\n",
   VAR_28->addr << 1, VAR_28->adapter->name);

 VAR_32->devtype = &VAR_23[VAR_29->driver_data];
 VAR_32->fmt = &VAR_24[0];
 VAR_32->wsize = &VAR_32->devtype->win_sizes[0];

 FUNC_10(VAR_31, &VAR_32->format);

 VAR_32->clkrc = 0;


 VAR_30.numerator = 1;
 VAR_30.denominator = 30;
 VAR_32->devtype->set_framerate(VAR_31, &VAR_30);

 FUNC_20(&VAR_32->hdl, 10);
 FUNC_22(&VAR_32->hdl, &VAR_22,
   VAR_7, 0, 255, 1, 128);
 FUNC_22(&VAR_32->hdl, &VAR_22,
   VAR_8, 0, 127, 1, 64);
 FUNC_22(&VAR_32->hdl, &VAR_22,
   VAR_16, 0, 1, 1, 0);
 FUNC_22(&VAR_32->hdl, &VAR_22,
   VAR_12, 0, 1, 1, 0);
 VAR_32->saturation = FUNC_22(&VAR_32->hdl, &VAR_22,
   VAR_14, 0, 256, 1, 128);
 VAR_32->hue = FUNC_22(&VAR_32->hdl, &VAR_22,
   VAR_13, -180, 180, 5, 0);
 VAR_32->gain = FUNC_22(&VAR_32->hdl, &VAR_22,
   VAR_11, 0, 255, 1, 128);
 VAR_32->auto_gain = FUNC_22(&VAR_32->hdl, &VAR_22,
   VAR_6, 0, 1, 1, 1);
 VAR_32->exposure = FUNC_22(&VAR_32->hdl, &VAR_22,
   VAR_9, 0, 65535, 1, 500);
 VAR_32->auto_exposure = FUNC_23(&VAR_32->hdl, &VAR_22,
   VAR_10, VAR_18, 0,
   VAR_17);
 FUNC_24(&VAR_32->hdl, &VAR_22,
   VAR_15,
   FUNC_0(VAR_27) - 1, 0, 0,
   VAR_27);
 VAR_31->ctrl_handler = &VAR_32->hdl;
 if (VAR_32->hdl.error) {
  VAR_33 = VAR_32->hdl.error;

  goto hdl_free;
 }




 FUNC_17(2, &VAR_32->auto_gain, 0, 1);
 FUNC_17(2, &VAR_32->auto_exposure,
          VAR_18, 0);
 FUNC_18(2, &VAR_32->saturation);
 FUNC_21(&VAR_32->hdl);

 VAR_33 = FUNC_16(&VAR_32->sd);
 if (VAR_33 < 0)
  goto entity_cleanup;

 FUNC_13(VAR_31);
 return 0;

entity_cleanup:
 FUNC_7(&VAR_32->sd.entity);
hdl_free:
 FUNC_19(&VAR_32->hdl);
power_off:
 FUNC_13(VAR_31);
 return VAR_33;
}
