
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpiphp_bridge {int dummy; } ;
struct acpi_device {scalar_t__ hp; } ;
struct TYPE_2__ {struct acpiphp_bridge* root_bridge; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct acpiphp_bridge*) ;
 int FUNC_3 (struct acpiphp_bridge*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct acpiphp_bridge*) ;
 TYPE_1__* FUNC_7 (scalar_t__) ;

void FUNC_8(struct acpi_device *VAR_0)
{
 struct acpiphp_bridge *VAR_1 = ((void*)0);

 FUNC_0();
 if (VAR_0->hp) {
  VAR_1 = FUNC_7(VAR_0->hp)->root_bridge;
  if (VAR_1)
   FUNC_3(VAR_1);
 }
 FUNC_1();
 if (VAR_1) {
  FUNC_4();

  FUNC_2(VAR_1);

  FUNC_5();
  FUNC_6(VAR_1);
 }
}
