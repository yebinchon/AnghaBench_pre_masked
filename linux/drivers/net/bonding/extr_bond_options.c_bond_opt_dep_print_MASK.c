
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bond_params {int mode; } ;
struct bonding {int dev; struct bond_params params; } ;
struct bond_option {int name; int unsuppmodes; } ;
struct bond_opt_value {int value; int string; } ;


 int VAR_0 ;
 struct bond_opt_value* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct bonding *VAR_1,
          const struct bond_option *VAR_2)
{
 const struct bond_opt_value *VAR_3;
 struct bond_params *VAR_4;

 VAR_4 = &VAR_1->params;
 VAR_3 = FUNC_0(VAR_0, VAR_4->mode);
 if (FUNC_2(VAR_4->mode, &VAR_2->unsuppmodes))
  FUNC_1(VAR_1->dev, "option %s: mode dependency failed, not supported in mode %s(%llu)\n",
      VAR_2->name, VAR_3->string, VAR_3->value);
}
