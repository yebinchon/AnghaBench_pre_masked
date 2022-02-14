
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_bandgap {int clk_rate; TYPE_2__* conf; } ;
struct temp_sensor_registers {int counter_mask; int bgap_counter; } ;
struct TYPE_4__ {TYPE_1__* sensors; } ;
struct TYPE_3__ {struct temp_sensor_registers* registers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ti_bandgap*,int ) ;

__attribute__((used)) static void FUNC_2(struct ti_bandgap *VAR_0, int VAR_1,
        int *VAR_2)
{
 struct temp_sensor_registers *VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->conf->sensors[VAR_1].registers;
 VAR_4 = FUNC_1(VAR_0, VAR_3->bgap_counter);
 VAR_4 = (VAR_4 & VAR_3->counter_mask) >>
     FUNC_0(VAR_3->counter_mask);
 VAR_4 = VAR_4 * 1000 / VAR_0->clk_rate;
 *VAR_2 = VAR_4;
}
