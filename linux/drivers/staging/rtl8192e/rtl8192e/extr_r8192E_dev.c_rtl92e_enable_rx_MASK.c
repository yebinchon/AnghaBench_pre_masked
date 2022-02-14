
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int * rx_ring_dma; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = (struct r8192_priv *)FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_0, VAR_3->rx_ring_dma[VAR_1]);
}
