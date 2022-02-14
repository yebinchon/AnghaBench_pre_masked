
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_wmi {scalar_t__ fan_boost_mode_mask; scalar_t__ fan_boost_mode; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct asus_wmi* FUNC_0 (struct device*) ;
 int FUNC_1 (struct asus_wmi*) ;
 int FUNC_2 (char const*,int,scalar_t__*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_6,
        struct device_attribute *VAR_7,
        const char *VAR_8, size_t VAR_9)
{
 int VAR_10;
 u8 VAR_11;
 struct asus_wmi *VAR_12 = FUNC_0(VAR_6);
 u8 VAR_13 = VAR_12->fan_boost_mode_mask;

 VAR_10 = FUNC_2(VAR_8, 10, &VAR_11);
 if (VAR_10 < 0) {
  FUNC_3("Trying to store invalid value\n");
  return VAR_10;
 }

 if (VAR_11 == VAR_1) {
  if (!(VAR_13 & VAR_2))
   return -VAR_5;
 } else if (VAR_11 == VAR_3) {
  if (!(VAR_13 & VAR_4))
   return -VAR_5;
 } else if (VAR_11 != VAR_0) {
  return -VAR_5;
 }

 VAR_12->fan_boost_mode = VAR_11;
 FUNC_1(VAR_12);

 return VAR_10;
}
