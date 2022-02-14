
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_device {TYPE_1__* udev; } ;
struct xhci_slot_priv {struct xhci_virt_device* dev; } ;
struct seq_file {struct xhci_slot_priv* private; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct xhci_slot_priv *VAR_2 = VAR_0->private;
 struct xhci_virt_device *VAR_3 = VAR_2->dev;

 FUNC_1(VAR_0, "%s\n", FUNC_0(&VAR_3->udev->dev));

 return 0;
}
