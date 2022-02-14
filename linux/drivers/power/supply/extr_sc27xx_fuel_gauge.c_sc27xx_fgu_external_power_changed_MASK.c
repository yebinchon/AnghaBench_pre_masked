
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {int battery; } ;
struct power_supply {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sc27xx_fgu_data* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static void FUNC_2(struct power_supply *VAR_0)
{
 struct sc27xx_fgu_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->battery);
}
