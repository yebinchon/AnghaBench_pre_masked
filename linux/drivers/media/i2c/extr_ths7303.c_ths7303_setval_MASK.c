
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct ths7303_state {struct ths7303_platform_data* pdata; } ;
struct ths7303_platform_data {int ch_1; int ch_2; int ch_3; } ;
struct i2c_client {int dummy; } ;
typedef enum ths7303_filter_mode { ____Placeholder_ths7303_filter_mode } ths7303_filter_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 struct ths7303_state* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_4,
     enum ths7303_filter_mode VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_3(VAR_4);
 struct ths7303_state *VAR_7 = FUNC_2(VAR_4);
 const struct ths7303_platform_data *VAR_8 = VAR_7->pdata;
 u8 VAR_9, VAR_10 = 0;
 int VAR_11, VAR_12 = 0;

 if (!VAR_6)
  return -VAR_0;

 switch (VAR_5) {
 case 131:
  VAR_10 = 0x3;
  break;
 case 128:
  VAR_10 = 0x2;
  break;
 case 129:
  VAR_10 = 0x1;
  break;
 case 130:
  VAR_10 = 0x0;
  break;
 default:

  VAR_12 = 1;
 }

 VAR_9 = (VAR_10 << 6) | (VAR_10 << 3);
 if (!VAR_12)
  VAR_9 |= (VAR_8->ch_1 & 0x27);
 VAR_11 = FUNC_1(VAR_4, VAR_1, VAR_9);
 if (VAR_11)
  goto out;

 VAR_9 = (VAR_10 << 6) | (VAR_10 << 3);
 if (!VAR_12)
  VAR_9 |= (VAR_8->ch_2 & 0x27);
 VAR_11 = FUNC_1(VAR_4, VAR_2, VAR_9);
 if (VAR_11)
  goto out;

 VAR_9 = (VAR_10 << 6) | (VAR_10 << 3);
 if (!VAR_12)
  VAR_9 |= (VAR_8->ch_3 & 0x27);
 VAR_11 = FUNC_1(VAR_4, VAR_3, VAR_9);
 if (VAR_11)
  goto out;

 return 0;
out:
 FUNC_0("write byte data failed\n");
 return VAR_11;
}
