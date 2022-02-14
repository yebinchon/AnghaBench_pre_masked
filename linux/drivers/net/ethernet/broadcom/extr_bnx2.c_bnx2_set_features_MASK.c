
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int vlan_features; int hw_features; int features; } ;
struct bnx2 {int rx_mode; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnx2*,int ,int ,int) ;
 int FUNC_1 (struct bnx2*,int) ;
 int FUNC_2 (struct bnx2*,int) ;
 int FUNC_3 (struct net_device*) ;
 struct bnx2* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_5, netdev_features_t VAR_6)
{
 struct bnx2 *VAR_7 = FUNC_4(VAR_5);


 if (VAR_6 & VAR_4)
  VAR_5->vlan_features |= (VAR_5->hw_features & VAR_2);
 else
  VAR_5->vlan_features &= ~VAR_2;

 if ((!!(VAR_6 & VAR_3) !=
     !!(VAR_7->rx_mode & VAR_1)) &&
     FUNC_5(VAR_5)) {
  FUNC_2(VAR_7, 0);
  VAR_5->features = VAR_6;
  FUNC_3(VAR_5);
  FUNC_0(VAR_7, VAR_0, 0, 1);
  FUNC_1(VAR_7, 0);
  return 1;
 }

 return 0;
}
