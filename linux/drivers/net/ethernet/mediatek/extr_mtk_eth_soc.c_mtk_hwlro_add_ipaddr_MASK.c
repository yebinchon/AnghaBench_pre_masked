
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mtk_mac {int id; int * hwlro_ip; int hwlro_ip_cnt; struct mtk_eth* hw; } ;
struct mtk_eth {int dummy; } ;
struct ethtool_rxnfc {int fs; } ;
struct TYPE_3__ {int ip4dst; } ;
struct TYPE_4__ {TYPE_1__ tcp_ip4_spec; } ;
struct ethtool_rx_flow_spec {scalar_t__ flow_type; int location; TYPE_2__ h_u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mtk_mac*) ;
 int FUNC_2 (struct mtk_eth*,int,int ) ;
 struct mtk_mac* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
    struct ethtool_rxnfc *VAR_4)
{
 struct ethtool_rx_flow_spec *VAR_5 =
  (struct ethtool_rx_flow_spec *)&VAR_4->fs;
 struct mtk_mac *VAR_6 = FUNC_3(VAR_3);
 struct mtk_eth *VAR_7 = VAR_6->hw;
 int VAR_8;

 if ((VAR_5->flow_type != VAR_2) ||
     (!VAR_5->h_u.tcp_ip4_spec.ip4dst) ||
     (VAR_5->location > 1))
  return -VAR_0;

 VAR_6->hwlro_ip[VAR_5->location] = FUNC_0(VAR_5->h_u.tcp_ip4_spec.ip4dst);
 VAR_8 = (VAR_6->id * VAR_1) + VAR_5->location;

 VAR_6->hwlro_ip_cnt = FUNC_1(VAR_6);

 FUNC_2(VAR_7, VAR_8, VAR_6->hwlro_ip[VAR_5->location]);

 return 0;
}
