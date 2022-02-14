
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn544_i2c_phy {struct i2c_client* i2c_dev; } ;
struct pn544_i2c_fw_frame_response {int status; } ;
struct i2c_client {int dev; } ;
typedef int response ;


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
 int FUNC_0 (struct i2c_client*,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct pn544_i2c_phy *VAR_10)
{
 int VAR_11;
 struct pn544_i2c_fw_frame_response VAR_12;
 struct i2c_client *VAR_13 = VAR_10->i2c_dev;

 VAR_11 = FUNC_0(VAR_13, (char *) &VAR_12, sizeof(VAR_12));
 if (VAR_11 != sizeof(VAR_12)) {
  FUNC_1(&VAR_13->dev, "cannot read fw status\n");
  return -VAR_3;
 }

 FUNC_2(3000, 6000);

 switch (VAR_12.status) {
 case 0:
  return 0;
 case 138:
  return VAR_12.status;
 case 131:
  return -VAR_9;
 case 140:
  return -VAR_4;
 case 141:
  return -VAR_0;
 case 132:
  return -VAR_8;
 case 134:
  return -VAR_2;
 case 130:
  return -VAR_7;
 case 135:
  return -VAR_1;
 case 136:
  return -VAR_5;
 case 129:
  return -VAR_2;
 case 133:
  return -VAR_6;
 case 137:
  return -VAR_0;
 case 128:
 case 139:
  return -VAR_3;
 default:
  return -VAR_3;
 }
}
