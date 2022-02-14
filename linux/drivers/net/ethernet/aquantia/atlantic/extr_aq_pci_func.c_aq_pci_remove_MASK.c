
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct aq_nic_s {TYPE_1__* ndev; TYPE_2__* aq_hw; } ;
struct TYPE_5__ {int mmio; } ;
struct TYPE_4__ {scalar_t__ reg_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (struct aq_nic_s*) ;
 int FUNC_2 (struct aq_nic_s*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct aq_nic_s* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_1)
{
 struct aq_nic_s *VAR_2 = FUNC_7(VAR_1);

 if (VAR_2->ndev) {
  FUNC_0(VAR_2);
  if (VAR_2->ndev->reg_state == VAR_0)
   FUNC_9(VAR_2->ndev);
  FUNC_1(VAR_2);
  FUNC_2(VAR_2);
  FUNC_4(VAR_2->aq_hw->mmio);
  FUNC_5(VAR_2->aq_hw);
  FUNC_8(VAR_1);
  FUNC_3(VAR_2->ndev);
 }

 FUNC_6(VAR_1);
}
