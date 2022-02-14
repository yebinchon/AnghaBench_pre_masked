
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ timer_started; int threshold; int timer_control_addr; int timer_load_count_addr; int timer_interrupt_status_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,...) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_2.timer_interrupt_status_addr);

 FUNC_2("irq, int_status: %x\n", VAR_5);

 if (VAR_5 != 0)
  return VAR_1;


 if (VAR_2.timer_started == 0) {
  FUNC_2("spurious interrupt received\n");
  return VAR_0;
 }


 FUNC_1(0x00000002, VAR_2.timer_control_addr);


 FUNC_1(VAR_2.threshold,
    VAR_2.timer_load_count_addr);


 FUNC_1(0x00000003, VAR_2.timer_control_addr);

 return VAR_0;
}
