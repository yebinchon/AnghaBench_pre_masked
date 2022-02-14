
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_entity {int lock; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ code; unsigned int min_width; unsigned int max_width; unsigned int min_height; unsigned int max_height; int pad; scalar_t__ index; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; unsigned int width; unsigned int height; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vsp1_entity* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_subdev_pad_config* FUNC_3 (struct vsp1_entity*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_4 (struct vsp1_entity*,struct v4l2_subdev_pad_config*,int ) ;

int FUNC_5(struct v4l2_subdev *VAR_1,
    struct v4l2_subdev_pad_config *VAR_2,
    struct v4l2_subdev_frame_size_enum *VAR_3,
    unsigned int VAR_4, unsigned int VAR_5,
    unsigned int VAR_6, unsigned int VAR_7)
{
 struct vsp1_entity *VAR_8 = FUNC_2(VAR_1);
 struct v4l2_subdev_pad_config *VAR_9;
 struct v4l2_mbus_framefmt *VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_3(VAR_8, VAR_2, VAR_3->which);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_8, VAR_9, VAR_3->pad);

 FUNC_0(&VAR_8->lock);

 if (VAR_3->index || VAR_3->code != VAR_10->code) {
  VAR_11 = -VAR_0;
  goto done;
 }

 if (VAR_3->pad == 0) {
  VAR_3->min_width = VAR_4;
  VAR_3->max_width = VAR_6;
  VAR_3->min_height = VAR_5;
  VAR_3->max_height = VAR_7;
 } else {




  VAR_3->min_width = VAR_10->width;
  VAR_3->max_width = VAR_10->width;
  VAR_3->min_height = VAR_10->height;
  VAR_3->max_height = VAR_10->height;
 }

done:
 FUNC_1(&VAR_8->lock);
 return VAR_11;
}
