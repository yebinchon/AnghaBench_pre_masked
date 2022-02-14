
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct bnx2x_vlan_entry {int hw; int link; int vid; } ;
struct bnx2x {int vlan_reg; } ;
typedef int __be16 ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int) ;
 struct bnx2x_vlan_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct bnx2x* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, __be16 VAR_4, u16 VAR_5)
{
 struct bnx2x *VAR_6 = FUNC_4(VAR_3);
 struct bnx2x_vlan_entry *VAR_7;

 FUNC_0(VAR_2, "Adding VLAN %d\n", VAR_5);

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->vid = VAR_5;
 VAR_7->hw = 0;
 FUNC_3(&VAR_7->link, &VAR_6->vlan_reg);

 if (FUNC_5(VAR_3))
  FUNC_1(VAR_6, 1);

 return 0;
}
