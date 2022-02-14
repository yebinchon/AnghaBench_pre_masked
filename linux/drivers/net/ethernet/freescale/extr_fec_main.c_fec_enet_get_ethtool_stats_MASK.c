
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct fec_enet_private {int ethtool_stats; } ;
struct ethtool_stats {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ,int ) ;
 struct fec_enet_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
           struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct fec_enet_private *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_3(VAR_1))
  FUNC_0(VAR_1);

 FUNC_1(VAR_3, VAR_4->ethtool_stats, VAR_0);
}
