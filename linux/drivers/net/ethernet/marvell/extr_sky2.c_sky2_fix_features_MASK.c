
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {struct sky2_hw* hw; } ;
struct sky2_hw {scalar_t__ chip_id; int flags; } ;
struct net_device {scalar_t__ mtu; } ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct sky2_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_8,
 netdev_features_t VAR_9)
{
 const struct sky2_port *VAR_10 = FUNC_1(VAR_8);
 const struct sky2_hw *VAR_11 = VAR_10->hw;




 if (VAR_8->mtu > VAR_1 && VAR_11->chip_id == VAR_0) {
  FUNC_0(VAR_8, "checksum offload not possible with jumbo frames\n");
  VAR_9 &= ~(VAR_6 | VAR_5 | VAR_2);
 }


 if ( (VAR_9 & VAR_4) &&
      !(VAR_9 & VAR_3) &&
      (VAR_10->hw->flags & VAR_7)) {
  FUNC_0(VAR_8, "receive hashing forces receive checksum\n");
  VAR_9 |= VAR_3;
 }

 return VAR_9;
}
