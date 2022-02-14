
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vram; } ;
struct sm750_dev {int pvMem; int pvReg; TYPE_1__ mtrr; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct sm750_dev* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct sm750_dev*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_1)
{
 struct sm750_dev *VAR_2;

 VAR_2 = FUNC_3(VAR_1);

 FUNC_4(VAR_2);
 FUNC_0(VAR_2->mtrr.vram);

 FUNC_1(VAR_2->pvReg);
 FUNC_1(VAR_2->pvMem);
 FUNC_2(VAR_0);
}
