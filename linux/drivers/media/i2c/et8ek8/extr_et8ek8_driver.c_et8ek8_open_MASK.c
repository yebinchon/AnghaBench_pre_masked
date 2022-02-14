
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct et8ek8_sensor {int dummy; } ;
struct et8ek8_reglist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct et8ek8_sensor*,int ,int ,int ) ;
 struct et8ek8_reglist* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct et8ek8_reglist*,struct v4l2_mbus_framefmt*) ;
 int FUNC_3 (struct v4l2_subdev*,int) ;
 int VAR_2 ;
 struct et8ek8_sensor* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3, struct v4l2_subdev_fh *VAR_4)
{
 struct et8ek8_sensor *VAR_5 = FUNC_4(VAR_3);
 struct v4l2_mbus_framefmt *VAR_6;
 struct et8ek8_reglist *VAR_7;

 VAR_7 = FUNC_1(&VAR_2, VAR_0);
 VAR_6 = FUNC_0(VAR_5, VAR_4->pad, 0,
      VAR_1);
 FUNC_2(VAR_7, VAR_6);

 return FUNC_3(VAR_3, 1);
}
