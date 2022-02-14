
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int lacp_fast; } ;
struct bonding {TYPE_1__ params; } ;
struct bond_opt_value {char* string; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct bond_opt_value* FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char*,char*,int) ;
 struct bonding* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct bonding *VAR_4 = FUNC_2(VAR_1);
 const struct bond_opt_value *VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_4->params.lacp_fast);

 return FUNC_1(VAR_3, "%s %d\n", VAR_5->string, VAR_4->params.lacp_fast);
}
