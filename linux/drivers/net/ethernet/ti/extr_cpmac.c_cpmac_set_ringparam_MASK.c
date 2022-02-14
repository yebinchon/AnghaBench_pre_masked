
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; } ;
struct cpmac_priv {int ring_size; } ;


 int VAR_0 ;
 struct cpmac_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
      struct ethtool_ringparam *VAR_2)
{
 struct cpmac_priv *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_1))
  return -VAR_0;
 VAR_3->ring_size = VAR_2->rx_pending;

 return 0;
}
