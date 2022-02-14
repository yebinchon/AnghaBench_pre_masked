
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int width; int height; int code; } ;
struct v4l2_subdev_format {TYPE_4__ format; int which; } ;
struct TYPE_6__ {int width; int height; int pixelformat; int colorspace; int sizeimage; scalar_t__ bytesperline; int field; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; int type; } ;
struct go7007 {int width; int height; int encoder_h_halve; int encoder_v_halve; int encoder_subsample; int v4l2_dev; TYPE_1__* board_info; int encoder_v_offset; int encoder_h_offset; int format; } ;
struct TYPE_5__ {int sensor_flags; int sensor_v_offset; int sensor_h_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,int *,struct v4l2_subdev_format*) ;
 int FUNC_1 (struct go7007*,int*,int*) ;
 int FUNC_2 (struct v4l2_format*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct go7007 *VAR_10, struct v4l2_format *VAR_11, int VAR_12)
{
 int VAR_13 = 0, VAR_14 = 0;
 int VAR_15, VAR_16;

 if (VAR_11 != ((void*)0) && !FUNC_3(VAR_11->fmt.pix.pixelformat))
  return -VAR_0;

 FUNC_1(VAR_10, &VAR_14, &VAR_13);

 if (VAR_11 == ((void*)0)) {
  VAR_15 = VAR_14;
  VAR_16 = VAR_13;
 } else if (VAR_10->board_info->sensor_flags & VAR_2) {
  if (VAR_11->fmt.pix.width > VAR_14)
   VAR_15 = VAR_14;
  else if (VAR_11->fmt.pix.width < 144)
   VAR_15 = 144;
  else
   VAR_15 = VAR_11->fmt.pix.width & ~0x0f;

  if (VAR_11->fmt.pix.height > VAR_13)
   VAR_16 = VAR_13;
  else if (VAR_11->fmt.pix.height < 96)
   VAR_16 = 96;
  else
   VAR_16 = VAR_11->fmt.pix.height & ~0x0f;
 } else {
  VAR_15 = VAR_11->fmt.pix.width;

  if (VAR_15 <= VAR_14 / 4) {
   VAR_15 = VAR_14 / 4;
   VAR_16 = VAR_13 / 4;
  } else if (VAR_15 <= VAR_14 / 2) {
   VAR_15 = VAR_14 / 2;
   VAR_16 = VAR_13 / 2;
  } else {
   VAR_15 = VAR_14;
   VAR_16 = VAR_13;
  }
  VAR_15 &= ~0xf;
  VAR_16 &= ~0xf;
 }

 if (VAR_11 != ((void*)0)) {
  u32 VAR_17 = VAR_11->fmt.pix.pixelformat;

  FUNC_2(VAR_11, 0, sizeof(*VAR_11));
  VAR_11->type = VAR_4;
  VAR_11->fmt.pix.width = VAR_15;
  VAR_11->fmt.pix.height = VAR_16;
  VAR_11->fmt.pix.pixelformat = VAR_17;
  VAR_11->fmt.pix.field = VAR_6;
  VAR_11->fmt.pix.bytesperline = 0;
  VAR_11->fmt.pix.sizeimage = VAR_1;
  VAR_11->fmt.pix.colorspace = VAR_5;
 }

 if (VAR_12)
  return 0;

 if (VAR_11)
  VAR_10->format = VAR_11->fmt.pix.pixelformat;
 VAR_10->width = VAR_15;
 VAR_10->height = VAR_16;
 VAR_10->encoder_h_offset = VAR_10->board_info->sensor_h_offset;
 VAR_10->encoder_v_offset = VAR_10->board_info->sensor_v_offset;

 if (VAR_10->board_info->sensor_flags & VAR_2) {
  struct v4l2_subdev_format VAR_18 = {
   .which = VAR_7,
  };

  VAR_18.format.code = VAR_3;
  VAR_18.format.width = VAR_11 ? VAR_11->fmt.pix.width : VAR_15;
  VAR_18.format.height = VAR_16;
  VAR_10->encoder_h_halve = 0;
  VAR_10->encoder_v_halve = 0;
  VAR_10->encoder_subsample = 0;
  FUNC_0(&VAR_10->v4l2_dev, VAR_8, VAR_9, ((void*)0), &VAR_18);
 } else {
  if (VAR_15 <= VAR_14 / 4) {
   VAR_10->encoder_h_halve = 1;
   VAR_10->encoder_v_halve = 1;
   VAR_10->encoder_subsample = 1;
  } else if (VAR_15 <= VAR_14 / 2) {
   VAR_10->encoder_h_halve = 1;
   VAR_10->encoder_v_halve = 1;
   VAR_10->encoder_subsample = 0;
  } else {
   VAR_10->encoder_h_halve = 0;
   VAR_10->encoder_v_halve = 0;
   VAR_10->encoder_subsample = 0;
  }
 }
 return 0;
}
