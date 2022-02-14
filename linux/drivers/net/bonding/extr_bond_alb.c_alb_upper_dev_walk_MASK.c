
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slave {int dummy; } ;
struct net_device {int lower_level; scalar_t__ addr_assign_type; int * dev_addr; } ;
struct bonding {TYPE_1__* dev; } ;
struct bond_vlan_tag {int vlan_id; int vlan_proto; } ;
struct alb_walk_data {int strict_match; int * mac_addr; struct slave* slave; struct bonding* bond; } ;
struct TYPE_2__ {int lower_level; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct bond_vlan_tag*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct slave*,int *,int ,int ) ;
 struct bond_vlan_tag* FUNC_3 (TYPE_1__*,struct net_device*,int ) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct bond_vlan_tag*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1, void *VAR_2)
{
 struct alb_walk_data *VAR_3 = VAR_2;
 bool VAR_4 = VAR_3->strict_match;
 struct bonding *VAR_5 = VAR_3->bond;
 struct slave *VAR_6 = VAR_3->slave;
 u8 *VAR_7 = VAR_3->mac_addr;
 struct bond_vlan_tag *VAR_8;

 if (FUNC_4(VAR_1) &&
     VAR_5->dev->lower_level == VAR_1->lower_level - 1) {
  if (VAR_1->addr_assign_type == VAR_0) {
   FUNC_2(VAR_6, VAR_7,
     FUNC_8(VAR_1),
     FUNC_7(VAR_1));
  } else {
   FUNC_2(VAR_6, VAR_1->dev_addr,
     FUNC_8(VAR_1),
     FUNC_7(VAR_1));
  }
 }




 if (FUNC_6(VAR_1) && !VAR_4) {
  VAR_8 = FUNC_3(VAR_5->dev, VAR_1, 0);
  if (FUNC_1(VAR_8))
   FUNC_0();
  FUNC_2(VAR_6, VAR_1->dev_addr,
    VAR_8[0].vlan_proto, VAR_8[0].vlan_id);
  FUNC_5(VAR_8);
 }

 return 0;
}
