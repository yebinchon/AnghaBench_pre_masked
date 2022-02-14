
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xen_pci_op {int err; } ;
struct pcifront_device {unsigned int irq; int sh_info_lock; TYPE_2__* xdev; TYPE_1__* sh_info; int evtchn; } ;
typedef int s64 ;
typedef int evtchn_port_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int flags; struct xen_pci_op op; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (struct xen_pci_op*,struct xen_pci_op*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pcifront_device*) ;
 int FUNC_6 (int ,unsigned long*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ,unsigned long*) ;
 int FUNC_10 () ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct pcifront_device *VAR_6, struct xen_pci_op *VAR_7)
{
 int VAR_8 = 0;
 struct xen_pci_op *VAR_9 = &VAR_6->sh_info->op;
 unsigned long VAR_10;
 evtchn_port_t VAR_11 = VAR_6->evtchn;
 unsigned VAR_12 = VAR_6->irq;
 s64 VAR_13, VAR_14;

 FUNC_7(&VAR_6->sh_info_lock, VAR_10);

 FUNC_3(VAR_9, VAR_7, sizeof(struct xen_pci_op));


 FUNC_10();
 FUNC_6(VAR_4, (unsigned long *)&VAR_6->sh_info->flags);
 FUNC_4(VAR_11);







 VAR_14 = FUNC_2() + 2 * (s64)VAR_1;

 FUNC_11(VAR_12);

 while (FUNC_9(VAR_4,
   (unsigned long *)&VAR_6->sh_info->flags)) {
  FUNC_12(VAR_12, VAR_5 + 3*VAR_0);
  FUNC_11(VAR_12);
  VAR_13 = FUNC_2();
  if (VAR_13 > VAR_14) {
   FUNC_1(&VAR_6->xdev->dev,
    "pciback not responding!!!\n");
   FUNC_0(VAR_4,
      (unsigned long *)&VAR_6->sh_info->flags);
   VAR_8 = VAR_2;
   goto out;
  }
 }






 if (FUNC_9(VAR_3,
   (unsigned long *)&VAR_6->sh_info->flags)) {
  FUNC_1(&VAR_6->xdev->dev,
   "schedule aer pcifront service\n");
  FUNC_5(VAR_6);
 }

 FUNC_3(VAR_7, VAR_9, sizeof(struct xen_pci_op));

 VAR_8 = VAR_7->err;
out:
 FUNC_8(&VAR_6->sh_info_lock, VAR_10);
 return VAR_8;
}
