
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;
struct xen_pci_sharedinfo {scalar_t__ flags; } ;
struct pcifront_device {int irq; struct xen_pci_sharedinfo* sh_info; int op_work; int gnt_ref; int evtchn; int sh_info_lock; int root_buses; struct xenbus_device* xdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,struct pcifront_device*,struct xen_pci_sharedinfo*) ;
 int FUNC_4 (int *,struct pcifront_device*) ;
 int FUNC_5 (struct pcifront_device*) ;
 struct pcifront_device* FUNC_6 (int,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct pcifront_device *FUNC_9(struct xenbus_device *VAR_5)
{
 struct pcifront_device *VAR_6;

 VAR_6 = FUNC_6(sizeof(struct pcifront_device), VAR_0);
 if (VAR_6 == ((void*)0))
  goto out;

 VAR_6->sh_info =
     (struct xen_pci_sharedinfo *)FUNC_2(VAR_0);
 if (VAR_6->sh_info == ((void*)0)) {
  FUNC_5(VAR_6);
  VAR_6 = ((void*)0);
  goto out;
 }
 VAR_6->sh_info->flags = 0;


 FUNC_7(VAR_3, (void *)&VAR_6->sh_info->flags);

 FUNC_4(&VAR_5->dev, VAR_6);
 VAR_6->xdev = VAR_5;

 FUNC_0(&VAR_6->root_buses);

 FUNC_8(&VAR_6->sh_info_lock);

 VAR_6->evtchn = VAR_1;
 VAR_6->gnt_ref = VAR_2;
 VAR_6->irq = -1;

 FUNC_1(&VAR_6->op_work, VAR_4);

 FUNC_3(&VAR_5->dev, "Allocated pdev @ 0x%p pdev->sh_info @ 0x%p\n",
  VAR_6, VAR_6->sh_info);
out:
 return VAR_6;
}
