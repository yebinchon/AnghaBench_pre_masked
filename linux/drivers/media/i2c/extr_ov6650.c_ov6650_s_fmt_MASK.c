
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int width; int height; int top; int left; } ;
struct v4l2_subdev_selection {TYPE_1__ r; int target; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int width; int height; int code; int colorspace; } ;
struct TYPE_4__ {int width; int height; int top; int left; } ;
struct ov6650 {int code; int pclk_max; int half_scale; int pclk_limit; TYPE_2__ rect; int colorspace; int tpf; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long FUNC_0 (int) ;






 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int,int,TYPE_2__*) ;
 int FUNC_4 (struct i2c_client*,int ,int,int) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (struct v4l2_subdev*,int *,struct v4l2_subdev_selection*) ;
 int FUNC_7 (int *,int,int) ;
 struct ov6650* FUNC_8 (struct i2c_client*) ;
 struct i2c_client* FUNC_9 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_16, struct v4l2_mbus_framefmt *VAR_17)
{
 struct i2c_client *VAR_18 = FUNC_9(VAR_16);
 struct ov6650 *VAR_19 = FUNC_8(VAR_18);
 bool VAR_20 = !FUNC_3(VAR_17->width, VAR_17->height, &VAR_19->rect);
 struct v4l2_subdev_selection VAR_21 = {
  .which = VAR_15,
  .target = VAR_14,
  .r.left = VAR_19->rect.left + (VAR_19->rect.width >> 1) -
   (VAR_17->width >> (1 - VAR_20)),
  .r.top = VAR_19->rect.top + (VAR_19->rect.height >> 1) -
   (VAR_17->height >> (1 - VAR_20)),
  .r.width = VAR_17->width << VAR_20,
  .r.height = VAR_17->height << VAR_20,
 };
 u32 VAR_22 = VAR_17->code;
 unsigned long VAR_23, VAR_24;
 u8 VAR_25 = 0, VAR_26 = 0, VAR_27, VAR_28, VAR_29;
 int VAR_30;


 switch (VAR_22) {
 case 130:
  FUNC_1(&VAR_18->dev, "pixel format GREY8_1X8\n");
  VAR_26 |= VAR_5 | VAR_6 | VAR_2;
  VAR_25 |= VAR_1;
  break;
 case 129:
  FUNC_1(&VAR_18->dev, "pixel format YUYV8_2X8_LE\n");
  VAR_26 |= VAR_5 | VAR_1 | VAR_2;
  VAR_25 |= VAR_6;
  break;
 case 128:
  FUNC_1(&VAR_18->dev, "pixel format YVYU8_2X8_LE (untested)\n");
  VAR_26 |= VAR_5 | VAR_1 | VAR_6 |
    VAR_2;
  break;
 case 132:
  FUNC_1(&VAR_18->dev, "pixel format YUYV8_2X8_BE\n");
  if (VAR_20) {
   VAR_26 |= VAR_5 | VAR_1 | VAR_6;
   VAR_25 |= VAR_2;
  } else {
   VAR_26 |= VAR_5 | VAR_1;
   VAR_25 |= VAR_2 | VAR_6;
  }
  break;
 case 131:
  FUNC_1(&VAR_18->dev, "pixel format YVYU8_2X8_BE (untested)\n");
  if (VAR_20) {
   VAR_26 |= VAR_5 | VAR_1;
   VAR_25 |= VAR_2 | VAR_6;
  } else {
   VAR_26 |= VAR_5 | VAR_1 | VAR_6;
   VAR_25 |= VAR_2;
  }
  break;
 case 133:
  FUNC_1(&VAR_18->dev, "pixel format SBGGR8_1X8 (untested)\n");
  VAR_26 |= VAR_1 | VAR_2 | VAR_6;
  VAR_25 |= VAR_4 | VAR_5;
  break;
 default:
  FUNC_2(&VAR_18->dev, "Pixel format not handled: 0x%x\n", VAR_22);
  return -VAR_8;
 }
 VAR_19->code = VAR_22;

 if (VAR_22 == 130 ||
   VAR_22 == 133) {
  VAR_28 = VAR_7;
  VAR_27 = 0;
  VAR_19->pclk_max = 4000000;
 } else {
  VAR_28 = 0;
  VAR_27 = VAR_7;
  VAR_19->pclk_max = 8000000;
 }

 if (VAR_22 == 133)
  VAR_19->colorspace = VAR_13;
 else if (VAR_22 != 0)
  VAR_19->colorspace = VAR_12;

 if (VAR_20) {
  FUNC_1(&VAR_18->dev, "max resolution: QCIF\n");
  VAR_25 |= VAR_3;
  VAR_19->pclk_max /= 2;
 } else {
  FUNC_1(&VAR_18->dev, "max resolution: CIF\n");
  VAR_26 |= VAR_3;
 }
 VAR_19->half_scale = VAR_20;

 VAR_29 = VAR_0;
 VAR_23 = 12000000;
 VAR_19->pclk_limit = 1334000;
 FUNC_1(&VAR_18->dev, "using 12MHz input clock\n");

 VAR_29 |= FUNC_7(&VAR_19->tpf, VAR_19->pclk_limit, VAR_19->pclk_max);

 VAR_24 = VAR_19->pclk_max / FUNC_0(VAR_29);
 FUNC_1(&VAR_18->dev, "pixel clock divider: %ld.%ld\n",
   VAR_23 / VAR_24, 10 * VAR_23 % VAR_24 / VAR_24);

 VAR_30 = FUNC_6(VAR_16, ((void*)0), &VAR_21);
 if (!VAR_30)
  VAR_30 = FUNC_4(VAR_18, VAR_10, VAR_25, VAR_26);
 if (!VAR_30)
  VAR_30 = FUNC_5(VAR_18, VAR_9, VAR_29);
 if (!VAR_30)
  VAR_30 = FUNC_4(VAR_18, VAR_11, VAR_27, VAR_28);

 if (!VAR_30) {
  VAR_17->colorspace = VAR_19->colorspace;
  VAR_17->width = VAR_19->rect.width >> VAR_20;
  VAR_17->height = VAR_19->rect.height >> VAR_20;
 }
 return VAR_30;
}
