
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int width; int height; int left; int top; } ;
struct ov5642 {int total_width; int total_height; TYPE_1__ crop_rect; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct ov5642* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_12)
{
 struct i2c_client *VAR_13 = FUNC_2(VAR_12);
 struct ov5642 *VAR_14 = FUNC_1(VAR_13);
 int VAR_15 = VAR_14->crop_rect.width;
 int VAR_16 = VAR_14->crop_rect.height;
 int VAR_17 = VAR_14->total_width;
 int VAR_18 = VAR_14->total_height;
 int VAR_19 = (VAR_0 - VAR_15) / 2;
 int VAR_20 = (VAR_1 - VAR_16) / 2;
 int VAR_21;





 VAR_21 = FUNC_0(VAR_13, VAR_9, VAR_19);
 if (!VAR_21)
  VAR_21 = FUNC_0(VAR_13, VAR_10, VAR_20);
 if (!VAR_21) {
  VAR_14->crop_rect.left = VAR_19;
  VAR_14->crop_rect.top = VAR_20;
 }

 if (!VAR_21)
  VAR_21 = FUNC_0(VAR_13, VAR_11, VAR_15);
 if (!VAR_21)
  VAR_21 = FUNC_0(VAR_13, VAR_8, VAR_16);
 if (VAR_21)
  return VAR_21;
 VAR_14->crop_rect.width = VAR_15;
 VAR_14->crop_rect.height = VAR_16;


 VAR_21 = FUNC_0(VAR_13, VAR_7, VAR_15);
 if (!VAR_21)
  VAR_21 = FUNC_0(VAR_13, VAR_4, VAR_16);


 if (!VAR_21)
  VAR_21 = FUNC_0(VAR_13, VAR_6, VAR_17);
 if (!VAR_21)
  VAR_21 = FUNC_0(VAR_13, VAR_5, VAR_18);


 if (!VAR_21)
  VAR_21 = FUNC_0(VAR_13, VAR_2, VAR_15);
 if (!VAR_21)
  VAR_21 = FUNC_0(VAR_13, VAR_3, VAR_16);

 return VAR_21;
}
