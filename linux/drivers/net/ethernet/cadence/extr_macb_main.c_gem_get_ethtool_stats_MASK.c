
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct macb {int ethtool_stats; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct macb*) ;
 int FUNC_1 (int *,int *,int) ;
 struct macb* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3,
      struct ethtool_stats *VAR_4, u64 *VAR_5)
{
 struct macb *VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 FUNC_0(VAR_6);
 FUNC_1(VAR_5, &VAR_6->ethtool_stats, sizeof(u64)
   * (VAR_0 + VAR_2 * VAR_1));
}
