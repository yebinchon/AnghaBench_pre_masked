
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct pci_dev*,int) ;

int FUNC_1(struct pci_dev *VAR_1, unsigned long VAR_2)
{
 int VAR_3, VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_0(VAR_1, VAR_3) & VAR_2)
   VAR_4 |= (1 << VAR_3);
 return VAR_4;
}
