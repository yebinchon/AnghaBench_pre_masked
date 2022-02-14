
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_pci_region {struct vfio_pci_nvgpu_data* data; } ;
struct vfio_pci_nvgpu_data {TYPE_1__* gpdev; int group_notifier; scalar_t__ mm; int mem; } ;
struct vfio_pci_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (long) ;
 int FUNC_1 (struct vfio_pci_nvgpu_data*) ;
 long FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_6(struct vfio_pci_device *VAR_1,
  struct vfio_pci_region *VAR_2)
{
 struct vfio_pci_nvgpu_data *VAR_3 = VAR_2->data;
 long VAR_4;


 if (VAR_3->mm) {
  VAR_4 = FUNC_2(VAR_3->mm, VAR_3->mem);
  FUNC_0(VAR_4);

  FUNC_3(VAR_3->mm);
 }

 FUNC_5(&VAR_3->gpdev->dev, VAR_0,
   &VAR_3->group_notifier);

 FUNC_4(VAR_3->gpdev);

 FUNC_1(VAR_3);
}
