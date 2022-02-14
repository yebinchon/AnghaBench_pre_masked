
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; } ;
struct v4l2_mbus_framefmt {int field; int code; int height; int width; } ;
struct smiapp_subdev {unsigned int npads; struct smiapp_sensor* sensor; } ;
struct smiapp_sensor {int mutex; struct smiapp_subdev* pixel_array; TYPE_1__* internal_csi_format; } ;
struct TYPE_2__ {int code; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct smiapp_subdev*,struct v4l2_rect*) ;
 struct smiapp_subdev* FUNC_3 (struct v4l2_subdev*) ;
 struct v4l2_rect* FUNC_4 (struct v4l2_subdev*,int ,unsigned int) ;
 struct v4l2_rect* FUNC_5 (struct v4l2_subdev*,int ,unsigned int) ;
 struct v4l2_mbus_framefmt* FUNC_6 (struct v4l2_subdev*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_1, struct v4l2_subdev_fh *VAR_2)
{
 struct smiapp_subdev *VAR_3 = FUNC_3(VAR_1);
 struct smiapp_sensor *VAR_4 = VAR_3->sensor;
 unsigned int VAR_5;

 FUNC_0(&VAR_4->mutex);

 for (VAR_5 = 0; VAR_5 < VAR_3->npads; VAR_5++) {
  struct v4l2_mbus_framefmt *VAR_6 =
   FUNC_6(VAR_1, VAR_2->pad, VAR_5);
  struct v4l2_rect *VAR_7 =
   FUNC_5(VAR_1, VAR_2->pad, VAR_5);
  struct v4l2_rect *VAR_8;

  FUNC_2(VAR_3, VAR_7);

  VAR_6->width = VAR_7->width;
  VAR_6->height = VAR_7->height;
  VAR_6->code = VAR_4->internal_csi_format->code;
  VAR_6->field = VAR_0;

  if (VAR_3 != VAR_4->pixel_array)
   continue;

  VAR_8 = FUNC_4(VAR_1, VAR_2->pad, VAR_5);
  *VAR_8 = *VAR_7;
 }

 FUNC_1(&VAR_4->mutex);

 return 0;
}
