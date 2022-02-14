
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ vlan_id; int status; } ;
struct e1000_hw {TYPE_1__ mng_cookie; } ;
struct e1000_adapter {scalar_t__ mng_vlan_id; int active_vlans; struct net_device* netdev; struct e1000_hw hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ,scalar_t__) ;
 int FUNC_1 (struct net_device*,int ,scalar_t__) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct e1000_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 struct net_device *VAR_5 = VAR_3->netdev;
 u16 VAR_6 = VAR_4->mng_cookie.vlan_id;
 u16 VAR_7 = VAR_3->mng_vlan_id;

 if (!FUNC_2(VAR_3))
  return;

 if (!FUNC_4(VAR_6, VAR_3->active_vlans)) {
  if (VAR_4->mng_cookie.status &
      VAR_0) {
   FUNC_0(VAR_5, FUNC_3(VAR_2), VAR_6);
   VAR_3->mng_vlan_id = VAR_6;
  } else {
   VAR_3->mng_vlan_id = VAR_1;
  }
  if ((VAR_7 != (u16)VAR_1) &&
      (VAR_6 != VAR_7) &&
      !FUNC_4(VAR_7, VAR_3->active_vlans))
   FUNC_1(VAR_5, FUNC_3(VAR_2),
            VAR_7);
 } else {
  VAR_3->mng_vlan_id = VAR_6;
 }
}
