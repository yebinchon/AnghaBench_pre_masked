
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {scalar_t__ refcnt; } ;
struct vfio_devices {scalar_t__ cur_index; scalar_t__ max_index; struct vfio_device** devices; } ;
struct vfio_device {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct pci_dev*) ;
 struct vfio_pci_device* FUNC_1 (struct vfio_device*) ;
 struct vfio_device* FUNC_2 (int *) ;
 int FUNC_3 (struct vfio_device*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_4, void *VAR_5)
{
 struct vfio_devices *VAR_6 = VAR_5;
 struct vfio_device *VAR_7;
 struct vfio_pci_device *VAR_8;

 if (VAR_6->cur_index == VAR_6->max_index)
  return -VAR_2;

 VAR_7 = FUNC_2(&VAR_4->dev);
 if (!VAR_7)
  return -VAR_1;

 if (FUNC_0(VAR_4) != &VAR_3) {
  FUNC_3(VAR_7);
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_7);


 if (VAR_8->refcnt) {
  FUNC_3(VAR_7);
  return -VAR_0;
 }

 VAR_6->devices[VAR_6->cur_index++] = VAR_7;
 return 0;
}
