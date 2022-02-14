
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_7__ {unsigned long first; } ;
struct macb_queue {TYPE_3__ stats; } ;
struct TYPE_5__ {scalar_t__ tx_octets_31_0; } ;
struct TYPE_6__ {TYPE_1__ gem; } ;
struct macb {int (* macb_reg_readl ) (struct macb*,scalar_t__) ;int* ethtool_stats; unsigned int num_queues; struct macb_queue* queues; TYPE_2__ hw_stats; } ;
struct TYPE_8__ {scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_0 (struct macb*,scalar_t__) ;
 int FUNC_1 (struct macb*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct macb *VAR_5)
{
 struct macb_queue *VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;
 unsigned long *VAR_10;

 u32 *VAR_11 = &VAR_5->hw_stats.gem.tx_octets_31_0;

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7, ++VAR_11) {
  u32 VAR_12 = VAR_4[VAR_7].offset;
  u64 VAR_13 = VAR_5->macb_reg_readl(VAR_5, VAR_12);

  VAR_5->ethtool_stats[VAR_7] += VAR_13;
  *VAR_11 += VAR_13;

  if (VAR_12 == VAR_1 || VAR_12 == VAR_0) {

   VAR_13 = VAR_5->macb_reg_readl(VAR_5, VAR_12 + 4);
   VAR_5->ethtool_stats[VAR_7] += ((u64)VAR_13) << 32;
   *(++VAR_11) += VAR_13;
  }
 }

 VAR_9 = VAR_2;
 for (VAR_8 = 0, VAR_6 = VAR_5->queues; VAR_8 < VAR_5->num_queues; ++VAR_8, ++VAR_6)
  for (VAR_7 = 0, VAR_10 = &VAR_6->stats.first; VAR_7 < VAR_3; ++VAR_7, ++VAR_10)
   VAR_5->ethtool_stats[VAR_9++] = *VAR_10;
}
