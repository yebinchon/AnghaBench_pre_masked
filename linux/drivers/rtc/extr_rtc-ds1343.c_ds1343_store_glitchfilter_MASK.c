
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1343_priv {int map; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct ds1343_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct ds1343_priv *VAR_7 = FUNC_0(VAR_3);
 int VAR_8;

 FUNC_1(VAR_7->map, VAR_0, &VAR_8);

 if (FUNC_3(VAR_5, "enabled", 7) == 0)
  VAR_8 |= VAR_1;

 else if (FUNC_3(VAR_5, "disabled", 8) == 0)
  VAR_8 &= ~(VAR_1);

 else
  return -VAR_2;

 FUNC_2(VAR_7->map, VAR_0, VAR_8);

 return VAR_6;
}
