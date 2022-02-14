
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct port_data {struct charger_data* charger; } ;
struct charger_data {int num_registered_psy; int * ports; } ;


 int FUNC_0 (int ,int) ;
 struct port_data* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static void FUNC_2(struct power_supply *VAR_0)
{
 struct port_data *VAR_1 = FUNC_1(VAR_0);
 struct charger_data *VAR_2 = VAR_1->charger;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_registered_psy; VAR_3++)
  FUNC_0(VAR_2->ports[VAR_3], 0);
}
