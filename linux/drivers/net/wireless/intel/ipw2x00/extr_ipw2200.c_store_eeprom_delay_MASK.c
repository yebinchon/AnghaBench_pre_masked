
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int eeprom_delay; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct ipw_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*,int *) ;
 int FUNC_2 (char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct ipw_priv *VAR_4 = FUNC_0(VAR_0);
 FUNC_1(VAR_2, "%i", &VAR_4->eeprom_delay);
 return FUNC_2(VAR_2, VAR_3);
}
