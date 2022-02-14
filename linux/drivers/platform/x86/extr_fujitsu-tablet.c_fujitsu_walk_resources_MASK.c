
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int address_length; int minimum; } ;
struct TYPE_5__ {int * interrupts; } ;
struct TYPE_6__ {TYPE_3__ io; TYPE_1__ irq; } ;
struct acpi_resource {int type; TYPE_2__ data; } ;
typedef int acpi_status ;
struct TYPE_8__ {int io_base; int irq; int io_length; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;

__attribute__((used)) static acpi_status FUNC_0(struct acpi_resource *VAR_4, void *VAR_5)
{
 switch (VAR_4->type) {
 case 128:
  VAR_3.irq = VAR_4->data.irq.interrupts[0];
  return VAR_2;

 case 129:
  VAR_3.io_base = VAR_4->data.io.minimum;
  VAR_3.io_length = VAR_4->data.io.address_length;
  return VAR_2;

 case 130:
  if (VAR_3.irq && VAR_3.io_base)
   return VAR_2;
  else
   return VAR_1;

 default:
  return VAR_0;
 }
}
