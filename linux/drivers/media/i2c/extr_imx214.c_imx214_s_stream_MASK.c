
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct imx214 {int streaming; int dev; } ;


 int FUNC_0 (struct imx214*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct imx214* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct imx214 *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 if (VAR_2->streaming == VAR_1)
  return 0;

 if (VAR_1) {
  VAR_3 = FUNC_1(VAR_2->dev);
  if (VAR_3 < 0) {
   FUNC_3(VAR_2->dev);
   return VAR_3;
  }

  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 < 0)
   goto err_rpm_put;
 } else {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 < 0)
   goto err_rpm_put;
  FUNC_2(VAR_2->dev);
 }

 VAR_2->streaming = VAR_1;
 return 0;

err_rpm_put:
 FUNC_2(VAR_2->dev);
 return VAR_3;
}
