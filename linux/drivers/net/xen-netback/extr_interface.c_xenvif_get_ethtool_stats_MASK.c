
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u64 ;
struct xenvif {TYPE_1__* queues; int num_queues; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_5__ {int offset; } ;
struct TYPE_4__ {int stats; } ;


 int FUNC_0 (TYPE_2__*) ;
 unsigned int FUNC_1 (int ) ;
 struct xenvif* FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
         struct ethtool_stats *VAR_2, u64 * VAR_3)
{
 struct xenvif *VAR_4 = FUNC_2(VAR_1);
 unsigned int VAR_5;
 int VAR_6;
 unsigned int VAR_7;

 FUNC_3();
 VAR_5 = FUNC_1(VAR_4->num_queues);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  unsigned long VAR_8 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
   void *VAR_9 = &VAR_4->queues[VAR_7].stats;
   VAR_8 += *(unsigned long *)(VAR_9 + VAR_0[VAR_6].offset);
  }
  VAR_3[VAR_6] = VAR_8;
 }

 FUNC_4();
}
