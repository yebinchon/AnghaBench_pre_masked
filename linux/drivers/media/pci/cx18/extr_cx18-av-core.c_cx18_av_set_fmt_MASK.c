
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int height; int width; int colorspace; int field; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {int std; } ;
struct cx18 {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,char*,int,int,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct cx18*,int) ;
 int FUNC_3 (struct cx18*,int,int) ;
 struct cx18_av_state* FUNC_4 (struct v4l2_subdev*) ;
 struct cx18* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_7,
  struct v4l2_subdev_pad_config *VAR_8,
  struct v4l2_subdev_format *VAR_9)
{
 struct v4l2_mbus_framefmt *VAR_10 = &VAR_9->format;
 struct cx18_av_state *VAR_11 = FUNC_4(VAR_7);
 struct cx18 *VAR_12 = FUNC_5(VAR_7);
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19 = !(VAR_11->std & VAR_5);

 if (VAR_9->pad || VAR_10->code != VAR_2)
  return -VAR_0;

 VAR_10->field = VAR_4;
 VAR_10->colorspace = VAR_3;

 VAR_15 = (FUNC_2(VAR_12, 0x476) & 0x3f) << 4;
 VAR_15 |= (FUNC_2(VAR_12, 0x475) & 0xf0) >> 4;

 VAR_16 = (FUNC_2(VAR_12, 0x472) & 0x3f) << 4;
 VAR_16 |= (FUNC_2(VAR_12, 0x471) & 0xf0) >> 4;
 VAR_18 = VAR_10->height + (VAR_19 ? 3 : 1);
 if ((VAR_10->width * 16 < VAR_16) || (VAR_16 < VAR_10->width) ||
     (VAR_18 * 8 < VAR_15) || (VAR_15 < VAR_18)) {
  FUNC_1(VAR_7, "%dx%d is not a valid size!\n",
        VAR_10->width, VAR_10->height);
  return -VAR_1;
 }

 if (VAR_9->which == VAR_6)
  return 0;

 VAR_13 = (VAR_16 * (1 << 20)) / VAR_10->width - (1 << 20);
 VAR_14 = (1 << 16) - (VAR_15 * (1 << 9) / VAR_18 - (1 << 9));
 VAR_14 &= 0x1fff;

 if (VAR_10->width >= 385)
  VAR_17 = 0;
 else if (VAR_10->width > 192)
  VAR_17 = 1;
 else if (VAR_10->width > 96)
  VAR_17 = 2;
 else
  VAR_17 = 3;

 FUNC_0(VAR_7,
       "decoder set size %dx%d -> scale  %ux%u\n",
       VAR_10->width, VAR_10->height, VAR_13, VAR_14);


 FUNC_3(VAR_12, 0x418, VAR_13 & 0xff);
 FUNC_3(VAR_12, 0x419, (VAR_13 >> 8) & 0xff);
 FUNC_3(VAR_12, 0x41a, VAR_13 >> 16);

 FUNC_3(VAR_12, 0x41c, VAR_14 & 0xff);
 FUNC_3(VAR_12, 0x41d, VAR_14 >> 8);

 FUNC_3(VAR_12, 0x41e, 0x8 | VAR_17);
 return 0;
}
