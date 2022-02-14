
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int change; int change_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(u32 VAR_1)
{
 FUNC_1(VAR_0->change_lock, 0x6666);
 if ((FUNC_0(VAR_0->change_lock) & 3) == 1) {
  FUNC_1(VAR_0->change_lock, 0xbbbb);
  if ((FUNC_0(VAR_0->change_lock) & 3) == 3) {
   FUNC_1(VAR_0->change, VAR_1);
   return;
  }
 }
 FUNC_2("failed to unlock WDT change reg\n");
}
