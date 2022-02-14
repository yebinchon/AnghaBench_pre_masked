
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_fract {int dummy; } ;
struct v4l2_subdev_frame_interval_enum {scalar_t__ pad; int index; int width; int height; struct v4l2_fract interval; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int width; int height; } ;
struct csi_priv {int lock; struct v4l2_fract* frame_interval; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct v4l2_rect* FUNC_1 (struct csi_priv*,struct v4l2_subdev_pad_config*,int ) ;
 int FUNC_2 (int *,struct v4l2_fract*) ;
 int * VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct csi_priv* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_5,
       struct v4l2_subdev_pad_config *VAR_6,
       struct v4l2_subdev_frame_interval_enum *VAR_7)
{
 struct csi_priv *VAR_8 = FUNC_5(VAR_5);
 struct v4l2_fract *VAR_9;
 struct v4l2_rect *VAR_10;
 int VAR_11 = 0;

 if (VAR_7->pad >= VAR_0 ||
     VAR_7->index >= (VAR_7->pad != VAR_2 ?
      1 : FUNC_0(VAR_4)))
  return -VAR_3;

 FUNC_3(&VAR_8->lock);

 VAR_9 = &VAR_8->frame_interval[VAR_1];
 VAR_10 = FUNC_1(VAR_8, VAR_6, VAR_7->which);

 if ((VAR_7->width != VAR_10->width && VAR_7->width != VAR_10->width / 2) ||
     (VAR_7->height != VAR_10->height && VAR_7->height != VAR_10->height / 2)) {
  VAR_11 = -VAR_3;
  goto out;
 }

 VAR_7->interval = *VAR_9;

 if (VAR_7->pad == VAR_2)
  FUNC_2(&VAR_4[VAR_7->index],
     &VAR_7->interval);

out:
 FUNC_4(&VAR_8->lock);
 return VAR_11;
}
