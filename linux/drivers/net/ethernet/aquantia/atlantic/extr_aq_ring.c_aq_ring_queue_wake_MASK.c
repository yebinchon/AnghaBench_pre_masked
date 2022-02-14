
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int queue_restarts; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct aq_ring_s {TYPE_2__ stats; int idx; int aq_nic; } ;


 scalar_t__ FUNC_0 (struct net_device*,int ) ;
 struct net_device* FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ) ;

void FUNC_3(struct aq_ring_s *VAR_0)
{
 struct net_device *VAR_1 = FUNC_1(VAR_0->aq_nic);

 if (FUNC_0(VAR_1, VAR_0->idx)) {
  FUNC_2(VAR_1, VAR_0->idx);
  VAR_0->stats.tx.queue_restarts++;
 }
}
