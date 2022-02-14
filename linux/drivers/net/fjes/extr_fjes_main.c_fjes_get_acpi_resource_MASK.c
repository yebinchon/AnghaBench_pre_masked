
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {scalar_t__ end; scalar_t__ start; } ;
struct acpi_resource_irq {int interrupt_count; scalar_t__* interrupts; } ;
struct TYPE_3__ {scalar_t__ address_length; scalar_t__ minimum; } ;
struct acpi_resource_address32 {TYPE_1__ address; } ;
struct TYPE_4__ {struct acpi_resource_irq irq; struct acpi_resource_address32 address32; } ;
struct acpi_resource {int type; TYPE_2__ data; } ;
typedef int acpi_status ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static acpi_status
FUNC_0(struct acpi_resource *VAR_2, void *VAR_3)
{
 struct acpi_resource_address32 *VAR_4;
 struct acpi_resource_irq *VAR_5;
 struct resource *VAR_6 = VAR_3;

 switch (VAR_2->type) {
 case 129:
  VAR_4 = &VAR_2->data.address32;
  VAR_6[0].start = VAR_4->address.minimum;
  VAR_6[0].end = VAR_4->address.minimum +
   VAR_4->address.address_length - 1;
  break;

 case 128:
  VAR_5 = &VAR_2->data.irq;
  if (VAR_5->interrupt_count != 1)
   return VAR_0;
  VAR_6[1].start = VAR_5->interrupts[0];
  VAR_6[1].end = VAR_5->interrupts[0];
  break;

 default:
  break;
 }

 return VAR_1;
}
