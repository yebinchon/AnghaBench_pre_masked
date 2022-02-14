
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply_prop {int val; int previous_val; scalar_t__ prop; } ;
struct gb_power_supply_changes {scalar_t__ prop; int tolerance_change; int (* prop_changed ) (struct gb_power_supply*,struct gb_power_supply_prop*) ;} ;
struct gb_power_supply {int changed; } ;


 int FUNC_0 (struct gb_power_supply_changes*) ;
 struct gb_power_supply_changes* VAR_0 ;
 int FUNC_1 (struct gb_power_supply*,struct gb_power_supply_prop*) ;

__attribute__((used)) static void FUNC_2(struct gb_power_supply *VAR_1,
     struct gb_power_supply_prop *VAR_2)
{
 const struct gb_power_supply_changes *VAR_3;
 int VAR_4 = VAR_2->val;
 int VAR_5 = VAR_2->previous_val;
 bool VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
  VAR_3 = &VAR_0[VAR_7];
  if (VAR_2->prop == VAR_3->prop) {
   if (!VAR_3->tolerance_change)
    VAR_6 = 1;
   else if (VAR_4 < VAR_5 &&
     VAR_5 - VAR_4 > VAR_3->tolerance_change)
    VAR_6 = 1;
   else if (VAR_4 > VAR_5 &&
     VAR_4 - VAR_5 > VAR_3->tolerance_change)
    VAR_6 = 1;

   if (VAR_6 && VAR_3->prop_changed)
    VAR_3->prop_changed(VAR_1, VAR_2);

   if (VAR_6)
    VAR_1->changed = 1;
   break;
  }
 }
}
