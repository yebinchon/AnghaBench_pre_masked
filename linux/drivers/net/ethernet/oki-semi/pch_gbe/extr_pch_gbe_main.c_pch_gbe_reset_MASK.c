
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_hw {int dummy; } ;
struct pch_gbe_adapter {struct net_device* netdev; struct pch_gbe_hw hw; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct pch_gbe_hw*,int ) ;
 int FUNC_2 (struct pch_gbe_hw*) ;
 scalar_t__ FUNC_3 (struct pch_gbe_hw*) ;
 int FUNC_4 (struct pch_gbe_hw*) ;
 int FUNC_5 (struct pch_gbe_hw*) ;
 int FUNC_6 (struct net_device*) ;

void FUNC_7(struct pch_gbe_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 struct pch_gbe_hw *VAR_3 = &VAR_1->hw;
 s32 VAR_4;

 FUNC_2(VAR_3);

 FUNC_6(VAR_2);

 FUNC_1(VAR_3, VAR_0);

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_1->netdev, "pch_gbe_phy_get_id error\n");
  return;
 }
 FUNC_4(VAR_3);

 FUNC_5(VAR_3);
}
