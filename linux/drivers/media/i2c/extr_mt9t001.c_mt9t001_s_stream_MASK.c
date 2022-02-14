
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int width; int height; int left; int top; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;
struct mt9t001_platform_data {scalar_t__ clk_pol; } ;
struct mt9t001 {struct v4l2_rect crop; struct v4l2_mbus_framefmt format; } ;
struct TYPE_2__ {struct mt9t001_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 unsigned int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct mt9t001*,int const,int const) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct mt9t001* FUNC_3 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_9, int VAR_10)
{
 const u16 VAR_11 = VAR_2;
 struct i2c_client *VAR_12 = FUNC_4(VAR_9);
 struct mt9t001_platform_data *VAR_13 = VAR_12->dev.platform_data;
 struct mt9t001 *VAR_14 = FUNC_3(VAR_9);
 struct v4l2_mbus_framefmt *VAR_15 = &VAR_14->format;
 struct v4l2_rect *VAR_16 = &VAR_14->crop;
 unsigned int VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 if (!VAR_10)
  return FUNC_1(VAR_14, VAR_11, 0);


 if (VAR_13->clk_pol) {
  VAR_19 = FUNC_2(VAR_12, VAR_3,
         VAR_4);
  if (VAR_19 < 0)
   return VAR_19;
 }


 VAR_17 = FUNC_0(VAR_16->width, VAR_15->width);
 VAR_18 = FUNC_0(VAR_16->height, VAR_15->height);

 VAR_19 = FUNC_2(VAR_12, VAR_5, VAR_17 - 1);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_2(VAR_12, VAR_0, VAR_18 - 1);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_2(VAR_12, VAR_1, VAR_16->left);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_2(VAR_12, VAR_6, VAR_16->top);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_2(VAR_12, VAR_8, VAR_16->width - 1);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_2(VAR_12, VAR_7, VAR_16->height - 1);
 if (VAR_19 < 0)
  return VAR_19;


 return FUNC_1(VAR_14, 0, VAR_11);
}
