
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int rsc_flush; int rsc_count; } ;
struct ixgbe_ring {TYPE_1__ rx_stats; } ;
struct TYPE_4__ {scalar_t__ append_cnt; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ixgbe_ring*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_ring *VAR_0,
       struct sk_buff *VAR_1)
{

 if (!FUNC_0(VAR_1)->append_cnt)
  return;

 VAR_0->rx_stats.rsc_count += FUNC_0(VAR_1)->append_cnt;
 VAR_0->rx_stats.rsc_flush++;

 FUNC_1(VAR_0, VAR_1);


 FUNC_0(VAR_1)->append_cnt = 0;
}
