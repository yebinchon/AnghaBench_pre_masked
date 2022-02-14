
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ideapad_private {scalar_t__* rfk; TYPE_1__* adev; scalar_t__ has_hw_rfkill_switch; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,unsigned long*) ;
 int FUNC_1 (scalar_t__,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct ideapad_private *VAR_2)
{
 unsigned long VAR_3 = 0;
 int VAR_4;

 if (VAR_2->has_hw_rfkill_switch) {
  if (FUNC_0(VAR_2->adev->handle, VAR_1, &VAR_3))
   return;
  VAR_3 = !VAR_3;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2->rfk[VAR_4])
   FUNC_1(VAR_2->rfk[VAR_4], VAR_3);
}
