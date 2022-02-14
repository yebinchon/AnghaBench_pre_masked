
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct power_supply {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ab8500_fg {int dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 struct power_supply* FUNC_1 (struct device*) ;
 struct ab8500_fg* FUNC_2 (struct power_supply*) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
        struct device_attribute *VAR_4,
        char *VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 struct power_supply *VAR_8 = FUNC_1(VAR_3);
 struct ab8500_fg *VAR_9 = FUNC_2(VAR_8);

 VAR_6 = FUNC_0(VAR_9->dev, VAR_0,
      VAR_1, &VAR_7);

 if (VAR_6 < 0)
  goto fail;

 return FUNC_3(VAR_5, VAR_2, "%d\n", (VAR_7 & 0x1));

fail:
 return VAR_6;
}
