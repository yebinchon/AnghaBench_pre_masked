
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_bus {int dev; int self; int bridge; } ;
struct acpiphp_root_context {int hp; struct acpiphp_bridge* root_bridge; } ;
struct TYPE_2__ {int parent; } ;
struct acpiphp_context {TYPE_1__ func; struct acpiphp_bridge* bridge; } ;
struct acpiphp_bridge {int pci_dev; int list; struct acpiphp_context* context; struct pci_bus* pci_bus; int ref; int slots; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 struct acpi_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct acpi_device*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int,int ,int *,struct acpiphp_bridge*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct acpiphp_context* FUNC_8 (struct acpi_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct acpiphp_bridge*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct acpiphp_bridge*) ;
 int FUNC_13 (int *) ;
 void* FUNC_14 (int,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (struct pci_bus*) ;
 int FUNC_21 (struct acpiphp_bridge*) ;
 int FUNC_22 (int *) ;

void FUNC_23(struct pci_bus *VAR_6)
{
 struct acpiphp_bridge *VAR_7;
 struct acpi_device *VAR_8;
 acpi_handle VAR_9;
 acpi_status VAR_10;

 if (VAR_3)
  return;

 VAR_8 = FUNC_0(VAR_6->bridge);
 if (!VAR_8)
  return;

 VAR_9 = VAR_8->handle;
 VAR_7 = FUNC_14(sizeof(struct acpiphp_bridge), VAR_1);
 if (!VAR_7)
  return;

 FUNC_2(&VAR_7->slots);
 FUNC_13(&VAR_7->ref);
 VAR_7->pci_dev = FUNC_18(VAR_6->self);
 VAR_7->pci_bus = VAR_6;






 FUNC_11(&VAR_6->dev);

 FUNC_4();
 if (FUNC_20(VAR_7->pci_bus)) {
  struct acpiphp_root_context *VAR_11;

  VAR_11 = FUNC_14(sizeof(*VAR_11), VAR_1);
  if (!VAR_11)
   goto err;

  VAR_11->root_bridge = VAR_7;
  FUNC_5(VAR_8, &VAR_11->hp);
 } else {
  struct acpiphp_context *VAR_12;







  VAR_12 = FUNC_8(VAR_8);
  if (!VAR_12)
   goto err;

  VAR_7->context = VAR_12;
  VAR_12->bridge = VAR_7;

  FUNC_10(VAR_12->func.parent);
 }
 FUNC_6();


 FUNC_16(&VAR_5);
 FUNC_15(&VAR_7->list, &VAR_4);
 FUNC_17(&VAR_5);


 VAR_10 = FUNC_7(VAR_0, VAR_9, 1,
         VAR_2, ((void*)0), VAR_7, ((void*)0));
 if (FUNC_1(VAR_10)) {
  FUNC_3(VAR_9, "failed to register slots\n");
  FUNC_9(VAR_7);
  FUNC_21(VAR_7);
 }
 return;

 err:
 FUNC_6();
 FUNC_22(&VAR_6->dev);
 FUNC_19(VAR_7->pci_dev);
 FUNC_12(VAR_7);
}
