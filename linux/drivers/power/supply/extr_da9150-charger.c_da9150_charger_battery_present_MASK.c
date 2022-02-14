
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct da9150_charger {int da9150; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct da9150_charger *VAR_3,
       union power_supply_propval *VAR_4)
{
 u8 VAR_5;


 VAR_5 = FUNC_0(VAR_3->da9150, VAR_2);
 if ((VAR_5 & VAR_1) == VAR_0)
  VAR_4->intval = 0;
 else
  VAR_4->intval = 1;

 return 0;
}
