
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,unsigned int*) ;
 int FUNC_1 (struct pci_dev*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_2)
{
 unsigned int VAR_3;

 FUNC_0(VAR_2, VAR_1, &VAR_3);
 VAR_3 |= VAR_0;
 FUNC_1(VAR_2, VAR_1, VAR_3);
}
