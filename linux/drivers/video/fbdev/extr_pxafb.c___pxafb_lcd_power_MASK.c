
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int var; } ;
struct pxafb_info {int lcd_supply_enabled; scalar_t__ lcd_supply; TYPE_1__ fb; int (* lcd_power ) (int,int *) ;} ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static inline void FUNC_5(struct pxafb_info *VAR_0, int VAR_1)
{
 FUNC_0("pxafb: LCD power o%s\n", VAR_1 ? "n" : "ff");

 if (VAR_0->lcd_power)
  VAR_0->lcd_power(VAR_1, &VAR_0->fb.var);

 if (VAR_0->lcd_supply && VAR_0->lcd_supply_enabled != VAR_1) {
  int VAR_2;

  if (VAR_1)
   VAR_2 = FUNC_3(VAR_0->lcd_supply);
  else
   VAR_2 = FUNC_2(VAR_0->lcd_supply);

  if (VAR_2 < 0)
   FUNC_1("Unable to %s LCD supply regulator: %d\n",
    VAR_1 ? "enable" : "disable", VAR_2);
  else
   VAR_0->lcd_supply_enabled = VAR_1;
 }
}
