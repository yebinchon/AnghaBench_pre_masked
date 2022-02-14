
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm97xx_batt_pdata {unsigned long temp_mult; unsigned long temp_div; int temp_aux; } ;
struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 struct wm97xx_batt_pdata* FUNC_1 (struct power_supply*) ;
 unsigned long FUNC_2 (int ,int ) ;

__attribute__((used)) static unsigned long FUNC_3(struct power_supply *VAR_0)
{
 struct wm97xx_batt_pdata *VAR_1 = FUNC_1(VAR_0);

 return FUNC_2(FUNC_0(VAR_0->dev.parent),
     VAR_1->temp_aux) * VAR_1->temp_mult /
     VAR_1->temp_div;
}
