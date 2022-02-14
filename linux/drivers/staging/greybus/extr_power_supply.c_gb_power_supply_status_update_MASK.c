
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply {int changed; int update_interval; } ;


 int FUNC_0 (struct gb_power_supply*) ;
 int FUNC_1 (struct gb_power_supply*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct gb_power_supply *VAR_1)
{

 FUNC_1(VAR_1);

 if (!VAR_1->changed)
  return;

 VAR_1->update_interval = VAR_0;
 FUNC_0(VAR_1);
 VAR_1->changed = 0;
}
