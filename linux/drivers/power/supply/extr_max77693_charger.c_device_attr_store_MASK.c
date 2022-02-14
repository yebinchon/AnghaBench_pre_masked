
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct max77693_charger max77693_charger ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct max77693_charger* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3,
  int (*VAR_4)(struct max77693_charger *, unsigned long))
{
 struct max77693_charger *VAR_5 = FUNC_0(VAR_0);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, 10, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = VAR_4(VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 return VAR_3;
}
