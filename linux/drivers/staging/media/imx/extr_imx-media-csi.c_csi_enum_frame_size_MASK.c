
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ pad; int index; int min_width; int max_width; int min_height; int max_height; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int width; int height; } ;
struct csi_priv {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct v4l2_rect* FUNC_0 (struct csi_priv*,struct v4l2_subdev_pad_config*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct csi_priv* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_7,
          struct v4l2_subdev_pad_config *VAR_8,
          struct v4l2_subdev_frame_size_enum *VAR_9)
{
 struct csi_priv *VAR_10 = FUNC_3(VAR_7);
 struct v4l2_rect *VAR_11;
 int VAR_12 = 0;

 if (VAR_9->pad >= VAR_0 ||
     VAR_9->index > (VAR_9->pad == VAR_1 ? 0 : 3))
  return -VAR_2;

 FUNC_1(&VAR_10->lock);

 if (VAR_9->pad == VAR_1) {
  VAR_9->min_width = VAR_6;
  VAR_9->max_width = VAR_4;
  VAR_9->min_height = VAR_5;
  VAR_9->max_height = VAR_3;
 } else {
  VAR_11 = FUNC_0(VAR_10, VAR_8, VAR_9->which);

  VAR_9->min_width = VAR_9->index & 1 ?
   VAR_11->width / 2 : VAR_11->width;
  VAR_9->max_width = VAR_9->min_width;
  VAR_9->min_height = VAR_9->index & 2 ?
   VAR_11->height / 2 : VAR_11->height;
  VAR_9->max_height = VAR_9->min_height;
 }

 FUNC_2(&VAR_10->lock);
 return VAR_12;
}
