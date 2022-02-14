
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ vlan_id; int status; } ;
struct e1000_hw {TYPE_1__ mng_cookie; } ;
struct igb_adapter {scalar_t__ vfs_allocated_count; scalar_t__ mng_vlan_id; int active_vlans; struct e1000_hw hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct e1000_hw*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_2->hw;
 u16 VAR_4 = VAR_2->vfs_allocated_count;
 u16 VAR_5 = VAR_2->hw.mng_cookie.vlan_id;
 u16 VAR_6 = VAR_2->mng_vlan_id;

 if (VAR_3->mng_cookie.status & VAR_0) {

  FUNC_0(VAR_3, VAR_5, VAR_4, 1, 1);
  VAR_2->mng_vlan_id = VAR_5;
 } else {
  VAR_2->mng_vlan_id = VAR_1;
 }

 if ((VAR_6 != (u16)VAR_1) &&
     (VAR_5 != VAR_6) &&
     !FUNC_1(VAR_6, VAR_2->active_vlans)) {

  FUNC_0(VAR_3, VAR_5, VAR_4, 0, 1);
 }
}
