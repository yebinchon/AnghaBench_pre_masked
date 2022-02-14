
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_soc_pmic {int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ) ;
 struct intel_soc_pmic* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 struct intel_soc_pmic *VAR_7 = FUNC_1(VAR_2);

 VAR_5 = FUNC_2(VAR_7->regmap, VAR_1, &VAR_6);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2, "Failed to read 0x%lx\n", VAR_1);
  return -VAR_0;
 }

 return FUNC_3(VAR_4, "0x%02x\n", VAR_6);
}
