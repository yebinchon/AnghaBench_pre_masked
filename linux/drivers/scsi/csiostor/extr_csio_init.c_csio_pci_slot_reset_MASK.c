
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct csio_hw {int lock; int sm; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct csio_hw* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static pci_ers_result_t
FUNC_10(struct pci_dev *VAR_3)
{
 struct csio_hw *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 if (FUNC_3(VAR_3)) {
  FUNC_2(&VAR_3->dev, "cannot re-enable device in slot reset\n");
  return VAR_1;
 }

 FUNC_7(VAR_3);
 FUNC_5(VAR_3);
 FUNC_6(VAR_3);




 FUNC_8(&VAR_4->lock);
 FUNC_1(&VAR_4->sm, VAR_0);
 VAR_5 = FUNC_0(VAR_4);
 FUNC_9(&VAR_4->lock);

 if (VAR_5) {
  return VAR_2;
 } else {
  FUNC_2(&VAR_3->dev, "Can't initialize HW when in slot reset\n");
  return VAR_1;
 }
}
