
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dequeue_portal_busy; int pull_err; } ;
struct dpaa2_eth_channel {TYPE_1__ stats; int store; int ch_id; int dpio; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dpaa2_eth_channel *VAR_1)
{
 int VAR_2;
 int VAR_3 = -1;


 do {
  VAR_2 = FUNC_1(VAR_1->dpio, VAR_1->ch_id,
          VAR_1->store);
  VAR_3++;
  FUNC_0();
 } while (VAR_2 == -VAR_0);

 VAR_1->stats.dequeue_portal_busy += VAR_3;
 if (FUNC_2(VAR_2))
  VAR_1->stats.pull_err++;

 return VAR_2;
}
