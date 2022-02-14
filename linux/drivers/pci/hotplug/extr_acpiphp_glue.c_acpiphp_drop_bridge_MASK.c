
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpiphp_root_context {int dummy; } ;
struct acpiphp_bridge {TYPE_1__* pci_bus; } ;
struct acpi_device {int * hp; } ;
struct TYPE_2__ {int bridge; } ;


 struct acpi_device* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct acpiphp_bridge*) ;
 int FUNC_4 (struct acpiphp_root_context*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct acpiphp_bridge*) ;
 struct acpiphp_root_context* FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct acpiphp_bridge *VAR_0)
{
 if (FUNC_5(VAR_0->pci_bus)) {
  struct acpiphp_root_context *VAR_1;
  struct acpi_device *VAR_2;

  FUNC_1();
  VAR_2 = FUNC_0(VAR_0->pci_bus->bridge);
  VAR_1 = FUNC_7(VAR_2->hp);
  VAR_2->hp = ((void*)0);
  FUNC_2();
  FUNC_4(VAR_1);
 }
 FUNC_3(VAR_0);
 FUNC_6(VAR_0);
}
