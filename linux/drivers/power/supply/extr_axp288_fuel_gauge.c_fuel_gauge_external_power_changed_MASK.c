
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct axp288_fg_info {int bat; } ;


 int FUNC_0 (int ) ;
 struct axp288_fg_info* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static void FUNC_2(struct power_supply *VAR_0)
{
 struct axp288_fg_info *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->bat);
}
