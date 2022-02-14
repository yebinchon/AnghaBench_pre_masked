
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {int which; struct v4l2_mbus_framefmt format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct et8ek8_sensor {struct et8ek8_reglist* current_reglist; } ;
struct et8ek8_reglist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct et8ek8_sensor*,struct v4l2_subdev_pad_config*,int ,int ) ;
 struct et8ek8_reglist* FUNC_1 (int *,struct v4l2_mbus_framefmt*) ;
 int FUNC_2 (struct et8ek8_reglist*,struct v4l2_mbus_framefmt*) ;
 int FUNC_3 (struct et8ek8_sensor*) ;
 int VAR_2 ;
 struct et8ek8_sensor* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3,
     struct v4l2_subdev_pad_config *VAR_4,
     struct v4l2_subdev_format *VAR_5)
{
 struct et8ek8_sensor *VAR_6 = FUNC_4(VAR_3);
 struct v4l2_mbus_framefmt *VAR_7;
 struct et8ek8_reglist *VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5->pad, VAR_5->which);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_1(&VAR_2, &VAR_5->format);
 FUNC_2(VAR_8, &VAR_5->format);
 *VAR_7 = VAR_5->format;

 if (VAR_5->which == VAR_1) {
  VAR_6->current_reglist = VAR_8;
  FUNC_3(VAR_6);
 }

 return 0;
}
