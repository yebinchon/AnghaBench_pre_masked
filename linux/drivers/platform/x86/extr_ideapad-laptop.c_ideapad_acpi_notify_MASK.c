
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ideapad_private {int dummy; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ideapad_private*) ;
 int FUNC_1 (struct ideapad_private*) ;
 int FUNC_2 (struct ideapad_private*) ;
 int FUNC_3 (struct ideapad_private*) ;
 int FUNC_4 (struct ideapad_private*,unsigned long) ;
 int FUNC_5 (struct ideapad_private*) ;
 int FUNC_6 (struct ideapad_private*) ;
 int FUNC_7 (char*,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int ,unsigned long*) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long*) ;

__attribute__((used)) static void FUNC_10(acpi_handle VAR_2, u32 VAR_3, void *VAR_4)
{
 struct ideapad_private *VAR_5 = VAR_4;
 unsigned long VAR_6, VAR_7, VAR_8;

 if (FUNC_8(VAR_2, VAR_0, &VAR_6))
  return;
 if (FUNC_8(VAR_2, VAR_1, &VAR_7))
  return;

 VAR_6 = (VAR_7 << 8) | VAR_6;
 for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
  if (FUNC_9(VAR_8, &VAR_6)) {
   switch (VAR_8) {
   case 9:
    FUNC_5(VAR_5);
    break;
   case 13:
   case 11:
   case 8:
   case 7:
   case 6:
    FUNC_4(VAR_5, VAR_8);
    break;
   case 5:
    FUNC_6(VAR_5);
    break;
   case 4:
    FUNC_0(VAR_5);
    break;
   case 3:
    FUNC_3(VAR_5);
    break;
   case 2:
    FUNC_1(VAR_5);
    break;
   case 0:
    FUNC_2(VAR_5);
    break;
   case 1:





    break;
   default:
    FUNC_7("Unknown event: %lu\n", VAR_8);
   }
  }
 }
}
