
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mtk_mac {scalar_t__* hwlro_ip; } ;
struct ethtool_rxnfc {int rule_cnt; } ;


 int VAR_0 ;
 struct mtk_mac* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
      struct ethtool_rxnfc *VAR_2,
      u32 *VAR_3)
{
 struct mtk_mac *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_4->hwlro_ip[VAR_6]) {
   VAR_3[VAR_5] = VAR_6;
   VAR_5++;
  }
 }

 VAR_2->rule_cnt = VAR_5;

 return 0;
}
