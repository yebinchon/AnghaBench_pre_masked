
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int width; int height; int colorspace; int field; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int std; int generic_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int,int,int) ;
 int VAR_6 ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (struct i2c_client*,int,int) ;
 scalar_t__ FUNC_4 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_5 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (int,int ,struct i2c_client*,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_8 (struct i2c_client*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_7,
      struct v4l2_subdev_pad_config *VAR_8,
      struct v4l2_subdev_format *VAR_9)
{
 struct v4l2_mbus_framefmt *VAR_10 = &VAR_9->format;
 struct cx25840_state *VAR_11 = FUNC_5(VAR_7);
 struct i2c_client *VAR_12 = FUNC_6(VAR_7);
 u32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;
 int VAR_19 = !(VAR_11->std & VAR_4);

 if (VAR_9->pad || VAR_10->code != VAR_1)
  return -VAR_0;

 VAR_10->field = VAR_3;
 VAR_10->colorspace = VAR_2;

 if (FUNC_4(VAR_11)) {
  VAR_15 = (FUNC_1(VAR_12, 0x42a) & 0x3f) << 4;
  VAR_15 |= (FUNC_1(VAR_12, 0x429) & 0xf0) >> 4;
 } else {
  VAR_15 = (FUNC_1(VAR_12, 0x476) & 0x3f) << 4;
  VAR_15 |= (FUNC_1(VAR_12, 0x475) & 0xf0) >> 4;
 }

 if (FUNC_4(VAR_11)) {
  VAR_16 = (FUNC_1(VAR_12, 0x426) & 0x3f) << 4;
  VAR_16 |= (FUNC_1(VAR_12, 0x425) & 0xf0) >> 4;
 } else {
  VAR_16 = (FUNC_1(VAR_12, 0x472) & 0x3f) << 4;
  VAR_16 |= (FUNC_1(VAR_12, 0x471) & 0xf0) >> 4;
 }

 if (!VAR_11->generic_mode) {
  VAR_17 = VAR_19 ? 4 : 7;
  if (FUNC_4(VAR_11) && !VAR_19)
   VAR_17--;
 } else {
  VAR_17 = 0;
 }

 if (VAR_16 == 0 ||
     VAR_15 <= VAR_17) {
  FUNC_8(VAR_12,
   "chip reported picture size (%u x %u) is far too small\n",
   (unsigned int)VAR_16, (unsigned int)VAR_15);




  return -VAR_0;
 }

 VAR_10->width = FUNC_0(VAR_10->width, (VAR_16 + 15) / 16, VAR_16);

 if (VAR_17 * 8 >= VAR_15)
  VAR_10->height = FUNC_0(VAR_10->height, (u32)1, VAR_15 - VAR_17);
 else
  VAR_10->height = FUNC_0(VAR_10->height, (VAR_15 - VAR_17 * 8 + 7) / 8,
        VAR_15 - VAR_17);

 if (VAR_9->which == VAR_5)
  return 0;

 VAR_13 = (VAR_16 * (1 << 20)) / VAR_10->width - (1 << 20);
 VAR_14 = (1 << 16) - (VAR_15 * (1 << 9) / (VAR_10->height + VAR_17) - (1 << 9));
 VAR_14 &= 0x1fff;

 if (VAR_10->width >= 385)
  VAR_18 = 0;
 else if (VAR_10->width > 192)
  VAR_18 = 1;
 else if (VAR_10->width > 96)
  VAR_18 = 2;
 else
  VAR_18 = 3;

 FUNC_7(1, VAR_6, VAR_12,
  "decoder set size %u x %u with scale %x x %x\n",
  (unsigned int)VAR_10->width, (unsigned int)VAR_10->height,
  (unsigned int)VAR_13, (unsigned int)VAR_14);


 if (FUNC_4(VAR_11)) {
  FUNC_3(VAR_12, 0x434, VAR_13 | (1 << 24));

  FUNC_3(VAR_12, 0x438, VAR_14 | (1 << 19) | (VAR_18 << 16));
 } else {
  FUNC_2(VAR_12, 0x418, VAR_13 & 0xff);
  FUNC_2(VAR_12, 0x419, (VAR_13 >> 8) & 0xff);
  FUNC_2(VAR_12, 0x41a, VAR_13 >> 16);

  FUNC_2(VAR_12, 0x41c, VAR_14 & 0xff);
  FUNC_2(VAR_12, 0x41d, VAR_14 >> 8);

  FUNC_2(VAR_12, 0x41e, 0x8 | VAR_18);
 }
 return 0;
}
