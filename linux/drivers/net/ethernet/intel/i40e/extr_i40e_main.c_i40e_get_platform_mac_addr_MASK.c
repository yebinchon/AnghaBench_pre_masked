
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct i40e_pf {TYPE_2__ hw; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0, struct i40e_pf *VAR_1)
{
 if (FUNC_0(&VAR_0->dev, VAR_1->hw.mac.addr))
  FUNC_1(&VAR_1->hw, VAR_1->hw.mac.addr);
}
