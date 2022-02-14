
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int start; scalar_t__ end; } ;
struct pci_bus {int self; TYPE_3__ busn_res; scalar_t__ primary; } ;
struct TYPE_5__ {TYPE_1__* slot; } ;
struct acpiphp_context {TYPE_2__ func; } ;
struct acpi_device {int dummy; } ;
struct TYPE_4__ {struct pci_bus* bus; } ;


 int VAR_0 ;
 struct acpiphp_context* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpiphp_context*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct acpi_device *VAR_1)
{
 struct acpiphp_context *VAR_2 = FUNC_0(VAR_1);
 struct pci_bus *VAR_3;
 u32 VAR_4;

 if (!VAR_2)
  return;

 VAR_3 = VAR_2->func.slot->bus;
 if (!VAR_3->self)
  goto out;




 FUNC_2(VAR_3->self, VAR_0, &VAR_4);

 if (((VAR_4 >> 8) & 0xff) != VAR_3->busn_res.start) {
  VAR_4 = (VAR_4 & 0xff000000)
   | ((unsigned int)(VAR_3->primary) << 0)
   | ((unsigned int)(VAR_3->busn_res.start) << 8)
   | ((unsigned int)(VAR_3->busn_res.end) << 16);
  FUNC_3(VAR_3->self, VAR_0, VAR_4);
 }

 out:
 FUNC_1(VAR_2);
}
