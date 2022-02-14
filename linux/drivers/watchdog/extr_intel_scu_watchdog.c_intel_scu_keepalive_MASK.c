
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int soft_threshold; int timer_control_addr; int timer_load_count_addr; int timer_clear_interrupt_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(void)
{


 FUNC_0(VAR_0.timer_clear_interrupt_addr);


 FUNC_1(0x00000002, VAR_0.timer_control_addr);


 FUNC_1(VAR_0.soft_threshold,
    VAR_0.timer_load_count_addr);


 FUNC_1(0x00000003, VAR_0.timer_control_addr);

 return 0;
}
