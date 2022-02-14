
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 struct i2c_client* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
    struct device_attribute *VAR_6,
    const char *VAR_7, size_t VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_4(VAR_5->parent);
 int VAR_10, VAR_11, VAR_12 = 0;

 if (FUNC_3(VAR_7, "rc", 2) == 0) {
  VAR_12 = 1;
 } else if (FUNC_3(VAR_7, "xtal", 4) == 0) {
  VAR_12 = 0;
 } else {
  FUNC_0(VAR_5, "Oscillator selection value outside permitted ones\n");
  return -VAR_4;
 }

 VAR_11 = FUNC_1(VAR_9, VAR_3);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_12 == 0)
  VAR_11 &= ~(VAR_1);
 else
  VAR_11 |= (VAR_1);


 VAR_10 = FUNC_2(VAR_9, VAR_2,
        VAR_0);
 if (VAR_10 < 0) {
  FUNC_0(VAR_5, "Failed to write CONFIG_KEY register\n");
  return VAR_10;
 }

 VAR_10 = FUNC_2(VAR_9, VAR_3, VAR_11);
 if (VAR_10 < 0) {
  FUNC_0(VAR_5, "Failed to write Oscillator Control register\n");
  return VAR_10;
 }

 return VAR_10 ? VAR_10 : VAR_8;
}
