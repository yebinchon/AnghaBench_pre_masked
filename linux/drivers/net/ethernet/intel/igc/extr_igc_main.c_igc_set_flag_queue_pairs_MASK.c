
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igc_adapter {int const rss_queues; int flags; } ;


 int VAR_0 ;

void FUNC_0(struct igc_adapter *VAR_1,
         const u32 VAR_2)
{




 if (VAR_1->rss_queues > (VAR_2 / 2))
  VAR_1->flags |= VAR_0;
 else
  VAR_1->flags &= ~VAR_0;
}
