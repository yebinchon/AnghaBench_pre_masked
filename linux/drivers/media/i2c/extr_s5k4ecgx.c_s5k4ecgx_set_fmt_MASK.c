
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int colorspace; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct s5k4ecgx_pixfmt {int dummy; } ;
struct s5k4ecgx_frmsize {int dummy; } ;
struct s5k4ecgx {int set_params; int lock; struct s5k4ecgx_pixfmt const* curr_pixfmt; struct s5k4ecgx_frmsize const* curr_frmsize; int streaming; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct s5k4ecgx_pixfmt* FUNC_2 (struct v4l2_subdev*,struct v4l2_mbus_framefmt*) ;
 int FUNC_3 (struct v4l2_mbus_framefmt*,struct s5k4ecgx_frmsize const**) ;
 struct s5k4ecgx* FUNC_4 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_5 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_4, struct v4l2_subdev_pad_config *VAR_5,
       struct v4l2_subdev_format *VAR_6)
{
 struct s5k4ecgx *VAR_7 = FUNC_4(VAR_4);
 const struct s5k4ecgx_frmsize *VAR_8 = ((void*)0);
 const struct s5k4ecgx_pixfmt *VAR_9;
 struct v4l2_mbus_framefmt *VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_2(VAR_4, &VAR_6->format);
 FUNC_3(&VAR_6->format, &VAR_8);
 VAR_6->format.colorspace = VAR_1;
 VAR_6->format.field = VAR_2;

 if (VAR_6->which == VAR_3) {
  if (VAR_5) {
   VAR_10 = FUNC_5(VAR_4, VAR_5, 0);
   *VAR_10 = VAR_6->format;
  }
  return 0;
 }

 FUNC_0(&VAR_7->lock);
 if (!VAR_7->streaming) {
  VAR_7->curr_frmsize = VAR_8;
  VAR_7->curr_pixfmt = VAR_9;
  VAR_7->set_params = 1;
 } else {
  VAR_11 = -VAR_0;
 }
 FUNC_1(&VAR_7->lock);

 return VAR_11;
}
