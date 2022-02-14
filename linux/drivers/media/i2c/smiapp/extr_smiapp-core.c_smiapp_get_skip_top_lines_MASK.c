
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct smiapp_sensor {int image_start; } ;


 struct smiapp_sensor* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0, u32 *VAR_1)
{
 struct smiapp_sensor *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->image_start;

 return 0;
}
