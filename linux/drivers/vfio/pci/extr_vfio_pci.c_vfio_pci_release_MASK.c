
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pci_device {TYPE_1__* reflck; int pdev; int refcnt; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vfio_pci_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
 struct vfio_pci_device *VAR_2 = VAR_1;

 FUNC_1(&VAR_2->reflck->lock);

 if (!(--VAR_2->refcnt)) {
  FUNC_4(VAR_2->pdev);
  FUNC_3(VAR_2);
 }

 FUNC_2(&VAR_2->reflck->lock);

 FUNC_0(VAR_0);
}
