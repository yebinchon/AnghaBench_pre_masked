
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbe_adapter {int flags2; scalar_t__ xdp_prog; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_3,
         netdev_features_t VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_1(VAR_3);


 if (!(VAR_4 & VAR_2))
  VAR_4 &= ~VAR_1;


 if (!(VAR_5->flags2 & VAR_0))
  VAR_4 &= ~VAR_1;

 if (VAR_5->xdp_prog && (VAR_4 & VAR_1)) {
  FUNC_0("LRO is not supported with XDP\n");
  VAR_4 &= ~VAR_1;
 }

 return VAR_4;
}
