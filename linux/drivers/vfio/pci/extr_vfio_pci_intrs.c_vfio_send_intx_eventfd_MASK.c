
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pci_device {TYPE_1__* ctx; int virq_disabled; } ;
struct TYPE_2__ {int trigger; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct vfio_pci_device*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, void *VAR_1)
{
 struct vfio_pci_device *VAR_2 = VAR_0;

 if (FUNC_2(FUNC_1(VAR_2) && !VAR_2->virq_disabled))
  FUNC_0(VAR_2->ctx[0].trigger, 1);
}
