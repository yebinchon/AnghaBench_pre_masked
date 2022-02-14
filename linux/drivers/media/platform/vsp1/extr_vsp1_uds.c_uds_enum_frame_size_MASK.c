
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct vsp1_uds {TYPE_1__ entity; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ code; scalar_t__ pad; void* max_height; void* min_height; void* max_width; void* min_width; scalar_t__ index; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int height; int width; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vsp1_uds* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int ,void**,void**) ;
 struct v4l2_subdev_pad_config* FUNC_4 (TYPE_1__*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_5 (TYPE_1__*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_4,
          struct v4l2_subdev_pad_config *VAR_5,
          struct v4l2_subdev_frame_size_enum *VAR_6)
{
 struct vsp1_uds *VAR_7 = FUNC_2(VAR_4);
 struct v4l2_subdev_pad_config *VAR_8;
 struct v4l2_mbus_framefmt *VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_4(&VAR_7->entity, VAR_5, VAR_6->which);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_5(&VAR_7->entity, VAR_8,
         VAR_3);

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
  FUNC_3(VAR_9->width, &VAR_6->min_width,
      &VAR_6->max_width);
  FUNC_3(VAR_9->height, &VAR_6->min_height,
      &VAR_6->max_height);
 }

done:
 FUNC_1(&VAR_7->entity.lock);
 return VAR_10;
}
