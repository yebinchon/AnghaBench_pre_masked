
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int code; int height; int width; int field; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct s5k5baf_pixfmt {int colorspace; int code; } ;
struct TYPE_2__ {int height; int width; } ;
struct s5k5baf {size_t pixfmt; int lock; TYPE_1__ crop_source; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct s5k5baf_pixfmt* VAR_3 ;
 int FUNC_2 (struct v4l2_mbus_framefmt*) ;
 struct s5k5baf* FUNC_3 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_4, struct v4l2_subdev_pad_config *VAR_5,
     struct v4l2_subdev_format *VAR_6)
{
 struct s5k5baf *VAR_7 = FUNC_3(VAR_4);
 const struct s5k5baf_pixfmt *VAR_8;
 struct v4l2_mbus_framefmt *VAR_9;

 if (VAR_6->which == VAR_2) {
  VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6->pad);
  VAR_6->format = *VAR_9;
  return 0;
 }

 VAR_9 = &VAR_6->format;
 if (VAR_6->pad == VAR_0) {
  FUNC_2(VAR_9);
  return 0;
 }
 VAR_9->field = VAR_1;
 FUNC_0(&VAR_7->lock);
 VAR_8 = &VAR_3[VAR_7->pixfmt];
 VAR_9->width = VAR_7->crop_source.width;
 VAR_9->height = VAR_7->crop_source.height;
 VAR_9->code = VAR_8->code;
 VAR_9->colorspace = VAR_8->colorspace;
 FUNC_1(&VAR_7->lock);

 return 0;
}
