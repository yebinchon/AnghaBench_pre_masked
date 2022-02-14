
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int link_duplex; int link_speed; } ;
struct pch_gbe_hw {TYPE_1__ mac; } ;
struct pch_gbe_adapter {scalar_t__ wake_up_evt; struct pch_gbe_hw hw; } ;
struct net_device {int dummy; } ;


 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pch_gbe_adapter*) ;
 int FUNC_4 (struct pch_gbe_adapter*) ;
 int FUNC_5 (struct pch_gbe_hw*,scalar_t__) ;
 int FUNC_6 (struct pch_gbe_hw*) ;
 int FUNC_7 (struct pch_gbe_adapter*,int ,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct pch_gbe_adapter*,int ,int ) ;
 int FUNC_10 (struct pch_gbe_adapter*) ;
 int FUNC_11 (struct pci_dev*) ;
 struct net_device* FUNC_12 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_12(VAR_0);
 struct pch_gbe_adapter *VAR_2 = FUNC_0(VAR_1);
 struct pch_gbe_hw *VAR_3 = &VAR_2->hw;
 u32 VAR_4 = VAR_2->wake_up_evt;
 int VAR_5 = 0;

 FUNC_1(VAR_1);
 if (FUNC_2(VAR_1))
  FUNC_4(VAR_2);
 if (VAR_4) {
  FUNC_8(VAR_1);
  FUNC_10(VAR_2);
  FUNC_3(VAR_2);
  FUNC_9(VAR_2, VAR_3->mac.link_speed,
     VAR_3->mac.link_duplex);
  FUNC_7(VAR_2, VAR_3->mac.link_speed,
     VAR_3->mac.link_duplex);
  FUNC_5(VAR_3, VAR_4);
  FUNC_11(VAR_0);
 } else {
  FUNC_6(VAR_3);
  FUNC_5(VAR_3, VAR_4);
  FUNC_11(VAR_0);
 }
 return VAR_5;
}
