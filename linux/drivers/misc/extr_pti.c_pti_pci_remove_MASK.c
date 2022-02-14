
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pti_dev {int pti_ioaddr; int * port; } ;
struct pci_dev {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pti_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*) ;
 struct pti_dev* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_4)
{
 struct pti_dev *VAR_5 = FUNC_4(VAR_4);
 unsigned int VAR_6;

 FUNC_8(&VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_7(VAR_3, VAR_6);
  FUNC_6(&VAR_5->port[VAR_6]);
 }

 FUNC_0(VAR_5->pti_ioaddr);
 FUNC_1(VAR_5);
 FUNC_5(VAR_4, 1);
 FUNC_3(VAR_4);

 FUNC_2(&VAR_1);
}
