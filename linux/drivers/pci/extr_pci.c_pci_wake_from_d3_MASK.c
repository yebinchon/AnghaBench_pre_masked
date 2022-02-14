
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ) ;

int FUNC_2(struct pci_dev *VAR_2, bool VAR_3)
{
 return FUNC_1(VAR_2, VAR_0) ?
   FUNC_0(VAR_2, VAR_0, VAR_3) :
   FUNC_0(VAR_2, VAR_1, VAR_3);
}
