
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * set_phy_power; } ;
struct ixgbe_phy_info {TYPE_2__ ops; } ;
struct TYPE_3__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct ixgbe_mac_info {TYPE_1__ ops; } ;
struct ixgbe_link_info {int addr; } ;
struct ixgbe_hw {struct ixgbe_link_info link; struct ixgbe_phy_info phy; struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_2)
{
 struct ixgbe_mac_info *VAR_3 = &VAR_2->mac;
 struct ixgbe_phy_info *VAR_4 = &VAR_2->phy;
 struct ixgbe_link_info *VAR_5 = &VAR_2->link;


 FUNC_0(VAR_2);

 if (VAR_3->ops.get_media_type(VAR_2) != VAR_1)
  VAR_4->ops.set_phy_power = ((void*)0);

 VAR_5->addr = VAR_0;

 return 0;
}
