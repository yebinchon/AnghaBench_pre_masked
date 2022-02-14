
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_host_tx_ring {int producer; int crb_cmd_producer; } ;
struct netxen_adapter {int dummy; } ;


 int FUNC_0 (struct netxen_adapter*,int ,int ) ;

void
FUNC_1(struct netxen_adapter *VAR_0,
  struct nx_host_tx_ring *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->crb_cmd_producer, VAR_1->producer);
}
