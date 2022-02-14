
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; } ;
struct v4l2_subdev_format {scalar_t__ pad; scalar_t__ which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct ov5640_mode_info {int dummy; } ;
struct ov5640_dev {int pending_mode_change; int pending_fmt_change; int lock; struct v4l2_mbus_framefmt fmt; struct ov5640_mode_info const* current_mode; int current_fr; scalar_t__ streaming; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct v4l2_subdev*,struct v4l2_mbus_framefmt*,int ,struct ov5640_mode_info const**) ;
 struct ov5640_dev* FUNC_3 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3,
     struct v4l2_subdev_pad_config *VAR_4,
     struct v4l2_subdev_format *VAR_5)
{
 struct ov5640_dev *VAR_6 = FUNC_3(VAR_3);
 const struct ov5640_mode_info *VAR_7;
 struct v4l2_mbus_framefmt *VAR_8 = &VAR_5->format;
 struct v4l2_mbus_framefmt *VAR_9;
 int VAR_10;

 if (VAR_5->pad != 0)
  return -VAR_1;

 FUNC_0(&VAR_6->lock);

 if (VAR_6->streaming) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_2(VAR_3, VAR_8,
          VAR_6->current_fr, &VAR_7);
 if (VAR_10)
  goto out;

 if (VAR_5->which == VAR_2)
  VAR_9 = FUNC_4(VAR_3, VAR_4, 0);
 else
  VAR_9 = &VAR_6->fmt;

 *VAR_9 = *VAR_8;

 if (VAR_7 != VAR_6->current_mode) {
  VAR_6->current_mode = VAR_7;
  VAR_6->pending_mode_change = 1;
 }
 if (VAR_8->code != VAR_6->fmt.code)
  VAR_6->pending_fmt_change = 1;

out:
 FUNC_1(&VAR_6->lock);
 return VAR_10;
}
