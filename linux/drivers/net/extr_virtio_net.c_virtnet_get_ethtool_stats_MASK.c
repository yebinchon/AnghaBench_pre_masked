
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct virtnet_info {unsigned int curr_queue_pairs; struct send_queue* sq; struct receive_queue* rq; } ;
struct TYPE_6__ {int syncp; } ;
struct send_queue {TYPE_2__ stats; } ;
struct TYPE_5__ {int syncp; } ;
struct receive_queue {TYPE_1__ stats; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_8__ {size_t offset; } ;
struct TYPE_7__ {size_t offset; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct virtnet_info* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4,
          struct ethtool_stats *VAR_5, u64 *VAR_6)
{
 struct virtnet_info *VAR_7 = FUNC_0(VAR_4);
 unsigned int VAR_8 = 0, VAR_9, VAR_10, VAR_11;
 const u8 *VAR_12;
 size_t VAR_13;

 for (VAR_10 = 0; VAR_10 < VAR_7->curr_queue_pairs; VAR_10++) {
  struct receive_queue *VAR_14 = &VAR_7->rq[VAR_10];

  VAR_12 = (u8 *)&VAR_14->stats;
  do {
   VAR_9 = FUNC_1(&VAR_14->stats.syncp);
   for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
    VAR_13 = VAR_2[VAR_11].offset;
    VAR_6[VAR_8 + VAR_11] = *(u64 *)(VAR_12 + VAR_13);
   }
  } while (FUNC_2(&VAR_14->stats.syncp, VAR_9));
  VAR_8 += VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7->curr_queue_pairs; VAR_10++) {
  struct send_queue *VAR_15 = &VAR_7->sq[VAR_10];

  VAR_12 = (u8 *)&VAR_15->stats;
  do {
   VAR_9 = FUNC_1(&VAR_15->stats.syncp);
   for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
    VAR_13 = VAR_3[VAR_11].offset;
    VAR_6[VAR_8 + VAR_11] = *(u64 *)(VAR_12 + VAR_13);
   }
  } while (FUNC_2(&VAR_15->stats.syncp, VAR_9));
  VAR_8 += VAR_1;
 }
}
