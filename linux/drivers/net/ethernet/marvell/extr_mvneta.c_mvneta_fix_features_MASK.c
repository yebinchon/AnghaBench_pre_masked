
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mtu; } ;
struct mvneta_port {scalar_t__ tx_csum_limit; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*,scalar_t__) ;
 struct mvneta_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_2,
          netdev_features_t VAR_3)
{
 struct mvneta_port *VAR_4 = FUNC_1(VAR_2);

 if (VAR_4->tx_csum_limit && VAR_2->mtu > VAR_4->tx_csum_limit) {
  VAR_3 &= ~(VAR_0 | VAR_1);
  FUNC_0(VAR_2,
       "Disable IP checksum for MTU greater than %dB\n",
       VAR_4->tx_csum_limit);
 }

 return VAR_3;
}
