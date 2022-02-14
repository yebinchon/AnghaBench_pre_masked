
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct lpc_ich_priv {int actrl_pbase_save; int actrl_pbase; } ;


 struct lpc_ich_priv* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct lpc_ich_priv *VAR_1 = FUNC_0(VAR_0);
 u8 VAR_2;

 FUNC_1(VAR_0, VAR_1->actrl_pbase, &VAR_2);
 FUNC_2(VAR_0, VAR_1->actrl_pbase, VAR_2 | 0x2);

 VAR_1->actrl_pbase_save = VAR_2;
}
