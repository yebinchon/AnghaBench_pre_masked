
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mtk_mac {int id; scalar_t__ hwlro_ip_cnt; scalar_t__* hwlro_ip; struct mtk_eth* hw; } ;
struct mtk_eth {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_eth*,int) ;
 struct mtk_mac* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct mtk_mac *VAR_2 = FUNC_1(VAR_1);
 struct mtk_eth *VAR_3 = VAR_2->hw;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2->hwlro_ip[VAR_4] = 0;
  VAR_5 = (VAR_2->id * VAR_0) + VAR_4;

  FUNC_0(VAR_3, VAR_5);
 }

 VAR_2->hwlro_ip_cnt = 0;
}
