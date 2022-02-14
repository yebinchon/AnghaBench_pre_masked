
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bq2415x_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bq2415x_device*,int ,char*) ;
 struct power_supply* FUNC_1 (struct device*) ;
 struct bq2415x_device* FUNC_2 (struct power_supply*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5,
         struct device_attribute *VAR_6,
         char *VAR_7)
{
 struct power_supply *VAR_8 = FUNC_1(VAR_5);
 struct bq2415x_device *VAR_9 = FUNC_2(VAR_8);
 ssize_t VAR_10 = 0;

 VAR_10 += FUNC_0(VAR_9, VAR_2, VAR_7+VAR_10);
 VAR_10 += FUNC_0(VAR_9, VAR_0, VAR_7+VAR_10);
 VAR_10 += FUNC_0(VAR_9, VAR_4, VAR_7+VAR_10);
 VAR_10 += FUNC_0(VAR_9, VAR_3, VAR_7+VAR_10);
 VAR_10 += FUNC_0(VAR_9, VAR_1, VAR_7+VAR_10);
 return VAR_10;
}
