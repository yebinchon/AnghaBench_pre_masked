
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_nhi {int dummy; } ;
struct tb {struct tb_nhi* nhi; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (struct tb_nhi*) ;
 struct tb* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tb*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct tb *VAR_1 = FUNC_1(VAR_0);
 struct tb_nhi *VAR_2 = VAR_1->nhi;

 FUNC_4(&VAR_0->dev);
 FUNC_2(&VAR_0->dev);
 FUNC_3(&VAR_0->dev);

 FUNC_5(VAR_1);
 FUNC_0(VAR_2);
}
