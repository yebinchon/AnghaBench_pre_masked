
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int) ;
 unsigned long FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2)
{
 unsigned long VAR_3 = 0;
 int VAR_4;

 if (!FUNC_2(VAR_2))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if ((FUNC_0(VAR_2, VAR_4) & VAR_0)) {
   VAR_3 = FUNC_1(VAR_2, VAR_4);
   break;
  }

 if (VAR_3)
  FUNC_3(VAR_2, VAR_3);
}
