
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
 int FUNC_0 (struct device*,char*,unsigned int,int ) ;
 struct intel_soc_pmic* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 struct intel_soc_pmic *VAR_8 = FUNC_1(VAR_2);

 VAR_6 = FUNC_2(VAR_4, 0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_8->regmap, VAR_1, VAR_7);
 if (VAR_6) {
  FUNC_0(VAR_2, "Failed to write value 0x%02x to address 0x%lx",
   VAR_7, VAR_1);
  return -VAR_0;
 }
 return VAR_5;
}
