
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* is_usb_online ) () ;int (* is_ac_online ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_2->is_ac_online)
  VAR_0 = !!VAR_2->is_ac_online();

 if (VAR_2->is_usb_online)
  VAR_1 = !!VAR_2->is_usb_online();
}
