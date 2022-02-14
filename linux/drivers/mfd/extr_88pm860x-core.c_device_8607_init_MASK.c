
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_platform_data {scalar_t__ i2c_port; } ;
struct pm860x_chip {int buck3_double; int dev; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pm860x_chip*,struct pm860x_platform_data*) ;
 int FUNC_3 (struct pm860x_chip*,struct pm860x_platform_data*) ;
 int FUNC_4 (struct pm860x_chip*,struct pm860x_platform_data*) ;
 int FUNC_5 (struct pm860x_chip*,struct pm860x_platform_data*) ;
 int FUNC_6 (struct pm860x_chip*,struct pm860x_platform_data*) ;
 int FUNC_7 (struct pm860x_chip*,struct pm860x_platform_data*) ;
 int FUNC_8 (struct pm860x_chip*,struct pm860x_platform_data*) ;
 int FUNC_9 (struct i2c_client*,int ) ;
 int FUNC_10 (struct i2c_client*,int ,int,int) ;

__attribute__((used)) static void FUNC_11(struct pm860x_chip *VAR_7,
           struct i2c_client *VAR_8,
           struct pm860x_platform_data *VAR_9)
{
 int VAR_10, VAR_11;

 VAR_11 = FUNC_9(VAR_8, VAR_5);
 if (VAR_11 < 0) {
  FUNC_0(VAR_7->dev, "Failed to read CHIP ID: %d\n", VAR_11);
  goto out;
 }
 switch (VAR_11 & VAR_6) {
 case 0x40:
 case 0x50:
  FUNC_1(VAR_7->dev, "Marvell 88PM8607 (ID: %02x) detected\n",
    VAR_11);
  break;
 default:
  FUNC_0(VAR_7->dev,
   "Failed to detect Marvell 88PM8607. Chip ID: %02x\n",
   VAR_11);
  goto out;
 }

 VAR_11 = FUNC_9(VAR_8, VAR_3);
 if (VAR_11 < 0) {
  FUNC_0(VAR_7->dev, "Failed to read BUCK3 register: %d\n", VAR_11);
  goto out;
 }
 if (VAR_11 & VAR_4)
  VAR_7->buck3_double = 1;

 VAR_11 = FUNC_9(VAR_8, VAR_1);
 if (VAR_11 < 0) {
  FUNC_0(VAR_7->dev, "Failed to read MISC1 register: %d\n", VAR_11);
  goto out;
 }

 if (VAR_9 && (VAR_9->i2c_port == VAR_0))
  VAR_10 = VAR_2;
 else
  VAR_10 = 0;
 VAR_11 = FUNC_10(VAR_8, VAR_1, VAR_2, VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_7->dev, "Failed to access MISC1:%d\n", VAR_11);
  goto out;
 }

 VAR_11 = FUNC_3(VAR_7, VAR_9);
 if (VAR_11 < 0)
  goto out;

 FUNC_6(VAR_7, VAR_9);
 FUNC_7(VAR_7, VAR_9);
 FUNC_4(VAR_7, VAR_9);
 FUNC_8(VAR_7, VAR_9);
 FUNC_5(VAR_7, VAR_9);
 FUNC_2(VAR_7, VAR_9);
out:
 return;
}
