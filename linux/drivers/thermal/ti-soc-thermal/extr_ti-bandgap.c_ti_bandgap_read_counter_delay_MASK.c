
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_bandgap {int dev; TYPE_2__* conf; } ;
struct temp_sensor_registers {int mask_counter_delay_mask; int bgap_mask_ctrl; } ;
struct TYPE_4__ {TYPE_1__* sensors; } ;
struct TYPE_3__ {struct temp_sensor_registers* registers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ti_bandgap*,int ) ;

__attribute__((used)) static void FUNC_3(struct ti_bandgap *VAR_0, int VAR_1,
       int *VAR_2)
{
 struct temp_sensor_registers *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->conf->sensors[VAR_1].registers;

 VAR_4 = FUNC_2(VAR_0, VAR_3->bgap_mask_ctrl);
 VAR_4 = (VAR_4 & VAR_3->mask_counter_delay_mask) >>
    FUNC_0(VAR_3->mask_counter_delay_mask);
 switch (VAR_4) {
 case 0:
  *VAR_2 = 0;
  break;
 case 1:
  *VAR_2 = 1;
  break;
 case 2:
  *VAR_2 = 10;
  break;
 case 3:
  *VAR_2 = 100;
  break;
 case 4:
  *VAR_2 = 250;
  break;
 case 5:
  *VAR_2 = 500;
  break;
 default:
  FUNC_1(VAR_0->dev, "Wrong counter delay value read from register %X",
    VAR_4);
 }
}
