
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mtk_mac {int id; int hwlro_ip_cnt; scalar_t__* hwlro_ip; struct mtk_eth* hw; } ;
struct mtk_eth {int dummy; } ;
struct ethtool_rxnfc {int fs; } ;
struct ethtool_rx_flow_spec {int location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtk_mac*) ;
 int FUNC_1 (struct mtk_eth*,int) ;
 struct mtk_mac* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
    struct ethtool_rxnfc *VAR_3)
{
 struct ethtool_rx_flow_spec *VAR_4 =
  (struct ethtool_rx_flow_spec *)&VAR_3->fs;
 struct mtk_mac *VAR_5 = FUNC_2(VAR_2);
 struct mtk_eth *VAR_6 = VAR_5->hw;
 int VAR_7;

 if (VAR_4->location > 1)
  return -VAR_0;

 VAR_5->hwlro_ip[VAR_4->location] = 0;
 VAR_7 = (VAR_5->id * VAR_1) + VAR_4->location;

 VAR_5->hwlro_ip_cnt = FUNC_0(VAR_5);

 FUNC_1(VAR_6, VAR_7);

 return 0;
}
