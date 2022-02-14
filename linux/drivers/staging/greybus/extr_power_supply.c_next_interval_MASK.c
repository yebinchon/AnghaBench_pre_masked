
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply {int update_interval; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct gb_power_supply *VAR_1)
{
 if (VAR_1->update_interval == VAR_0)
  return;


 VAR_1->update_interval *= 2;
 if (VAR_1->update_interval > VAR_0)
  VAR_1->update_interval = VAR_0;
}
