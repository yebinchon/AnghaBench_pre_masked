
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pasemi_mac {int dma_if; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct pasemi_mac* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
  struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct pasemi_mac *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 VAR_3[0] = FUNC_3(FUNC_0(VAR_4->dma_if))
   >> VAR_0;
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
  VAR_3[1+VAR_5] = FUNC_4(VAR_4->dma_if, FUNC_1(VAR_5));
}
