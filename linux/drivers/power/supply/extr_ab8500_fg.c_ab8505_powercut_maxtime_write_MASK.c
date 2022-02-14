
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct power_supply {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ab8500_fg {int dev; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 struct power_supply* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (char const*,int,int*) ;
 struct ab8500_fg* FUNC_4 (struct power_supply*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct power_supply *VAR_8 = FUNC_2(VAR_2);
 struct ab8500_fg *VAR_9 = FUNC_4(VAR_8);

 if (FUNC_3(VAR_4, 10, &VAR_7))
  goto fail;

 if (VAR_7 > 0x7F) {
  FUNC_1(VAR_2, "Incorrect parameter, echo 0 (0.0s) - 127 (1.98s) for maxtime\n");
  goto fail;
 }

 VAR_6 = FUNC_0(VAR_9->dev, VAR_0,
  VAR_1, (u8)VAR_7);

 if (VAR_6 < 0)
  FUNC_1(VAR_2, "Failed to set AB8505_RTC_PCUT_MAX_TIME_REG\n");

fail:
 return VAR_5;
}
