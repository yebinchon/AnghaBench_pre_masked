
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int xfer_func; int ycbcr_enc; int quantization; int field; int code; int height; int width; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; } ;
struct ov7251_mode_info {int link_freq; int exposure_def; int exposure_max; int pixel_clock; int height; int width; } ;
struct ov7251 {int lock; struct ov7251_mode_info const* current_mode; int gain; int exposure; int link_freq; int pixel_clock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 struct v4l2_rect* FUNC_4 (struct ov7251*,struct v4l2_subdev_pad_config*,int ,int ) ;
 struct v4l2_mbus_framefmt* FUNC_5 (struct ov7251*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_6 (int ,int,int ,int,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 struct ov7251* FUNC_11 (struct v4l2_subdev*) ;
 struct ov7251_mode_info* FUNC_12 (int ,int ,int ,int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct v4l2_subdev *VAR_7,
        struct v4l2_subdev_pad_config *VAR_8,
        struct v4l2_subdev_format *VAR_9)
{
 struct ov7251 *VAR_10 = FUNC_11(VAR_7);
 struct v4l2_mbus_framefmt *VAR_11;
 struct v4l2_rect *VAR_12;
 const struct ov7251_mode_info *VAR_13;
 int VAR_14 = 0;

 FUNC_9(&VAR_10->lock);

 VAR_12 = FUNC_4(VAR_10, VAR_8, VAR_9->pad, VAR_9->which);

 VAR_13 = FUNC_12(VAR_5,
    FUNC_0(VAR_5),
    VAR_6, VAR_4,
    VAR_9->format.width, VAR_9->format.height);

 VAR_12->width = VAR_13->width;
 VAR_12->height = VAR_13->height;

 if (VAR_9->which == VAR_3) {
  VAR_14 = FUNC_8(VAR_10->pixel_clock,
            VAR_13->pixel_clock);
  if (VAR_14 < 0)
   goto exit;

  VAR_14 = FUNC_7(VAR_10->link_freq,
      VAR_13->link_freq);
  if (VAR_14 < 0)
   goto exit;

  VAR_14 = FUNC_6(VAR_10->exposure,
            1, VAR_13->exposure_max,
            1, VAR_13->exposure_def);
  if (VAR_14 < 0)
   goto exit;

  VAR_14 = FUNC_7(VAR_10->exposure,
      VAR_13->exposure_def);
  if (VAR_14 < 0)
   goto exit;

  VAR_14 = FUNC_7(VAR_10->gain, 16);
  if (VAR_14 < 0)
   goto exit;

  VAR_10->current_mode = VAR_13;
 }

 VAR_11 = FUNC_5(VAR_10, VAR_8, VAR_9->pad,
        VAR_9->which);
 VAR_11->width = VAR_12->width;
 VAR_11->height = VAR_12->height;
 VAR_11->code = VAR_0;
 VAR_11->field = VAR_2;
 VAR_11->colorspace = VAR_1;
 VAR_11->ycbcr_enc = FUNC_3(VAR_11->colorspace);
 VAR_11->quantization = FUNC_1(1,
    VAR_11->colorspace, VAR_11->ycbcr_enc);
 VAR_11->xfer_func = FUNC_2(VAR_11->colorspace);

 VAR_9->format = *VAR_11;

exit:
 FUNC_10(&VAR_10->lock);

 return VAR_14;
}
