
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {int height; int width; scalar_t__ left; scalar_t__ top; } ;
struct v4l2_subdev_selection {scalar_t__ pad; int target; scalar_t__ which; struct v4l2_rect r; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; struct v4l2_rect try_crop; } ;
struct v4l2_subdev {int dummy; } ;
struct stimx274 {int lock; struct v4l2_mbus_framefmt format; struct v4l2_rect crop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct stimx274* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_5,
    struct v4l2_subdev_pad_config *VAR_6,
    struct v4l2_subdev_selection *VAR_7)
{
 struct stimx274 *VAR_8 = FUNC_2(VAR_5);
 const struct v4l2_rect *VAR_9;
 const struct v4l2_mbus_framefmt *VAR_10;
 int VAR_11 = 0;

 if (VAR_7->pad != 0)
  return -VAR_0;

 if (VAR_7->target == VAR_3) {
  VAR_7->r.left = 0;
  VAR_7->r.top = 0;
  VAR_7->r.width = VAR_2;
  VAR_7->r.height = VAR_1;
  return 0;
 }

 if (VAR_7->which == VAR_4) {
  VAR_9 = &VAR_6->try_crop;
  VAR_10 = &VAR_6->try_fmt;
 } else {
  VAR_9 = &VAR_8->crop;
  VAR_10 = &VAR_8->format;
 }

 FUNC_0(&VAR_8->lock);

 switch (VAR_7->target) {
 case 128:
  VAR_7->r = *VAR_9;
  break;
 case 129:
  VAR_7->r.top = 0;
  VAR_7->r.left = 0;
  VAR_7->r.width = VAR_9->width;
  VAR_7->r.height = VAR_9->height;
  break;
 case 130:
  VAR_7->r.top = 0;
  VAR_7->r.left = 0;
  VAR_7->r.width = VAR_10->width;
  VAR_7->r.height = VAR_10->height;
  break;
 default:
  VAR_11 = -VAR_0;
 }

 FUNC_1(&VAR_8->lock);

 return VAR_11;
}
