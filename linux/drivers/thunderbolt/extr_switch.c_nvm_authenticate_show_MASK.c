
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_switch {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct tb_switch*,int*) ;
 int FUNC_1 (char*,char*,int) ;
 struct tb_switch* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct tb_switch *VAR_3 = FUNC_2(VAR_0);
 u32 VAR_4;

 FUNC_0(VAR_3, &VAR_4);
 return FUNC_1(VAR_2, "%#x\n", VAR_4);
}
