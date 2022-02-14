
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ pad; size_t index; int code; unsigned int max_width; unsigned int min_width; unsigned int max_height; unsigned int min_height; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {unsigned int width; unsigned int height; } ;
struct s5c73m3_frame_size {unsigned int width; unsigned int height; } ;
struct s5c73m3 {struct s5c73m3_frame_size** oif_pix_size; } ;
struct TYPE_2__ {unsigned int width; unsigned int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 struct s5c73m3* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_1__** VAR_7 ;
 size_t* VAR_8 ;
 struct v4l2_mbus_framefmt* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_9,
       struct v4l2_subdev_pad_config *VAR_10,
       struct v4l2_subdev_frame_size_enum *VAR_11)
{
 struct s5c73m3 *VAR_12 = FUNC_0(VAR_9);
 int VAR_13;

 if (VAR_11->pad == VAR_3) {
  if (VAR_11->index > 0)
   return -VAR_0;

  switch (VAR_11->code) {
  case 128:
  case 129: {
   unsigned VAR_14, VAR_15;

   if (VAR_11->which == VAR_6) {
    struct v4l2_mbus_framefmt *VAR_16;

    VAR_16 = FUNC_2(VAR_9, VAR_10,
        VAR_1);

    VAR_14 = VAR_16->width;
    VAR_15 = VAR_16->height;
   } else {
    const struct s5c73m3_frame_size *VAR_17;

    VAR_17 = VAR_12->oif_pix_size[VAR_4];
    VAR_14 = VAR_17->width;
    VAR_15 = VAR_17->height;
   }
   VAR_11->max_width = VAR_11->min_width = VAR_14;
   VAR_11->max_height = VAR_11->min_height = VAR_15;
   return 0;
  }
  default:
   return -VAR_0;
  }
 }

 if (VAR_11->code != FUNC_1(VAR_11->pad, 0))
  return -VAR_0;

 if (VAR_11->pad == VAR_2)
  VAR_13 = VAR_5;
 else
  VAR_13 = VAR_4;

 if (VAR_11->index >= VAR_8[VAR_13])
  return -VAR_0;

 VAR_11->min_width = VAR_7[VAR_13][VAR_11->index].width;
 VAR_11->max_width = VAR_11->min_width;
 VAR_11->max_height = VAR_7[VAR_13][VAR_11->index].height;
 VAR_11->min_height = VAR_11->max_height;

 return 0;
}
