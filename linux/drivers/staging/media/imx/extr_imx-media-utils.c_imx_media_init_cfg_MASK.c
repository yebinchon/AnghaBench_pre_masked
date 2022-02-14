
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {unsigned int pad; struct v4l2_mbus_framefmt format; int which; } ;
struct TYPE_2__ {unsigned int num_pads; } ;
struct v4l2_subdev {TYPE_1__ entity; } ;
typedef int format ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev_format*,int ,int) ;
 int FUNC_1 (struct v4l2_subdev*,unsigned int,int ,int *,struct v4l2_subdev_format*) ;
 struct v4l2_mbus_framefmt* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,unsigned int) ;

int FUNC_3(struct v4l2_subdev *VAR_2,
         struct v4l2_subdev_pad_config *VAR_3)
{
 struct v4l2_mbus_framefmt *VAR_4;
 struct v4l2_subdev_format VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2->entity.num_pads; VAR_6++) {
  FUNC_0(&VAR_5, 0, sizeof(VAR_5));

  VAR_5.pad = VAR_6;
  VAR_5.which = VAR_0;
  VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_1, ((void*)0), &VAR_5);
  if (VAR_7)
   continue;

  VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_6);
  *VAR_4 = VAR_5.format;
 }

 return 0;
}
