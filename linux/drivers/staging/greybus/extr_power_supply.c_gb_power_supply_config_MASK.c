
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply {int id; struct gb_power_supplies* supplies; } ;
struct gb_power_supplies {struct gb_power_supply* supply; } ;


 int FUNC_0 (struct gb_power_supply*) ;
 int FUNC_1 (struct gb_power_supply*) ;

__attribute__((used)) static int FUNC_2(struct gb_power_supplies *VAR_0, int VAR_1)
{
 struct gb_power_supply *VAR_2 = &VAR_0->supply[VAR_1];
 int VAR_3;

 VAR_2->supplies = VAR_0;
 VAR_2->id = VAR_1;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_2);
}
