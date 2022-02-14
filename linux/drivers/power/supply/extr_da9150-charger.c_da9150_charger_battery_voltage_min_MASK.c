
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct da9150_charger {int da9150; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct da9150_charger *VAR_2,
           union power_supply_propval *VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_2->da9150, VAR_1);


 VAR_3->intval = ((VAR_4 & VAR_0) * 50000) + 2500000;

 return 0;
}
