
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int btemp_low; int btemp_high; int btemp_medhigh; int btemp_lowmed; } ;
struct ab8500_btemp {int btemp_psy; TYPE_1__ events; int dev; int parent; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct ab8500_btemp *VAR_3 = VAR_2;

 if (FUNC_2(VAR_3->parent)) {
  FUNC_1(VAR_3->dev, "Ignore false btemp low irq"
   " for ABB cut 1.0, 1.1, 2.0 and 3.3\n");
 } else {
  FUNC_0(VAR_3->dev, "Battery temperature lower than -10deg c\n");

  VAR_3->events.btemp_low = 1;
  VAR_3->events.btemp_high = 0;
  VAR_3->events.btemp_medhigh = 0;
  VAR_3->events.btemp_lowmed = 0;
  FUNC_3(VAR_3->btemp_psy);
 }

 return VAR_0;
}
