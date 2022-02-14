
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_6,
       int VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_3(VAR_6);
 int VAR_9, VAR_10 = 0;

 if ((VAR_7 != 0) && (VAR_7 != 1024) &&
     (VAR_7 != 512)) {
  FUNC_0(VAR_6, "autocalibration value outside permitted range\n");
  return -VAR_5;
 }

 VAR_10 = FUNC_1(VAR_8, VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_7 == 0) {
  VAR_10 &= ~(VAR_2 | VAR_1);
 } else if (VAR_7 == 1024) {

  VAR_10 |= VAR_1;
  VAR_10 &= ~(VAR_2);
 } else {

  VAR_10 |= (VAR_1 | VAR_2);
 }


 VAR_9 = FUNC_2(VAR_8, VAR_3,
        VAR_0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6, "Failed to write CONFIG_KEY register\n");
  return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_8, VAR_4, VAR_10);

 return VAR_9;
}
