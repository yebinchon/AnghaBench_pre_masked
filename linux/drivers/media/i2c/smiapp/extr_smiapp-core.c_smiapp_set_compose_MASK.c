
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {scalar_t__ left; scalar_t__ top; } ;
struct v4l2_subdev_selection {int which; struct v4l2_rect r; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct smiapp_subdev {int dummy; } ;
struct smiapp_sensor {struct smiapp_subdev* binner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_rect**,struct v4l2_rect**,int ) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_selection*,struct v4l2_rect**,struct v4l2_rect*) ;
 int FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_selection*,struct v4l2_rect**,struct v4l2_rect*) ;
 int FUNC_4 (struct smiapp_sensor*) ;
 struct smiapp_sensor* FUNC_5 (struct v4l2_subdev*) ;
 struct smiapp_subdev* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_3,
         struct v4l2_subdev_pad_config *VAR_4,
         struct v4l2_subdev_selection *VAR_5)
{
 struct smiapp_sensor *VAR_6 = FUNC_5(VAR_3);
 struct smiapp_subdev *VAR_7 = FUNC_6(VAR_3);
 struct v4l2_rect *VAR_8, *VAR_9[VAR_0];

 FUNC_0(VAR_3, VAR_4, VAR_9, &VAR_8, VAR_5->which);

 VAR_5->r.top = 0;
 VAR_5->r.left = 0;

 if (VAR_7 == VAR_6->binner)
  FUNC_2(VAR_3, VAR_4, VAR_5, VAR_9, VAR_8);
 else
  FUNC_3(VAR_3, VAR_4, VAR_5, VAR_9, VAR_8);

 *VAR_8 = VAR_5->r;
 FUNC_1(VAR_3, VAR_4, VAR_5->which, VAR_1);

 if (VAR_5->which == VAR_2)
  return FUNC_4(VAR_6);

 return 0;
}
