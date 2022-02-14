
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;

int FUNC_2(struct pci_dev *VAR_0, int VAR_1, u16 VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  u16 VAR_4;
  if (VAR_3)
   FUNC_0((1 << (VAR_3 - 1)) * 100);

  FUNC_1(VAR_0, VAR_1, &VAR_4);
  if (!(VAR_4 & VAR_2))
   return 1;
 }

 return 0;
}
