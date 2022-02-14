
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ pad; int which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct csis_state {int lock; struct csis_pix_format const* csis_fmt; } ;
struct csis_pix_format {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct csis_state*,struct v4l2_subdev_pad_config*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct csis_pix_format* FUNC_3 (struct v4l2_mbus_framefmt*) ;
 struct csis_state* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2, struct v4l2_subdev_pad_config *VAR_3,
      struct v4l2_subdev_format *VAR_4)
{
 struct csis_state *VAR_5 = FUNC_4(VAR_2);
 struct csis_pix_format const *VAR_6;
 struct v4l2_mbus_framefmt *VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_3, VAR_4->which);

 if (VAR_4->pad == VAR_0) {
  if (VAR_7) {
   FUNC_1(&VAR_5->lock);
   VAR_4->format = *VAR_7;
   FUNC_2(&VAR_5->lock);
  }
  return 0;
 }
 VAR_6 = FUNC_3(&VAR_4->format);
 if (VAR_7) {
  FUNC_1(&VAR_5->lock);
  *VAR_7 = VAR_4->format;
  if (VAR_4->which == VAR_1)
   VAR_5->csis_fmt = VAR_6;
  FUNC_2(&VAR_5->lock);
 }
 return 0;
}
