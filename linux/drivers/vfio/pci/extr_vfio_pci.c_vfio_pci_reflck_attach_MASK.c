
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pci_device {int reflck; TYPE_1__* pdev; } ;
struct TYPE_2__ {int bus; int slot; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int *,int) ;
 int FUNC_6 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct vfio_pci_device *VAR_2)
{
 bool VAR_3 = !FUNC_4(VAR_2->pdev->slot);

 FUNC_1(&VAR_0);

 if (FUNC_3(VAR_2->pdev->bus) ||
     FUNC_5(VAR_2->pdev, VAR_1,
       &VAR_2->reflck, VAR_3) <= 0)
  VAR_2->reflck = FUNC_6();

 FUNC_2(&VAR_0);

 return FUNC_0(VAR_2->reflck);
}
