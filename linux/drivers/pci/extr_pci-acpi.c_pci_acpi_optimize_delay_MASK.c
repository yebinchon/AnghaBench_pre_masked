
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ package; } ;
struct pci_host_bridge {scalar_t__ ignore_reset_delay; } ;
struct pci_dev {int d3cold_delay; int d3_delay; int bus; } ;
typedef int acpi_handle ;


 int FUNC_0 (union acpi_object*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 union acpi_object* FUNC_1 (int ,int *,int,int ,int *) ;
 int VAR_5 ;
 struct pci_host_bridge* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_6,
        acpi_handle VAR_7)
{
 struct pci_host_bridge *VAR_8 = FUNC_2(VAR_6->bus);
 int VAR_9;
 union acpi_object *VAR_10, *VAR_11;

 if (VAR_8->ignore_reset_delay)
  VAR_6->d3cold_delay = 0;

 VAR_10 = FUNC_1(VAR_7, &VAR_5, 3,
    VAR_2, ((void*)0));
 if (!VAR_10)
  return;

 if (VAR_10->type == VAR_1 && VAR_10->package.count == 5) {
  VAR_11 = VAR_10->package.elements;
  if (VAR_11[0].type == VAR_0) {
   VAR_9 = (int)VAR_11[0].integer.value / 1000;
   if (VAR_9 < VAR_3)
    VAR_6->d3cold_delay = VAR_9;
  }
  if (VAR_11[3].type == VAR_0) {
   VAR_9 = (int)VAR_11[3].integer.value / 1000;
   if (VAR_9 < VAR_4)
    VAR_6->d3_delay = VAR_9;
  }
 }
 FUNC_0(VAR_10);
}
