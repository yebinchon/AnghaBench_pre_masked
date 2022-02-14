
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct smiapp_sensor {scalar_t__ binner; scalar_t__ pixel_array; scalar_t__ scaler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smiapp_sensor*,scalar_t__,scalar_t__,int ,int ,int) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 struct smiapp_sensor* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_5)
{
 struct smiapp_sensor *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 if (VAR_6->scaler) {
  VAR_7 = FUNC_0(
   VAR_6, VAR_6->binner, VAR_6->scaler,
   VAR_3, VAR_2,
   VAR_0 | VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }

 VAR_7 = FUNC_0(
  VAR_6, VAR_6->pixel_array, VAR_6->binner,
  VAR_4, VAR_2,
  VAR_0 | VAR_1);
 if (VAR_7)
  goto out_err;

 return 0;

out_err:
 FUNC_1(VAR_5);

 return VAR_7;
}
