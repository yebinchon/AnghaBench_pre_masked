
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int code; int height; int width; } ;
struct v4l2_subdev_format {scalar_t__ pad; scalar_t__ which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct ov2680_mode_info {int height; int width; } ;
struct ov2680_dev {int mode_pending_changes; int lock; struct v4l2_mbus_framefmt fmt; struct ov2680_mode_info const* current_mode; scalar_t__ is_streaming; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 struct ov2680_dev* FUNC_3 (struct v4l2_subdev*) ;
 struct ov2680_mode_info* FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 struct v4l2_mbus_framefmt* FUNC_5 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_6,
     struct v4l2_subdev_pad_config *VAR_7,
     struct v4l2_subdev_format *VAR_8)
{
 struct ov2680_dev *VAR_9 = FUNC_3(VAR_6);
 struct v4l2_mbus_framefmt *VAR_10 = &VAR_8->format;



 const struct ov2680_mode_info *VAR_11;
 int VAR_12 = 0;

 if (VAR_8->pad != 0)
  return -VAR_1;

 FUNC_1(&VAR_9->lock);

 if (VAR_9->is_streaming) {
  VAR_12 = -VAR_0;
  goto unlock;
 }

 VAR_11 = FUNC_4(VAR_4,
          FUNC_0(VAR_4), VAR_5,
          VAR_3, VAR_10->width, VAR_10->height);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto unlock;
 }

 if (VAR_8->which == VAR_2) {




  goto unlock;
 }

 VAR_10->width = VAR_11->width;
 VAR_10->height = VAR_11->height;
 VAR_10->code = VAR_9->fmt.code;
 VAR_10->colorspace = VAR_9->fmt.colorspace;

 VAR_9->current_mode = VAR_11;
 VAR_9->fmt = VAR_8->format;
 VAR_9->mode_pending_changes = 1;

unlock:
 FUNC_2(&VAR_9->lock);

 return VAR_12;
}
