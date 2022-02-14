
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct et8ek8_sensor {int dummy; } ;


 int FUNC_0 (struct et8ek8_sensor*) ;
 int FUNC_1 (struct et8ek8_sensor*) ;
 int FUNC_2 (struct et8ek8_sensor*) ;
 struct et8ek8_sensor* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct et8ek8_sensor *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 if (!VAR_1)
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_2(VAR_2);
}
