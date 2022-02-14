
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_rx_flow_spec {int dummy; } ;
struct dpaa2_eth_priv {scalar_t__ rx_cls_fields; struct dpaa2_eth_cls_rule* cls_rules; int rx_cls_enabled; } ;
struct dpaa2_eth_cls_rule {int in_use; struct ethtool_rx_flow_spec fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct ethtool_rx_flow_spec*,int) ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int FUNC_2 (struct dpaa2_eth_priv*) ;
 struct dpaa2_eth_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct dpaa2_eth_priv*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
      struct ethtool_rx_flow_spec *VAR_3,
      int VAR_4)
{
 struct dpaa2_eth_priv *VAR_5 = FUNC_3(VAR_2);
 struct dpaa2_eth_cls_rule *VAR_6;
 int VAR_7 = -VAR_0;

 if (!VAR_5->rx_cls_enabled)
  return -VAR_1;

 if (VAR_4 >= FUNC_1(VAR_5))
  return -VAR_0;

 VAR_6 = &VAR_5->cls_rules[VAR_4];


 if (VAR_6->in_use) {
  VAR_7 = FUNC_0(VAR_2, &VAR_6->fs, 0);
  if (VAR_7)
   return VAR_7;

  VAR_6->in_use = 0;

  if (!FUNC_2(VAR_5) && !FUNC_4(VAR_5))
   VAR_5->rx_cls_fields = 0;
 }


 if (!VAR_3)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, 1);
 if (VAR_7)
  return VAR_7;

 VAR_6->in_use = 1;
 VAR_6->fs = *VAR_3;

 return 0;
}
