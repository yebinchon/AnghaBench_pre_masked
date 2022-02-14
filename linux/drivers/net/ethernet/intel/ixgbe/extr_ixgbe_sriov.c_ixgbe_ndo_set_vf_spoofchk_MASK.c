
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int (* set_ethertype_anti_spoofing ) (struct ixgbe_hw*,int,int) ;int (* set_vlan_anti_spoofing ) (struct ixgbe_hw*,int,int) ;int (* set_mac_anti_spoofing ) (struct ixgbe_hw*,int,int) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct ixgbe_adapter {int num_vfs; TYPE_1__* vfinfo; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int spoofchk_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ixgbe_hw*,int,int) ;
 int FUNC_4 (struct ixgbe_hw*,int,int) ;
 int FUNC_5 (struct ixgbe_hw*,int,int) ;

int FUNC_6(struct net_device *VAR_7, int VAR_8, bool VAR_9)
{
 struct ixgbe_adapter *VAR_10 = FUNC_2(VAR_7);
 struct ixgbe_hw *VAR_11 = &VAR_10->hw;

 if (VAR_8 >= VAR_10->num_vfs)
  return -VAR_0;

 VAR_10->vfinfo[VAR_8].spoofchk_enabled = VAR_9;


 VAR_11->mac.ops.set_mac_anti_spoofing(VAR_11, VAR_9, VAR_8);


 VAR_11->mac.ops.set_vlan_anti_spoofing(VAR_11, VAR_9, VAR_8);




 if (VAR_11->mac.ops.set_ethertype_anti_spoofing) {
  FUNC_1(VAR_11, FUNC_0(VAR_5),
    (VAR_3 |
     VAR_6 |
     VAR_1));

  FUNC_1(VAR_11, FUNC_0(VAR_4),
    (VAR_3 |
     VAR_6 |
     VAR_2));

  VAR_11->mac.ops.set_ethertype_anti_spoofing(VAR_11, VAR_9, VAR_8);
 }

 return 0;
}
