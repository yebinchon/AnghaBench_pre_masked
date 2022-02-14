
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct video_device {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9t031 {int xskip; int yskip; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct v4l2_subdev* FUNC_2 (struct video_device*) ;
 struct mt9t031* FUNC_3 (struct i2c_client*) ;
 struct video_device* FUNC_4 (struct device*) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2)
{
 struct video_device *VAR_3 = FUNC_4(VAR_2);
 struct v4l2_subdev *VAR_4 = FUNC_2(VAR_3);
 struct i2c_client *VAR_5 = FUNC_5(VAR_4);
 struct mt9t031 *VAR_6 = FUNC_3(VAR_5);

 int VAR_7;
 u16 VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_6->xskip, (u16)3);
 VAR_9 = FUNC_0(VAR_6->yskip, (u16)3);

 VAR_7 = FUNC_1(VAR_5, VAR_0,
  ((VAR_8 - 1) << 4) | (VAR_6->xskip - 1));
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_1,
  ((VAR_9 - 1) << 4) | (VAR_6->yskip - 1));
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
