
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int mtu; int features; } ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; struct net_device* netdev; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct ixgbe_adapter*) ;





__attribute__((used)) static int FUNC_8(struct ixgbe_adapter *VAR_7, int VAR_8)
{
 struct ixgbe_hw *VAR_9 = &VAR_7->hw;
 struct net_device *VAR_10 = VAR_7->netdev;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16;


 VAR_12 = VAR_11 = VAR_10->mtu + VAR_1 + VAR_0 + VAR_2;
 switch (VAR_9->mac.type) {
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_15 = FUNC_3(VAR_11, VAR_12);
  break;
 default:
  VAR_15 = FUNC_2(VAR_11, VAR_12);
  break;
 }


 if (VAR_7->flags & VAR_4)
  VAR_15 += FUNC_0(VAR_12);


 VAR_13 = FUNC_1(VAR_15);
 VAR_16 = FUNC_4(VAR_9, FUNC_5(VAR_8)) >> 10;

 VAR_14 = VAR_16 - VAR_13;





 if (VAR_14 < 0) {
  FUNC_6(VAR_6, "Packet Buffer(%i) can not provide enough"
       "headroom to support flow control."
       "Decrease MTU or number of traffic classes\n", VAR_8);
  VAR_14 = VAR_12 + 1;
 }

 return VAR_14;
}
