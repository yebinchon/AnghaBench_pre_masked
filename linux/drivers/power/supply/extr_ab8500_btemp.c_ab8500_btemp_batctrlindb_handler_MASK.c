
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int batt_rem; } ;
struct ab8500_btemp {int btemp_psy; TYPE_1__ events; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct ab8500_btemp *VAR_3 = VAR_2;
 FUNC_0(VAR_3->dev, "Battery removal detected!\n");

 VAR_3->events.batt_rem = 1;
 FUNC_1(VAR_3->btemp_psy);

 return VAR_0;
}
