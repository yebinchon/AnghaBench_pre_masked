
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; } ;
struct smiapp_subdev {int dummy; } ;
struct smiapp_sensor {int binning_horizontal; int binning_vertical; struct smiapp_subdev* binner; int scaling_mode; int * limits; int scale_m; struct smiapp_subdev* scaler; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_rect**,struct v4l2_rect**,int) ;
 struct smiapp_sensor* FUNC_2 (struct v4l2_subdev*) ;
 struct smiapp_subdev* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_subdev *VAR_6,
        struct v4l2_subdev_pad_config *VAR_7, int VAR_8,
        int VAR_9)
{
 struct smiapp_sensor *VAR_10 = FUNC_2(VAR_6);
 struct smiapp_subdev *VAR_11 = FUNC_3(VAR_6);
 struct v4l2_rect *VAR_12, *VAR_13[VAR_1];

 FUNC_1(VAR_6, VAR_7, VAR_13, &VAR_12, VAR_8);

 switch (VAR_9) {
 case 128:
  VAR_12->width = VAR_13[VAR_2]->width;
  VAR_12->height = VAR_13[VAR_2]->height;
  if (VAR_8 == VAR_5) {
   if (VAR_11 == VAR_10->scaler) {
    VAR_10->scale_m =
     VAR_10->limits[
      VAR_0];
    VAR_10->scaling_mode =
     VAR_4;
   } else if (VAR_11 == VAR_10->binner) {
    VAR_10->binning_horizontal = 1;
    VAR_10->binning_vertical = 1;
   }
  }

 case 129:
  *VAR_13[VAR_3] = *VAR_12;
  break;
 default:
  FUNC_0();
 }
}
