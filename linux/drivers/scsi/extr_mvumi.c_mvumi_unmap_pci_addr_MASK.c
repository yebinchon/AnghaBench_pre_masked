
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,void*) ;
 int FUNC_1 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_2, void **VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if ((FUNC_1(VAR_2, VAR_4) & VAR_0) &&
        VAR_3[VAR_4])
   FUNC_0(VAR_2, VAR_3[VAR_4]);
}
