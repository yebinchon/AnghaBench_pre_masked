
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {int igate; scalar_t__ err_trigger; } ;
struct vfio_device {int dummy; } ;
struct pci_dev {int dev; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vfio_pci_device* FUNC_3 (struct vfio_device*) ;
 struct vfio_device* FUNC_4 (int *) ;
 int FUNC_5 (struct vfio_device*) ;

__attribute__((used)) static pci_ers_result_t FUNC_6(struct pci_dev *VAR_2,
        pci_channel_state_t VAR_3)
{
 struct vfio_pci_device *VAR_4;
 struct vfio_device *VAR_5;

 VAR_5 = FUNC_4(&VAR_2->dev);
 if (VAR_5 == ((void*)0))
  return VAR_1;

 VAR_4 = FUNC_3(VAR_5);
 if (VAR_4 == ((void*)0)) {
  FUNC_5(VAR_5);
  return VAR_1;
 }

 FUNC_1(&VAR_4->igate);

 if (VAR_4->err_trigger)
  FUNC_0(VAR_4->err_trigger, 1);

 FUNC_2(&VAR_4->igate);

 FUNC_5(VAR_5);

 return VAR_0;
}
