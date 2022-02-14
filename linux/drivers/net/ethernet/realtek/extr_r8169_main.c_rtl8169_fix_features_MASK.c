
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ mac_version; } ;
struct net_device {scalar_t__ mtu; } ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct rtl8169_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_1(struct net_device *VAR_5,
 netdev_features_t VAR_6)
{
 struct rtl8169_private *VAR_7 = FUNC_0(VAR_5);

 if (VAR_5->mtu > VAR_4)
  VAR_6 &= ~VAR_1;

 if (VAR_5->mtu > VAR_0 &&
     VAR_7->mac_version > VAR_3)
  VAR_6 &= ~VAR_2;

 return VAR_6;
}
