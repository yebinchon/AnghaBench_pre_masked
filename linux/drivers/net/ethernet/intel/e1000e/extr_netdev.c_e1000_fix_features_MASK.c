
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ mtu; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct e1000_adapter {struct e1000_hw hw; } ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct e1000_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_1(struct net_device *VAR_5,
         netdev_features_t VAR_6)
{
 struct e1000_adapter *VAR_7 = FUNC_0(VAR_5);
 struct e1000_hw *VAR_8 = &VAR_7->hw;


 if ((VAR_8->mac.type >= VAR_4) && (VAR_5->mtu > VAR_0))
  VAR_6 &= ~VAR_3;




 if (VAR_6 & VAR_1)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;

 return VAR_6;
}
