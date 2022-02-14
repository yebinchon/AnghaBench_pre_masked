
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; struct e1000_hw hw; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct igb_adapter*,int ,int) ;
 struct igb_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_5, netdev_features_t VAR_6)
{
 struct igb_adapter *VAR_7 = FUNC_1(VAR_5);
 struct e1000_hw *VAR_8 = &VAR_7->hw;
 u32 VAR_9, VAR_10;
 bool VAR_11 = !!(VAR_6 & VAR_4);

 if (VAR_11) {

  VAR_9 = FUNC_2(VAR_0);
  VAR_9 |= VAR_1;
  FUNC_3(VAR_0, VAR_9);


  VAR_10 = FUNC_2(VAR_2);
  VAR_10 &= ~VAR_3;
  FUNC_3(VAR_2, VAR_10);
 } else {

  VAR_9 = FUNC_2(VAR_0);
  VAR_9 &= ~VAR_1;
  FUNC_3(VAR_0, VAR_9);
 }

 FUNC_0(VAR_7, VAR_7->vfs_allocated_count, VAR_11);
}
