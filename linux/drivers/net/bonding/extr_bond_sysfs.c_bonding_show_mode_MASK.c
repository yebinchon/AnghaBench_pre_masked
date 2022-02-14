
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bonding {int dummy; } ;
struct bond_opt_value {char* string; } ;
typedef int ssize_t ;


 int FUNC_0 (struct bonding*) ;
 int VAR_0 ;
 struct bond_opt_value* FUNC_1 (int ,int) ;
 int FUNC_2 (char*,char*,char*,int) ;
 struct bonding* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct bonding *VAR_4 = FUNC_3(VAR_1);
 const struct bond_opt_value *VAR_5;

 VAR_5 = FUNC_1(VAR_0, FUNC_0(VAR_4));

 return FUNC_2(VAR_3, "%s %d\n", VAR_5->string, FUNC_0(VAR_4));
}
