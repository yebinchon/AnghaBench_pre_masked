
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf_test {int cmd_handler; } ;
struct pci_epf {int dummy; } ;


 struct pci_epf_test* FUNC_0 (struct pci_epf*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct pci_epf *VAR_1)
{
 struct pci_epf_test *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_0, &VAR_2->cmd_handler,
      FUNC_1(1));
}
