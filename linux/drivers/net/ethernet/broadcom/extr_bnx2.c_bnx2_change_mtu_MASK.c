
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct bnx2 {int tx_ring_size; int rx_ring_size; } ;


 int FUNC_0 (struct bnx2*,int ,int ,int) ;
 struct bnx2* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_0, int VAR_1)
{
 struct bnx2 *VAR_2 = FUNC_1(VAR_0);

 VAR_0->mtu = VAR_1;
 return FUNC_0(VAR_2, VAR_2->rx_ring_size, VAR_2->tx_ring_size,
         0);
}
