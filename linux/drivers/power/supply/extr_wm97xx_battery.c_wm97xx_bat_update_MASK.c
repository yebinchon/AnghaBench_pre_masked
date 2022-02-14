
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm97xx_batt_pdata {scalar_t__ charge_gpio; } ;
struct power_supply {TYPE_1__* desc; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct power_supply*) ;
 struct wm97xx_batt_pdata* FUNC_4 (struct power_supply*) ;
 int FUNC_5 (char*,int ,int,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6(struct power_supply *VAR_5)
{
 int VAR_6 = VAR_3;
 struct wm97xx_batt_pdata *VAR_7 = FUNC_4(VAR_5);

 FUNC_1(&VAR_4);

 VAR_3 = (VAR_7->charge_gpio >= 0) ?
   (FUNC_0(VAR_7->charge_gpio) ?
   VAR_1 :
   VAR_0) :
   VAR_2;

 if (VAR_6 != VAR_3) {
  FUNC_5("%s: %i -> %i\n", VAR_5->desc->name, VAR_6,
     VAR_3);
  FUNC_3(VAR_5);
 }

 FUNC_2(&VAR_4);
}
