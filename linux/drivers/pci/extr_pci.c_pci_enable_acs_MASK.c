
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

void FUNC_3(struct pci_dev *VAR_1)
{
 if (!VAR_0)
  goto disable_acs_redir;

 if (!FUNC_0(VAR_1))
  goto disable_acs_redir;

 FUNC_2(VAR_1);

disable_acs_redir:







 FUNC_1(VAR_1);
}
