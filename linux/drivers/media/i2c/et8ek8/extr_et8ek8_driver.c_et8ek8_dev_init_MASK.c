
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dev; } ;
struct et8ek8_sensor {int version; int format; int current_reglist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct i2c_client*,int ,int ,int*) ;
 int FUNC_5 (struct i2c_client*,int *,int ) ;
 int FUNC_6 (struct et8ek8_sensor*) ;
 int FUNC_7 (struct et8ek8_sensor*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct et8ek8_sensor*) ;
 int FUNC_12 (struct et8ek8_sensor*) ;
 int VAR_9 ;
 struct et8ek8_sensor* FUNC_13 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_14 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_15(struct v4l2_subdev *VAR_10)
{
 struct et8ek8_sensor *VAR_11 = FUNC_13(VAR_10);
 struct i2c_client *VAR_12 = FUNC_14(VAR_10);
 int VAR_13, VAR_14, VAR_15;

 VAR_13 = FUNC_7(VAR_11);
 if (VAR_13) {
  FUNC_0(&VAR_12->dev, "could not power on\n");
  return VAR_13;
 }

 VAR_13 = FUNC_4(VAR_12, VAR_4,
       VAR_8, &VAR_14);
 if (!VAR_13)
  VAR_13 = FUNC_4(VAR_12, VAR_4,
        VAR_7, &VAR_15);
 if (VAR_13) {
  FUNC_0(&VAR_12->dev, "no et8ek8 sensor detected\n");
  goto out_poweroff;
 }

 VAR_11->version = (VAR_15 << 8) + VAR_14;
 if (VAR_11->version != VAR_5 && VAR_11->version != VAR_6)
  FUNC_1(&VAR_12->dev,
    "unknown version 0x%x detected, continuing anyway\n",
    VAR_11->version);

 VAR_13 = FUNC_9(VAR_12, &VAR_9);
 if (VAR_13) {
  FUNC_0(&VAR_12->dev,
   "invalid register list %s, import failed\n",
   VAR_1);
  goto out_poweroff;
 }

 VAR_11->current_reglist = FUNC_8(&VAR_9,
          VAR_2);
 if (!VAR_11->current_reglist) {
  FUNC_0(&VAR_12->dev,
   "invalid register list %s, no mode found\n",
   VAR_1);
  VAR_13 = -VAR_0;
  goto out_poweroff;
 }

 FUNC_10(VAR_11->current_reglist, &VAR_11->format);

 VAR_13 = FUNC_5(VAR_12, &VAR_9,
          VAR_3);
 if (VAR_13) {
  FUNC_0(&VAR_12->dev,
   "invalid register list %s, no POWERON mode found\n",
   VAR_1);
  goto out_poweroff;
 }
 VAR_13 = FUNC_12(VAR_11);
 if (VAR_13)
  goto out_poweroff;
 VAR_13 = FUNC_3(VAR_10);
 if (VAR_13)
  FUNC_2(&VAR_12->dev,
   "can not read OTP (EEPROM) memory from sensor\n");
 VAR_13 = FUNC_11(VAR_11);
 if (VAR_13)
  goto out_poweroff;

 VAR_13 = FUNC_6(VAR_11);
 if (VAR_13)
  goto out_poweroff;

 return 0;

out_poweroff:
 FUNC_6(VAR_11);

 return VAR_13;
}
