
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pci_device {TYPE_1__* ctx; scalar_t__ num_ctx; int irq_type; } ;
struct TYPE_2__ {int mask; int unmask; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct vfio_pci_device*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vfio_pci_device *VAR_1)
{
 FUNC_2(&VAR_1->ctx[0].unmask);
 FUNC_2(&VAR_1->ctx[0].mask);
 FUNC_1(VAR_1, -1);
 VAR_1->irq_type = VAR_0;
 VAR_1->num_ctx = 0;
 FUNC_0(VAR_1->ctx);
}
