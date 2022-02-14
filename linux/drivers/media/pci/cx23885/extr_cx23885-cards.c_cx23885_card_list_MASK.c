
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cx23885_dev {int name; TYPE_1__* pci; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,int ,...) ;

void FUNC_1(struct cx23885_dev *VAR_2)
{
 int VAR_3;

 if (0 == VAR_2->pci->subsystem_vendor &&
     0 == VAR_2->pci->subsystem_device) {
  FUNC_0("%s: Board has no valid PCIe Subsystem ID and can't\n"
   "%s: be autodetected. Pass card=<n> insmod option\n"
   "%s: to workaround that. Redirect complaints to the\n"
   "%s: vendor of the TV card.  Best regards,\n"
   "%s:         -- tux\n",
   VAR_2->name, VAR_2->name, VAR_2->name, VAR_2->name, VAR_2->name);
 } else {
  FUNC_0("%s: Your board isn't known (yet) to the driver.\n"
   "%s: Try to pick one of the existing card configs via\n"
   "%s: card=<n> insmod option.  Updating to the latest\n"
   "%s: version might help as well.\n",
   VAR_2->name, VAR_2->name, VAR_2->name, VAR_2->name);
 }
 FUNC_0("%s: Here is a list of valid choices for the card=<n> insmod option:\n",
        VAR_2->name);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0("%s:    card=%d -> %s\n",
   VAR_2->name, VAR_3, VAR_1[VAR_3].name);
}
