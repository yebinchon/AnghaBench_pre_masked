
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {int rx_ring; int tx_ring; } ;
struct net_device {int dummy; } ;


 struct xge_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct xge_pdata *VAR_1 = FUNC_0(VAR_0);

 FUNC_4(VAR_0);
 FUNC_1(VAR_0, VAR_1->tx_ring);

 FUNC_3(VAR_0, 64);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0, VAR_1->rx_ring);
}
