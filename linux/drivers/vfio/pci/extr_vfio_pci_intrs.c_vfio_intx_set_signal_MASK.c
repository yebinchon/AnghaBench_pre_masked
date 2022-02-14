
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pci_device {int irqlock; TYPE_1__* ctx; int pci_2_3; struct pci_dev* pdev; } ;
struct pci_dev {int irq; } ;
struct eventfd_ctx {int dummy; } ;
struct TYPE_2__ {scalar_t__ masked; int name; struct eventfd_ctx* trigger; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (struct eventfd_ctx*) ;
 int FUNC_1 (struct eventfd_ctx*) ;
 int FUNC_2 (int ) ;
 struct eventfd_ctx* FUNC_3 (int) ;
 int FUNC_4 (struct eventfd_ctx*) ;
 int FUNC_5 (int ,struct vfio_pci_device*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int ,int ,unsigned long,int ,struct vfio_pci_device*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_12(struct vfio_pci_device *VAR_4, int VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->pdev;
 unsigned long VAR_7 = VAR_2;
 struct eventfd_ctx *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 if (VAR_4->ctx[0].trigger) {
  FUNC_5(VAR_6->irq, VAR_4);
  FUNC_7(VAR_4->ctx[0].name);
  FUNC_4(VAR_4->ctx[0].trigger);
  VAR_4->ctx[0].trigger = ((void*)0);
 }

 if (VAR_5 < 0)
  return 0;

 VAR_4->ctx[0].name = FUNC_6(VAR_1, "vfio-intx(%s)",
          FUNC_8(VAR_6));
 if (!VAR_4->ctx[0].name)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_8)) {
  FUNC_7(VAR_4->ctx[0].name);
  return FUNC_1(VAR_8);
 }

 VAR_4->ctx[0].trigger = VAR_8;

 if (!VAR_4->pci_2_3)
  VAR_7 = 0;

 VAR_10 = FUNC_9(VAR_6->irq, VAR_3,
     VAR_7, VAR_4->ctx[0].name, VAR_4);
 if (VAR_10) {
  VAR_4->ctx[0].trigger = ((void*)0);
  FUNC_7(VAR_4->ctx[0].name);
  FUNC_4(VAR_8);
  return VAR_10;
 }





 FUNC_10(&VAR_4->irqlock, VAR_9);
 if (!VAR_4->pci_2_3 && VAR_4->ctx[0].masked)
  FUNC_2(VAR_6->irq);
 FUNC_11(&VAR_4->irqlock, VAR_9);

 return 0;
}
