
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_resource_extended_irq {int * interrupts; int interrupt_count; } ;
struct TYPE_2__ {struct acpi_resource_extended_irq extended_irq; } ;
struct acpi_resource {scalar_t__ type; TYPE_1__ data; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static acpi_status FUNC_0(struct acpi_resource *VAR_3,
     void *VAR_4)
{
 struct acpi_resource_extended_irq *VAR_5;

 if (VAR_3->type != VAR_0)
  return VAR_2;

 VAR_5 = &VAR_3->data.extended_irq;
 if (!VAR_5 || !VAR_5->interrupt_count)
  return VAR_2;

 *((u32 *)VAR_4) = VAR_5->interrupts[0];
 return VAR_1;
}
