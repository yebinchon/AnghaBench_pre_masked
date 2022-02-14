
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct vsp1_sru {TYPE_1__ entity; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ code; scalar_t__ pad; int min_width; int max_width; int min_height; int max_height; scalar_t__ index; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vsp1_sru* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_subdev_pad_config* FUNC_3 (TYPE_1__*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_4 (TYPE_1__*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_4,
          struct v4l2_subdev_pad_config *VAR_5,
          struct v4l2_subdev_frame_size_enum *VAR_6)
{
 struct vsp1_sru *VAR_7 = FUNC_2(VAR_4);
 struct v4l2_subdev_pad_config *VAR_8;
 struct v4l2_mbus_framefmt *VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_3(&VAR_7->entity, VAR_5, VAR_6->which);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_4(&VAR_7->entity, VAR_8, VAR_3);

 FUNC_0(&VAR_7->entity.lock);

 if (VAR_6->index || VAR_6->code != VAR_9->code) {
  VAR_10 = -VAR_0;
  goto done;
 }

 if (VAR_6->pad == VAR_3) {
  VAR_6->min_width = VAR_2;
  VAR_6->max_width = VAR_1;
  VAR_6->min_height = VAR_2;
  VAR_6->max_height = VAR_1;
 } else {
  VAR_6->min_width = VAR_9->width;
  VAR_6->min_height = VAR_9->height;
  if (VAR_9->width <= VAR_1 / 2 &&
      VAR_9->height <= VAR_1 / 2) {
   VAR_6->max_width = VAR_9->width * 2;
   VAR_6->max_height = VAR_9->height * 2;
  } else {
   VAR_6->max_width = VAR_9->width;
   VAR_6->max_height = VAR_9->height;
  }
 }

done:
 FUNC_1(&VAR_7->entity.lock);
 return VAR_10;
}
