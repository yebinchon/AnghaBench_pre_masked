
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct fec_enet_private {int napi; int pause_flag; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; scalar_t__ autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct fec_enet_private* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_4,
       struct ethtool_pauseparam *VAR_5)
{
 struct fec_enet_private *VAR_6 = FUNC_5(VAR_4);

 if (!VAR_4->phydev)
  return -VAR_1;

 if (VAR_5->tx_pause != VAR_5->rx_pause) {
  FUNC_4(VAR_4,
   "hardware only support enable/disable both tx and rx");
  return -VAR_0;
 }

 VAR_6->pause_flag = 0;


 VAR_6->pause_flag |= VAR_5->rx_pause ? VAR_3 : 0;
 VAR_6->pause_flag |= VAR_5->autoneg ? VAR_2 : 0;

 FUNC_10(VAR_4->phydev, VAR_5->rx_pause, VAR_5->tx_pause,
     VAR_5->autoneg);

 if (VAR_5->autoneg) {
  if (FUNC_6(VAR_4))
   FUNC_1(VAR_4);
  FUNC_11(VAR_4->phydev);
 }
 if (FUNC_6(VAR_4)) {
  FUNC_2(&VAR_6->napi);
  FUNC_7(VAR_4);
  FUNC_0(VAR_4);
  FUNC_9(VAR_4);
  FUNC_8(VAR_4);
  FUNC_3(&VAR_6->napi);
 }

 return 0;
}
