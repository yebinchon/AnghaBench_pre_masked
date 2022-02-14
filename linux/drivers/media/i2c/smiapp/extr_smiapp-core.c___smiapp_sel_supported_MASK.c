
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_selection {int target; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct smiapp_subdev {int source_pad; } ;
struct smiapp_sensor {int * limits; struct smiapp_subdev* scaler; struct smiapp_subdev* binner; struct smiapp_subdev* pixel_array; struct smiapp_subdev* src; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 struct smiapp_sensor* FUNC_0 (struct v4l2_subdev*) ;
 struct smiapp_subdev* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_8,
      struct v4l2_subdev_selection *VAR_9)
{
 struct smiapp_sensor *VAR_10 = FUNC_0(VAR_8);
 struct smiapp_subdev *VAR_11 = FUNC_1(VAR_8);


 switch (VAR_9->target) {
 case 130:
 case 129:
  if (VAR_11 == VAR_10->pixel_array
      && VAR_9->pad == VAR_6)
   return 0;
  if (VAR_11 == VAR_10->src
      && VAR_9->pad == VAR_5)
   return 0;
  if (VAR_11 == VAR_10->scaler
      && VAR_9->pad == VAR_4
      && VAR_10->limits[VAR_2]
      == VAR_1)
   return 0;
  return -VAR_0;
 case 128:
  if (VAR_11 == VAR_10->pixel_array
      && VAR_9->pad == VAR_6)
   return 0;
  return -VAR_0;
 case 132:
 case 131:
  if (VAR_9->pad == VAR_11->source_pad)
   return -VAR_0;
  if (VAR_11 == VAR_10->binner)
   return 0;
  if (VAR_11 == VAR_10->scaler
      && VAR_10->limits[VAR_3]
      != VAR_7)
   return 0;

 default:
  return -VAR_0;
 }
}
