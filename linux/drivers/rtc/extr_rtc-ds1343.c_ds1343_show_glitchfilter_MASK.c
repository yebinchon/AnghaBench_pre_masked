
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1343_priv {int map; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ds1343_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct ds1343_priv *VAR_5 = FUNC_0(VAR_2);
 int VAR_6, VAR_7;

 FUNC_1(VAR_5->map, VAR_0, &VAR_7);

 VAR_6 = !!(VAR_7 & VAR_1);

 if (VAR_6)
  return FUNC_2(VAR_4, "enabled\n");
 else
  return FUNC_2(VAR_4, "disabled\n");
}
