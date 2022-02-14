
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_pci_generic_dev {int pdev; } ;
struct uio_info {int dummy; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int ) ;
 struct uio_pci_generic_dev* FUNC_1 (struct uio_info*) ;

__attribute__((used)) static int FUNC_2(struct uio_info *VAR_0, struct inode *VAR_1)
{
 struct uio_pci_generic_dev *VAR_2 = FUNC_1(VAR_0);
 FUNC_0(VAR_2->pdev);
 return 0;
}
