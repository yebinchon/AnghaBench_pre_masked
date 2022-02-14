
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_host_bridge {scalar_t__ native_shpc_hotplug; int dev; } ;
struct pci_dev {struct pci_bus* bus; int dev; } ;
struct pci_bus {struct pci_bus* parent; } ;
struct acpi_pci_root {scalar_t__ osc_support_set; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int ,struct acpi_buffer*) ;
 int FUNC_4 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 struct acpi_pci_root* FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct pci_bus*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 struct pci_host_bridge* FUNC_10 (struct pci_bus*) ;
 int FUNC_11 (struct pci_dev*,char*,...) ;

int FUNC_12(struct pci_dev *VAR_3)
{
 const struct pci_host_bridge *VAR_4;
 const struct acpi_pci_root *VAR_5;
 acpi_status VAR_6;
 acpi_handle VAR_7, VAR_8;
 struct acpi_buffer VAR_9 = { VAR_0, ((void*)0) };






 VAR_4 = FUNC_10(VAR_3->bus);
 VAR_5 = FUNC_6(FUNC_1(&VAR_4->dev));
 if (!VAR_5)
  return 0;





 if (VAR_5->osc_support_set) {
  if (VAR_4->native_shpc_hotplug)
   return 0;
  return -VAR_2;
 }
 VAR_8 = FUNC_1(&VAR_3->dev);
 if (!VAR_8) {




  struct pci_bus *VAR_10;
  for (VAR_10 = VAR_3->bus; VAR_10; VAR_10 = VAR_10->parent) {
   VAR_8 = FUNC_7(VAR_10);
   if (VAR_8)
    break;
  }
 }

 while (VAR_8) {
  FUNC_3(VAR_8, VAR_1, &VAR_9);
  FUNC_11(VAR_3, "Requesting control of SHPC hotplug via OSHP (%s)\n",
    (char *)VAR_9.pointer);
  VAR_6 = FUNC_8(VAR_8);
  if (FUNC_2(VAR_6))
   goto got_one;
  if (FUNC_5(VAR_8))
   break;
  VAR_7 = VAR_8;
  VAR_6 = FUNC_4(VAR_7, &VAR_8);
  if (FUNC_0(VAR_6))
   break;
 }

 FUNC_11(VAR_3, "Cannot get control of SHPC hotplug\n");
 FUNC_9(VAR_9.pointer);
 return -VAR_2;
got_one:
 FUNC_11(VAR_3, "Gained control of SHPC hotplug (%s)\n",
   (char *)VAR_9.pointer);
 FUNC_9(VAR_9.pointer);
 return 0;
}
