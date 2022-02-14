
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct veth_rq_stats {int syncp; } ;
struct veth_priv {TYPE_1__* rq; int peer; } ;
struct net_device {int real_num_rx_queues; int ifindex; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_4__ {size_t offset; } ;
struct TYPE_3__ {struct veth_rq_stats stats; } ;


 int VAR_0 ;
 struct veth_priv* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int ) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2,
  struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct veth_priv *VAR_5 = FUNC_0(VAR_2);
 struct net_device *VAR_6 = FUNC_1(VAR_5->peer);
 int VAR_7, VAR_8, VAR_9;

 VAR_4[0] = VAR_6 ? VAR_6->ifindex : 0;
 VAR_9 = 1;
 for (VAR_7 = 0; VAR_7 < VAR_2->real_num_rx_queues; VAR_7++) {
  const struct veth_rq_stats *VAR_10 = &VAR_5->rq[VAR_7].stats;
  const void *VAR_11 = (void *)VAR_10;
  unsigned int VAR_12;
  size_t VAR_13;

  do {
   VAR_12 = FUNC_2(&VAR_10->syncp);
   for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
    VAR_13 = VAR_1[VAR_8].offset;
    VAR_4[VAR_9 + VAR_8] = *(u64 *)(VAR_11 + VAR_13);
   }
  } while (FUNC_3(&VAR_10->syncp, VAR_12));
  VAR_9 += VAR_0;
 }
}
