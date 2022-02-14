
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lego_usb_tower {int interrupt_out_urb; scalar_t__ interrupt_out_busy; int interrupt_in_urb; scalar_t__ interrupt_in_running; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2 (struct lego_usb_tower *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;


 if (VAR_0->interrupt_in_running) {
  VAR_0->interrupt_in_running = 0;
  FUNC_0();
  FUNC_1(VAR_0->interrupt_in_urb);
 }
 if (VAR_0->interrupt_out_busy)
  FUNC_1(VAR_0->interrupt_out_urb);
}
