
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int code; int height; int width; } ;
struct v4l2_subdev_format {scalar_t__ which; int pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct s5c73m3_frame_size {int dummy; } ;
struct s5c73m3 {int apply_fmt; int lock; scalar_t__ streaming; int mbus_code; struct s5c73m3_frame_size const** oif_pix_size; } ;


 int VAR_0 ;



 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct s5c73m3* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct s5c73m3*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*,struct s5c73m3_frame_size const**) ;
 struct v4l2_mbus_framefmt* FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_4,
    struct v4l2_subdev_pad_config *VAR_5,
    struct v4l2_subdev_format *VAR_6)
{
 const struct s5c73m3_frame_size *VAR_7 = ((void*)0);
 struct s5c73m3 *VAR_8 = FUNC_2(VAR_4);
 struct v4l2_mbus_framefmt *VAR_9;
 int VAR_10 = 0;

 FUNC_0(&VAR_8->lock);

 FUNC_3(VAR_8, VAR_5, VAR_6, &VAR_7);

 if (VAR_6->which == VAR_3) {
  VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6->pad);
  *VAR_9 = VAR_6->format;
  if (VAR_6->pad == 130) {
   VAR_9 = FUNC_4(VAR_4, VAR_5, 128);
   VAR_9->width = VAR_6->format.width;
   VAR_9->height = VAR_6->format.height;
  }
 } else {
  switch (VAR_6->pad) {
  case 130:
   VAR_8->oif_pix_size[VAR_1] = VAR_7;
   break;
  case 129:
   VAR_8->oif_pix_size[VAR_2] = VAR_7;
   break;
  case 128:
   VAR_8->mbus_code = VAR_6->format.code;
   break;
  default:
   VAR_10 = -VAR_0;
  }

  if (VAR_8->streaming)
   VAR_10 = -VAR_0;
  else
   VAR_8->apply_fmt = 1;
 }

 FUNC_1(&VAR_8->lock);

 return VAR_10;
}
