
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct bq24735 {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct bq24735*) ;
 struct bq24735* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct power_supply *VAR_3 = VAR_2;
 struct bq24735 *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4);

 return VAR_0;
}
