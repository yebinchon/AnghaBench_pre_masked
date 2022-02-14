
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ni903x_wdt {int dev; int io_base; } ;
struct TYPE_3__ {int address_length; int minimum; } ;
struct TYPE_4__ {TYPE_1__ io; } ;
struct acpi_resource {int type; TYPE_2__ data; } ;
typedef int acpi_status ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static acpi_status FUNC_2(struct acpi_resource *VAR_4, void *VAR_5)
{
 struct ni903x_wdt *VAR_6 = VAR_5;
 u16 VAR_7;

 switch (VAR_4->type) {
 case 128:
  if (VAR_6->io_base != 0) {
   FUNC_0(VAR_6->dev, "too many IO resources\n");
   return VAR_0;
  }

  VAR_6->io_base = VAR_4->data.io.minimum;
  VAR_7 = VAR_4->data.io.address_length;

  if (VAR_7 < VAR_2) {
   FUNC_0(VAR_6->dev, "memory region too small\n");
   return VAR_0;
  }

  if (!FUNC_1(VAR_6->dev, VAR_6->io_base, VAR_7,
      VAR_3)) {
   FUNC_0(VAR_6->dev, "failed to get memory region\n");
   return VAR_0;
  }

  return VAR_1;

 case 129:
 default:

  return VAR_1;
 }
}
