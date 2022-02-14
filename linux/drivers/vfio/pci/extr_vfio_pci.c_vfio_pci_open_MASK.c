
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pci_device {TYPE_1__* reflck; int refcnt; int pdev; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vfio_pci_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_2)
{
 struct vfio_pci_device *VAR_3 = VAR_2;
 int VAR_4 = 0;

 if (!FUNC_3(VAR_1))
  return -VAR_0;

 FUNC_1(&VAR_3->reflck->lock);

 if (!VAR_3->refcnt) {
  VAR_4 = FUNC_4(VAR_3);
  if (VAR_4)
   goto error;

  FUNC_5(VAR_3->pdev);
 }
 VAR_3->refcnt++;
error:
 FUNC_2(&VAR_3->reflck->lock);
 if (VAR_4)
  FUNC_0(VAR_1);
 return VAR_4;
}
