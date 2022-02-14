
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77693_charger {TYPE_1__* max77693; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct max77693_charger* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (char*,int ,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
  struct device_attribute *VAR_5, char *VAR_6)
{
 struct max77693_charger *VAR_7 = FUNC_0(VAR_4);
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_7->max77693->regmap, VAR_2,
   &VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_8 &= VAR_0;
 VAR_8 >>= VAR_1;

 if (VAR_8 <= 0x04)
  VAR_9 = 100000 + VAR_8 * 25000;
 else
  VAR_9 = VAR_8 * 50000;

 return FUNC_2(VAR_6, VAR_3, "%u\n", VAR_9);
}
