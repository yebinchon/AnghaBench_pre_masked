
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
struct pci_host_bridge {int ignore_reset_delay; } ;
struct pci_bus {int bridge; } ;


 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 union acpi_object* FUNC_2 (int ,int *,int,int ,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct pci_bus*) ;
 int FUNC_4 (struct pci_bus*) ;
 int VAR_3 ;
 struct pci_host_bridge* FUNC_5 (struct pci_bus*) ;
 int FUNC_6 (struct pci_bus*) ;

void FUNC_7(struct pci_bus *VAR_4)
{
 union acpi_object *VAR_5;
 struct pci_host_bridge *VAR_6;

 if (VAR_2 || !VAR_4->bridge || !FUNC_1(VAR_4->bridge))
  return;

 FUNC_3(VAR_4);
 FUNC_4(VAR_4);





 if (!FUNC_6(VAR_4))
  return;

 VAR_5 = FUNC_2(FUNC_1(VAR_4->bridge), &VAR_3, 3,
    VAR_1, ((void*)0));
 if (!VAR_5)
  return;

 if (VAR_5->type == VAR_0 && VAR_5->integer.value == 1) {
  VAR_6 = FUNC_5(VAR_4);
  VAR_6->ignore_reset_delay = 1;
 }
 FUNC_0(VAR_5);
}
