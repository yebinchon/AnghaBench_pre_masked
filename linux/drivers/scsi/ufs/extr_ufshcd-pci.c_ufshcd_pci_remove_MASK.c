
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int dummy; } ;
struct pci_dev {int dev; } ;


 struct ufs_hba* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct ufs_hba *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->dev);
 FUNC_2(&VAR_0->dev);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
}
