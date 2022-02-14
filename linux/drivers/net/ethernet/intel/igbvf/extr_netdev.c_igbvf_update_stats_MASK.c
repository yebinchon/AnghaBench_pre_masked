
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_6__ {int mprc; } ;
struct e1000_hw {int dummy; } ;
struct igbvf_adapter {scalar_t__ link_speed; TYPE_3__ stats; TYPE_2__* netdev; int state; struct pci_dev* pdev; struct e1000_hw hw; } ;
struct TYPE_4__ {int multicast; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct igbvf_adapter *VAR_19)
{
 struct e1000_hw *VAR_20 = &VAR_19->hw;
 struct pci_dev *VAR_21 = VAR_19->pdev;




 if (VAR_19->link_speed == 0)
  return;

 if (FUNC_2(VAR_9, &VAR_19->state))
  return;

 if (FUNC_1(VAR_21))
  return;

 FUNC_0(VAR_4, VAR_14);
 FUNC_0(VAR_0, VAR_10);
 FUNC_0(VAR_6, VAR_16);
 FUNC_0(VAR_2, VAR_12);
 FUNC_0(VAR_8, VAR_18);
 FUNC_0(VAR_3, VAR_13);
 FUNC_0(VAR_7, VAR_17);
 FUNC_0(VAR_1, VAR_11);
 FUNC_0(VAR_5, VAR_15);


 VAR_19->netdev->stats.multicast = VAR_19->stats.mprc;
}
