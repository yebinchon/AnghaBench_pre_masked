
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct csio_hw {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (struct csio_hw*,int ) ;
 int FUNC_4 (struct csio_hw*) ;
 int FUNC_5 (struct pci_dev*,int*) ;
 struct csio_hw* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_1)
{
 struct csio_hw *VAR_2 = FUNC_6(VAR_1);
 int VAR_3 = FUNC_7(VAR_1, VAR_0);

 FUNC_2(VAR_2);
 FUNC_8(&VAR_2->lock);





 FUNC_1(VAR_2);
 FUNC_9(&VAR_2->lock);
 FUNC_4(VAR_2);

 FUNC_3(VAR_2, 0);
 FUNC_0(VAR_2);
 FUNC_5(VAR_1, &VAR_3);
}
