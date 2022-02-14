
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_bandgap {int tshut_gpio; int irq; int div_clk; int fclock; TYPE_2__* conf; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {int sensor_count; int (* remove_sensor ) (struct ti_bandgap*,int) ;TYPE_1__* sensors; } ;
struct TYPE_3__ {int (* unregister_cooling ) (struct ti_bandgap*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ti_bandgap*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct ti_bandgap*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct ti_bandgap* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct ti_bandgap*,int) ;
 int FUNC_8 (struct ti_bandgap*,int) ;
 int FUNC_9 (struct ti_bandgap*,int) ;

__attribute__((used)) static
int FUNC_10(struct platform_device *VAR_3)
{
 struct ti_bandgap *VAR_4 = FUNC_6(VAR_3);
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_4->conf->sensor_count; VAR_5++) {
  if (VAR_4->conf->sensors[VAR_5].unregister_cooling)
   VAR_4->conf->sensors[VAR_5].unregister_cooling(VAR_4, VAR_5);

  if (VAR_4->conf->remove_sensor)
   VAR_4->conf->remove_sensor(VAR_4, VAR_5);
 }

 FUNC_9(VAR_4, 0);

 if (FUNC_0(VAR_4, VAR_0))
  FUNC_1(VAR_4->fclock);
 FUNC_2(VAR_4->fclock);
 FUNC_2(VAR_4->div_clk);

 if (FUNC_0(VAR_4, VAR_1))
  FUNC_3(VAR_4->irq, VAR_4);

 if (FUNC_0(VAR_4, VAR_2)) {
  FUNC_3(FUNC_5(VAR_4->tshut_gpio), ((void*)0));
  FUNC_4(VAR_4->tshut_gpio);
 }

 return 0;
}
