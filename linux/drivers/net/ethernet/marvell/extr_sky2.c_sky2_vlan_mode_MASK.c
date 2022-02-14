
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_port {int port; struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;
struct net_device {int vlan_features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sky2_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_9, netdev_features_t VAR_10)
{
 struct sky2_port *VAR_11 = FUNC_1(VAR_9);
 struct sky2_hw *VAR_12 = VAR_11->hw;
 u16 VAR_13 = VAR_11->port;

 if (VAR_10 & VAR_0)
  FUNC_2(VAR_12, FUNC_0(VAR_13, VAR_2),
        VAR_4);
 else
  FUNC_2(VAR_12, FUNC_0(VAR_13, VAR_2),
        VAR_3);

 if (VAR_10 & VAR_1) {
  FUNC_2(VAR_12, FUNC_0(VAR_13, VAR_6),
        VAR_8);

  VAR_9->vlan_features |= VAR_5;
 } else {
  FUNC_2(VAR_12, FUNC_0(VAR_13, VAR_6),
        VAR_7);


  VAR_9->vlan_features &= ~VAR_5;
 }
}
