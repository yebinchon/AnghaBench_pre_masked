
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int mtu; int features; } ;
struct TYPE_4__ {int type; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct TYPE_3__ {int up; } ;
struct ixgbe_adapter {TYPE_1__ fcoe; struct net_device* netdev; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;




 int FUNC_3 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct ixgbe_adapter *VAR_4, int VAR_5)
{
 struct ixgbe_hw *VAR_6 = &VAR_4->hw;
 struct net_device *VAR_7 = VAR_4->netdev;
 int VAR_8;
 u32 VAR_9;


 VAR_8 = VAR_7->mtu + VAR_1 + VAR_0;
 switch (VAR_6->mac.type) {
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_9 = FUNC_2(VAR_8);
  break;
 default:
  VAR_9 = FUNC_1(VAR_8);
  break;
 }


 return FUNC_0(VAR_9);
}
