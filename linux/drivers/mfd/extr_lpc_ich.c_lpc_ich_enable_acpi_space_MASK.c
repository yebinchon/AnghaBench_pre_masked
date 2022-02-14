
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct lpc_ich_priv {size_t chipset; int abase_save; int actrl_pbase_save; int actrl_pbase; int abase; } ;
struct TYPE_2__ {int iTCO_version; } ;


 TYPE_1__* VAR_0 ;
 struct lpc_ich_priv* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 struct lpc_ich_priv *VAR_2 = FUNC_0(VAR_1);
 u8 VAR_3;

 switch (VAR_0[VAR_2->chipset].iTCO_version) {
 case 3:




  FUNC_1(VAR_1, VAR_2->abase, &VAR_3);
  FUNC_2(VAR_1, VAR_2->abase, VAR_3 | 0x2);
  VAR_2->abase_save = VAR_3;
  break;
 default:




  FUNC_1(VAR_1, VAR_2->actrl_pbase, &VAR_3);
  FUNC_2(VAR_1, VAR_2->actrl_pbase, VAR_3 | 0x80);
  VAR_2->actrl_pbase_save = VAR_3;
  break;
 }
}
