
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netsec_priv {int rx_cksum_offload_flag; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 struct netsec_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
          netdev_features_t VAR_2)
{
 struct netsec_priv *VAR_3 = FUNC_0(VAR_1);

 VAR_3->rx_cksum_offload_flag = !!(VAR_2 & VAR_0);

 return 0;
}
