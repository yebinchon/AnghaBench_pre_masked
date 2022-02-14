
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ which; int pad; int format; } ;
struct v4l2_subdev {int dummy; } ;
struct s5c73m3_frame_size {int dummy; } ;
struct s5c73m3 {int lock; struct s5c73m3_frame_size** sensor_pix_size; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct s5c73m3_frame_size const*,int ) ;
 struct s5c73m3* FUNC_3 (struct v4l2_subdev*) ;
 int * FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_6,
      struct v4l2_subdev_pad_config *VAR_7,
      struct v4l2_subdev_format *VAR_8)
{
 struct s5c73m3 *VAR_9 = FUNC_3(VAR_6);
 const struct s5c73m3_frame_size *VAR_10;
 u32 VAR_11;

 if (VAR_8->which == VAR_5) {
  VAR_8->format = *FUNC_4(VAR_6, VAR_7, VAR_8->pad);
  return 0;
 }

 FUNC_0(&VAR_9->lock);

 switch (VAR_8->pad) {
 case 129:
  VAR_11 = VAR_3;
  VAR_10 = VAR_9->sensor_pix_size[VAR_1];
  break;
 case 128:
  VAR_11 = VAR_4;
  VAR_10 = VAR_9->sensor_pix_size[VAR_2];
  break;
 default:
  FUNC_1(&VAR_9->lock);
  return -VAR_0;
 }
 FUNC_2(&VAR_8->format, VAR_10, VAR_11);

 FUNC_1(&VAR_9->lock);
 return 0;
}
