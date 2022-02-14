
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rtnl_link_stats64 {int tx_bytes; int tx_packets; } ;
struct TYPE_2__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct ixgbe_ring {TYPE_1__ stats; int syncp; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct rtnl_link_stats64 *VAR_0,
       struct ixgbe_ring *VAR_1)
{
 u64 VAR_2, VAR_3;
 unsigned int VAR_4;

 if (VAR_1) {
  do {
   VAR_4 = FUNC_0(&VAR_1->syncp);
   VAR_3 = VAR_1->stats.packets;
   VAR_2 = VAR_1->stats.bytes;
  } while (FUNC_1(&VAR_1->syncp, VAR_4));
  VAR_0->tx_packets += VAR_3;
  VAR_0->tx_bytes += VAR_2;
 }
}
