
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int prescale; int prescale_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(u32 VAR_1)
{
 FUNC_1(VAR_0->prescale_lock, 0x5a5a);
 if ((FUNC_0(VAR_0->prescale_lock) & 3) == 1) {
  FUNC_1(VAR_0->prescale_lock, 0xa5a5);
  if ((FUNC_0(VAR_0->prescale_lock) & 3) == 3) {
   FUNC_1(VAR_0->prescale, VAR_1);
   return;
  }
 }
 FUNC_2("failed to unlock WDT prescale reg\n");
}
