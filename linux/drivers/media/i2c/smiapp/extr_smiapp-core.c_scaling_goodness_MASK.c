
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct smiapp_sensor {int* limits; } ;
struct i2c_client {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int,int,int,int,int) ;
 struct smiapp_sensor* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_5, int VAR_6, int VAR_7,
       int VAR_8, int VAR_9, u32 VAR_10)
{
 struct smiapp_sensor *VAR_11 = FUNC_2(VAR_5);
 struct i2c_client *VAR_12 = FUNC_3(VAR_5);
 int VAR_13 = 0;

 VAR_6 &= ~1;
 VAR_7 &= ~1;
 VAR_8 &= ~1;
 VAR_9 &= ~1;

 if (VAR_10 & VAR_3) {
  if (VAR_6 < VAR_7)
   VAR_13 -= VAR_0;
  if (VAR_8 < VAR_9)
   VAR_13 -= VAR_0;
 }

 if (VAR_10 & VAR_4) {
  if (VAR_6 > VAR_7)
   VAR_13 -= VAR_0;
  if (VAR_8 > VAR_9)
   VAR_13 -= VAR_0;
 }

 VAR_13 -= FUNC_0(VAR_6 - VAR_7);
 VAR_13 -= FUNC_0(VAR_8 - VAR_9);

 if (VAR_6 < VAR_11->limits[VAR_2])
  VAR_13 -= VAR_1;

 FUNC_1(&VAR_12->dev, "w %d ask_w %d h %d ask_h %d goodness %d\n",
  VAR_6, VAR_7, VAR_8, VAR_9, VAR_13);

 return VAR_13;
}
