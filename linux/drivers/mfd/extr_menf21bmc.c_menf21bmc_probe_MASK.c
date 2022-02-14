
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int,int,int) ;
 int FUNC_3 (int *,int ,int ,int ,int *,int ,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct i2c_client*) ;

__attribute__((used)) static int
FUNC_7(struct i2c_client *VAR_8, const struct i2c_device_id *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = FUNC_4(VAR_8->adapter,
          VAR_5 |
          VAR_6 |
          VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_10 = FUNC_5(VAR_8, VAR_1);
 if (VAR_10 < 0) {
  FUNC_1(&VAR_8->dev, "failed to get BMC major revision\n");
  return VAR_10;
 }

 VAR_11 = FUNC_5(VAR_8, VAR_2);
 if (VAR_11 < 0) {
  FUNC_1(&VAR_8->dev, "failed to get BMC minor revision\n");
  return VAR_11;
 }

 VAR_12 = FUNC_5(VAR_8, VAR_0);
 if (VAR_12 < 0) {
  FUNC_1(&VAR_8->dev, "failed to get BMC main revision\n");
  return VAR_12;
 }

 FUNC_2(&VAR_8->dev, "FW Revision: %02d.%02d.%02d\n",
   VAR_10, VAR_11, VAR_12);





 VAR_13 = FUNC_6(VAR_8);
 if (VAR_13 < 0) {
  FUNC_1(&VAR_8->dev, "failed to leave production mode\n");
  return VAR_13;
 }

 VAR_13 = FUNC_3(&VAR_8->dev, 0, VAR_7,
       FUNC_0(VAR_7), ((void*)0), 0, ((void*)0));
 if (VAR_13 < 0) {
  FUNC_1(&VAR_8->dev, "failed to add BMC sub-devices\n");
  return VAR_13;
 }

 return 0;
}
