
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct sc27xx_fgu_data {int dummy; } ;
struct power_supply {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct power_supply* FUNC_1 (int ) ;
 int FUNC_2 (struct power_supply*,int ,union power_supply_propval*) ;
 int FUNC_3 (struct power_supply*) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_4(struct sc27xx_fgu_data *VAR_3, int *VAR_4)
{
 union power_supply_propval VAR_5;
 struct power_supply *VAR_6;
 int VAR_7, VAR_8 = -VAR_0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  VAR_6 = FUNC_1(VAR_2[VAR_7]);
  if (!VAR_6)
   continue;

  VAR_8 = FUNC_2(VAR_6, VAR_1,
      &VAR_5);
  FUNC_3(VAR_6);
  if (VAR_8)
   return VAR_8;

  *VAR_4 = VAR_5.intval;
 }

 return VAR_8;
}
