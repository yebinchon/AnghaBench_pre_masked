
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pci_device {int num_ctx; TYPE_1__* ctx; int irq_type; scalar_t__ nointx; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int mask; int unmask; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct vfio_pci_device*,int ,int,int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct vfio_pci_device *VAR_1, bool VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pdev;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_ctx; VAR_4++) {
  FUNC_4(&VAR_1->ctx[VAR_4].unmask);
  FUNC_4(&VAR_1->ctx[VAR_4].mask);
 }

 FUNC_3(VAR_1, 0, VAR_1->num_ctx, ((void*)0), VAR_2);

 FUNC_1(VAR_3);





 if (VAR_1->nointx)
  FUNC_2(VAR_3, 0);

 VAR_1->irq_type = VAR_0;
 VAR_1->num_ctx = 0;
 FUNC_0(VAR_1->ctx);
}
