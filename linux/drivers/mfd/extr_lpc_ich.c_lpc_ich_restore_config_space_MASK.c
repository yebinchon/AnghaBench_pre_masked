
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct lpc_ich_priv {int abase_save; int actrl_pbase_save; int gctrl_save; int gctrl; int actrl_pbase; int abase; } ;


 struct lpc_ich_priv* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 struct lpc_ich_priv *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->abase_save >= 0) {
  FUNC_1(VAR_0, VAR_1->abase, VAR_1->abase_save);
  VAR_1->abase_save = -1;
 }

 if (VAR_1->actrl_pbase_save >= 0) {
  FUNC_1(VAR_0, VAR_1->actrl_pbase,
   VAR_1->actrl_pbase_save);
  VAR_1->actrl_pbase_save = -1;
 }

 if (VAR_1->gctrl_save >= 0) {
  FUNC_1(VAR_0, VAR_1->gctrl, VAR_1->gctrl_save);
  VAR_1->gctrl_save = -1;
 }
}
