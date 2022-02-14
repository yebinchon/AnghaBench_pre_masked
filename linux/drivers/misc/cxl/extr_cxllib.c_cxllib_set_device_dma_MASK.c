
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct pci_dev *VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 if (VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_1(&VAR_1->dev, FUNC_0(64));
 return VAR_3;
}
