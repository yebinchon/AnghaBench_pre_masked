
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int aer_stats; scalar_t__ aer_cap; } ;
struct aer_stats {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;

void FUNC_3(struct pci_dev *VAR_2)
{
 VAR_2->aer_cap = FUNC_2(VAR_2, VAR_1);

 if (VAR_2->aer_cap)
  VAR_2->aer_stats = FUNC_0(sizeof(struct aer_stats), VAR_0);

 FUNC_1(VAR_2);
}
