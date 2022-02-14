
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int colorspace; int code; int height; int width; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct s5k4ecgx {int lock; TYPE_3__* curr_pixfmt; TYPE_2__* curr_frmsize; } ;
struct TYPE_6__ {int colorspace; int code; } ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_5__ {TYPE_1__ size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct s5k4ecgx* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2, struct v4l2_subdev_pad_config *VAR_3,
      struct v4l2_subdev_format *VAR_4)
{
 struct s5k4ecgx *VAR_5 = FUNC_2(VAR_2);
 struct v4l2_mbus_framefmt *VAR_6;

 if (VAR_4->which == VAR_1) {
  if (VAR_3) {
   VAR_6 = FUNC_3(VAR_2, VAR_3, 0);
   VAR_4->format = *VAR_6;
  }
  return 0;
 }

 VAR_6 = &VAR_4->format;

 FUNC_0(&VAR_5->lock);
 VAR_6->width = VAR_5->curr_frmsize->size.width;
 VAR_6->height = VAR_5->curr_frmsize->size.height;
 VAR_6->code = VAR_5->curr_pixfmt->code;
 VAR_6->colorspace = VAR_5->curr_pixfmt->colorspace;
 VAR_6->field = VAR_0;
 FUNC_1(&VAR_5->lock);

 return 0;
}
