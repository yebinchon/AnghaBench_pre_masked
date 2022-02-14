
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ideapad_private {TYPE_1__* adev; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct ideapad_private*,int) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (int ,int ,unsigned long*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long*) ;

__attribute__((used)) static void FUNC_4(struct ideapad_private *VAR_1)
{
 unsigned long VAR_2, VAR_3;

 FUNC_2(VAR_1->adev->handle, VAR_0, &VAR_3);

 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  if (FUNC_3(VAR_2, &VAR_3)) {
   switch (VAR_2) {
   case 0:
   case 6:

    FUNC_0(VAR_1, 65);
    break;
   case 1:

    FUNC_0(VAR_1, 64);
    break;
   default:
    FUNC_1("Unknown special button: %lu\n", VAR_2);
    break;
   }
  }
 }
}
