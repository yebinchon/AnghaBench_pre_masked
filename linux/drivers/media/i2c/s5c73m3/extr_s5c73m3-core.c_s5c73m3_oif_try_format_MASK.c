
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_4__ {int code; } ;
struct v4l2_subdev_format {int pad; TYPE_1__ format; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct s5c73m3_frame_size {int dummy; } ;
struct s5c73m3 {struct s5c73m3_frame_size** oif_pix_size; struct v4l2_subdev sensor_sd; } ;





 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,struct s5c73m3_frame_size const*,int ) ;
 struct s5c73m3_frame_size* FUNC_1 (TYPE_1__*,size_t) ;
 TYPE_1__* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int const) ;

__attribute__((used)) static void FUNC_3(struct s5c73m3 *VAR_5,
       struct v4l2_subdev_pad_config *VAR_6,
       struct v4l2_subdev_format *VAR_7,
       const struct s5c73m3_frame_size **VAR_8)
{
 struct v4l2_subdev *VAR_9 = &VAR_5->sensor_sd;
 u32 VAR_10;

 switch (VAR_7->pad) {
 case 130:
  *VAR_8 = FUNC_1(&VAR_7->format, VAR_0);
  VAR_10 = VAR_2;
  break;
 case 129:
  *VAR_8 = FUNC_1(&VAR_7->format, VAR_1);
  VAR_10 = VAR_3;
  break;
 case 128:
 default:
  if (VAR_7->format.code == VAR_3)
   VAR_10 = VAR_3;
  else
   VAR_10 = VAR_2;

  if (VAR_7->which == VAR_4)
   *VAR_8 = VAR_5->oif_pix_size[VAR_0];
  else
   *VAR_8 = FUNC_1(
      FUNC_2(VAR_9, VAR_6,
       130),
      VAR_0);
  break;
 }

 FUNC_0(&VAR_7->format, *VAR_8, VAR_10);
}
