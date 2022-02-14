
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bq2415x_device {int automode; int reported_mode; } ;
typedef size_t ssize_t ;
typedef enum bq2415x_mode { ____Placeholder_bq2415x_mode } bq2415x_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct bq2415x_device*) ;
 int FUNC_1 (struct bq2415x_device*) ;
 int FUNC_2 (struct bq2415x_device*,int) ;
 struct power_supply* FUNC_3 (struct device*) ;
 struct bq2415x_device* FUNC_4 (struct power_supply*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_6,
          struct device_attribute *VAR_7,
          const char *VAR_8,
          size_t VAR_9)
{
 struct power_supply *VAR_10 = FUNC_3(VAR_6);
 struct bq2415x_device *VAR_11 = FUNC_4(VAR_10);
 enum bq2415x_mode VAR_12;
 int VAR_13 = 0;

 if (FUNC_5(VAR_8, "auto", 4) == 0) {
  if (VAR_11->automode < 0)
   return -VAR_5;
  VAR_11->automode = 1;
  VAR_12 = VAR_11->reported_mode;
 } else if (FUNC_5(VAR_8, "off", 3) == 0) {
  if (VAR_11->automode > 0)
   VAR_11->automode = 0;
  VAR_12 = VAR_4;
 } else if (FUNC_5(VAR_8, "none", 4) == 0) {
  if (VAR_11->automode > 0)
   VAR_11->automode = 0;
  VAR_12 = VAR_3;
 } else if (FUNC_5(VAR_8, "host", 4) == 0) {
  if (VAR_11->automode > 0)
   VAR_11->automode = 0;
  VAR_12 = VAR_2;
 } else if (FUNC_5(VAR_8, "dedicated", 9) == 0) {
  if (VAR_11->automode > 0)
   VAR_11->automode = 0;
  VAR_12 = VAR_1;
 } else if (FUNC_5(VAR_8, "boost", 5) == 0) {
  if (VAR_11->automode > 0)
   VAR_11->automode = 0;
  VAR_12 = VAR_0;
 } else if (FUNC_5(VAR_8, "reset", 5) == 0) {
  FUNC_0(VAR_11);
  FUNC_1(VAR_11);
  if (VAR_11->automode <= 0)
   return VAR_9;
  VAR_11->automode = 1;
  VAR_12 = VAR_11->reported_mode;
 } else {
  return -VAR_5;
 }

 VAR_13 = FUNC_2(VAR_11, VAR_12);
 if (VAR_13 < 0)
  return VAR_13;
 return VAR_9;
}
