
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_pci_device {int dummy; } ;
struct pci_dev {int vendor; int class; int cfg_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_3 (struct vfio_pci_device*,int,int ,int *,int ,int ,struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct vfio_pci_device *VAR_10)
{
 struct pci_dev *VAR_11, *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(0, 0, FUNC_0(0, 0));
 if (!VAR_11)
  return -VAR_1;

 if (VAR_11->vendor != VAR_4 ||
     VAR_11->class != (VAR_2 << 8)) {
  FUNC_1(VAR_11);
  return -VAR_0;
 }

 VAR_13 = FUNC_3(VAR_10,
  VAR_4 | VAR_8,
  VAR_6,
  &VAR_9, VAR_11->cfg_size,
  VAR_5, VAR_11);
 if (VAR_13) {
  FUNC_1(VAR_11);
  return VAR_13;
 }

 VAR_12 = FUNC_2(0, 0, FUNC_0(0x1f, 0));
 if (!VAR_12)
  return -VAR_1;

 if (VAR_12->vendor != VAR_4 ||
     VAR_12->class != (VAR_3 << 8)) {
  FUNC_1(VAR_12);
  return -VAR_0;
 }

 VAR_13 = FUNC_3(VAR_10,
  VAR_4 | VAR_8,
  VAR_7,
  &VAR_9, VAR_12->cfg_size,
  VAR_5, VAR_12);
 if (VAR_13) {
  FUNC_1(VAR_12);
  return VAR_13;
 }

 return 0;
}
