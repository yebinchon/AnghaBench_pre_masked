
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; int colorspace; int code; int field; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct s5k5baf_pixfmt {int colorspace; int code; } ;
struct TYPE_2__ {int height; int width; } ;
struct s5k5baf {size_t pixfmt; int lock; TYPE_1__ crop_source; scalar_t__ streaming; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct s5k5baf_pixfmt* VAR_4 ;
 int FUNC_2 (struct v4l2_mbus_framefmt*) ;
 size_t FUNC_3 (struct v4l2_mbus_framefmt*) ;
 struct s5k5baf* FUNC_4 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_5 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_5, struct v4l2_subdev_pad_config *VAR_6,
     struct v4l2_subdev_format *VAR_7)
{
 struct v4l2_mbus_framefmt *VAR_8 = &VAR_7->format;
 struct s5k5baf *VAR_9 = FUNC_4(VAR_5);
 const struct s5k5baf_pixfmt *VAR_10;
 int VAR_11 = 0;

 VAR_8->field = VAR_2;

 if (VAR_7->which == VAR_3) {
  *FUNC_5(VAR_5, VAR_6, VAR_7->pad) = *VAR_8;
  return 0;
 }

 if (VAR_7->pad == VAR_1) {
  FUNC_2(VAR_8);
  return 0;
 }

 FUNC_0(&VAR_9->lock);

 if (VAR_9->streaming) {
  FUNC_1(&VAR_9->lock);
  return -VAR_0;
 }

 VAR_9->pixfmt = FUNC_3(VAR_8);
 VAR_10 = &VAR_4[VAR_9->pixfmt];
 VAR_8->code = VAR_10->code;
 VAR_8->colorspace = VAR_10->colorspace;
 VAR_8->width = VAR_9->crop_source.width;
 VAR_8->height = VAR_9->crop_source.height;

 FUNC_1(&VAR_9->lock);
 return VAR_11;
}
