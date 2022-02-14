
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_info {int tx_stats; int rx_stats; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct netfront_info* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct netfront_info *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->rx_stats);
 FUNC_1(VAR_1->tx_stats);
 FUNC_0(VAR_0);
}
