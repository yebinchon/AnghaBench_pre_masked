
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_device {TYPE_1__* eps; struct xhci_slot_priv* debugfs_private; } ;
struct xhci_slot_priv {int root; struct xhci_virt_device* dev; int name; } ;
struct xhci_hcd {int debugfs_slots; struct xhci_virt_device** devs; } ;
struct TYPE_2__ {int ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct xhci_slot_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (struct xhci_hcd*,int ,int) ;
 int FUNC_4 (struct xhci_hcd*,int *,char*,int ) ;

void FUNC_5(struct xhci_hcd *VAR_1, int VAR_2)
{
 struct xhci_slot_priv *VAR_3;
 struct xhci_virt_device *VAR_4 = VAR_1->devs[VAR_2];

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 FUNC_2(VAR_3->name, sizeof(VAR_3->name), "%02d", VAR_2);
 VAR_3->root = FUNC_0(VAR_3->name, VAR_1->debugfs_slots);
 VAR_3->dev = VAR_4;
 VAR_4->debugfs_private = VAR_3;

 FUNC_4(VAR_1, &VAR_4->eps[0].ring,
         "ep00", VAR_3->root);

 FUNC_3(VAR_1, VAR_3->root, VAR_2);
}
