
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int subsystem_device; int subsystem_vendor; } ;
struct cx88_core {int dummy; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct cx88_core *VAR_1, struct pci_dev *VAR_2)
{
 int VAR_3;

 if (!VAR_2->subsystem_vendor && !VAR_2->subsystem_device) {
  FUNC_1("Your board has no valid PCI Subsystem ID and thus can't\n");
  FUNC_1("be autodetected.  Please pass card=<n> insmod option to\n");
  FUNC_1("workaround that.  Redirect complaints to the vendor of\n");
  FUNC_1("the TV card\n");
 } else {
  FUNC_1("Your board isn't known (yet) to the driver.  You can\n");
  FUNC_1("try to pick one of the existing card configs via\n");
  FUNC_1("card=<n> insmod option.  Updating to the latest\n");
  FUNC_1("version might help as well.\n");
 }
 FUNC_1("Here is a list of valid choices for the card=<n> insmod option:\n");
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  FUNC_1("    card=%d -> %s\n", VAR_3, VAR_0[VAR_3].name);
}
