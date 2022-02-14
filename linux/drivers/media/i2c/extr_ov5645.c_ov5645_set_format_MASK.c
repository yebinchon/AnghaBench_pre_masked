
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int field; int code; int height; int width; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; } ;
struct ov5645_mode_info {int link_freq; int pixel_clock; int height; int width; } ;
struct ov5645 {struct ov5645_mode_info const* current_mode; int link_freq; int pixel_clock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct v4l2_rect* FUNC_1 (struct ov5645*,struct v4l2_subdev_pad_config*,int ,int ) ;
 struct v4l2_mbus_framefmt* FUNC_2 (struct ov5645*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct ov5645* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 struct ov5645_mode_info* FUNC_6 (int ,int ,int ,int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_7,
        struct v4l2_subdev_pad_config *VAR_8,
        struct v4l2_subdev_format *VAR_9)
{
 struct ov5645 *VAR_10 = FUNC_3(VAR_7);
 struct v4l2_mbus_framefmt *VAR_11;
 struct v4l2_rect *VAR_12;
 const struct ov5645_mode_info *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_1(VAR_10, VAR_8, VAR_9->pad,
   VAR_9->which);

 VAR_13 = FUNC_6(VAR_5,
          FUNC_0(VAR_5),
          VAR_6, VAR_4,
          VAR_9->format.width, VAR_9->format.height);

 VAR_12->width = VAR_13->width;
 VAR_12->height = VAR_13->height;

 if (VAR_9->which == VAR_3) {
  VAR_14 = FUNC_5(VAR_10->pixel_clock,
          VAR_13->pixel_clock);
  if (VAR_14 < 0)
   return VAR_14;

  VAR_14 = FUNC_4(VAR_10->link_freq,
           VAR_13->link_freq);
  if (VAR_14 < 0)
   return VAR_14;

  VAR_10->current_mode = VAR_13;
 }

 VAR_11 = FUNC_2(VAR_10, VAR_8, VAR_9->pad,
   VAR_9->which);
 VAR_11->width = VAR_12->width;
 VAR_11->height = VAR_12->height;
 VAR_11->code = VAR_0;
 VAR_11->field = VAR_2;
 VAR_11->colorspace = VAR_1;

 VAR_9->format = *VAR_11;

 return 0;
}
