
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {int pci_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int ) ;

int FUNC_1(struct genwqe_dev *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->pci_dev, 1, VAR_2, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;
 return 0;
}
