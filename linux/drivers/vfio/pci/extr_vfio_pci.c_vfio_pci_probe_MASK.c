
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {int ioeventfds_list; int ioeventfds_lock; int irqlock; int igate; int irq_type; struct pci_dev* pdev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ hdr_type; int dev; } ;
struct iommu_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct vfio_pci_device*) ;
 struct vfio_pci_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,struct vfio_pci_device*) ;
 int FUNC_8 (int *) ;
 struct iommu_group* FUNC_9 (int *) ;
 int FUNC_10 (struct iommu_group*,int *) ;
 scalar_t__ FUNC_11 (struct pci_dev*) ;
 int VAR_9 ;
 int FUNC_12 (struct vfio_pci_device*) ;
 int FUNC_13 (struct vfio_pci_device*) ;
 int FUNC_14 (struct vfio_pci_device*,int ) ;
 int FUNC_15 (struct vfio_pci_device*,int) ;
 int FUNC_16 (struct pci_dev*,struct vfio_pci_device*,int *,int (*) (struct vfio_pci_device*,int)) ;
 int FUNC_17 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_10, const struct pci_device_id *VAR_11)
{
 struct vfio_pci_device *VAR_12;
 struct iommu_group *VAR_13;
 int VAR_14;

 if (VAR_10->hdr_type != VAR_6)
  return -VAR_1;
 if (FUNC_4(VAR_10)) {
  FUNC_5(VAR_10, "Cannot bind to PF with SR-IOV enabled\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_9(&VAR_10->dev);
 if (!VAR_13)
  return -VAR_1;

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_3);
 if (!VAR_12) {
  FUNC_10(VAR_13, &VAR_10->dev);
  return -VAR_2;
 }

 VAR_12->pdev = VAR_10;
 VAR_12->irq_type = VAR_7;
 FUNC_3(&VAR_12->igate);
 FUNC_6(&VAR_12->irqlock);
 FUNC_3(&VAR_12->ioeventfds_lock);
 FUNC_0(&VAR_12->ioeventfds_list);

 VAR_14 = FUNC_7(&VAR_10->dev, &VAR_9, VAR_12);
 if (VAR_14) {
  FUNC_10(VAR_13, &VAR_10->dev);
  FUNC_1(VAR_12);
  return VAR_14;
 }

 VAR_14 = FUNC_13(VAR_12);
 if (VAR_14) {
  FUNC_8(&VAR_10->dev);
  FUNC_10(VAR_13, &VAR_10->dev);
  FUNC_1(VAR_12);
  return VAR_14;
 }

 if (FUNC_11(VAR_10)) {
  FUNC_16(VAR_10, VAR_12, ((void*)0), FUNC_15);
  FUNC_17(VAR_10,
     FUNC_15(VAR_12, 0));
 }

 FUNC_12(VAR_12);

 if (!VAR_8) {
  FUNC_14(VAR_12, VAR_4);
  FUNC_14(VAR_12, VAR_5);
 }

 return VAR_14;
}
