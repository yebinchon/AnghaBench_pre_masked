
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int flags; scalar_t__ mng_vlan_id; struct e1000_hw hw; struct net_device* netdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct e1000_adapter *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->netdev;
 struct e1000_hw *VAR_8 = &VAR_6->hw;
 u32 VAR_9;

 if (VAR_6->flags & VAR_4) {

  VAR_9 = FUNC_1(VAR_5);
  VAR_9 &= ~(VAR_2 | VAR_1);
  FUNC_2(VAR_5, VAR_9);

  if (VAR_6->mng_vlan_id != (u16)VAR_0) {
   FUNC_0(VAR_7, FUNC_3(VAR_3),
            VAR_6->mng_vlan_id);
   VAR_6->mng_vlan_id = VAR_0;
  }
 }
}
