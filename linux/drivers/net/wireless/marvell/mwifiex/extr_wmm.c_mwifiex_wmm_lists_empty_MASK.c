
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_pkts_queued; } ;
struct mwifiex_private {scalar_t__ bss_mode; TYPE_1__ wmm; int port_open; } ;
struct TYPE_4__ {int (* is_port_ready ) (struct mwifiex_private*) ;} ;
struct mwifiex_adapter {int priv_num; TYPE_2__ if_ops; struct mwifiex_private** priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mwifiex_private*) ;

int
FUNC_2(struct mwifiex_adapter *VAR_1)
{
 int VAR_2;
 struct mwifiex_private *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->priv_num; ++VAR_2) {
  VAR_3 = VAR_1->priv[VAR_2];
  if (!VAR_3)
   continue;
  if (!VAR_3->port_open &&
      (VAR_3->bss_mode != VAR_0))
   continue;
  if (VAR_1->if_ops.is_port_ready &&
      !VAR_1->if_ops.is_port_ready(VAR_3))
   continue;
  if (FUNC_0(&VAR_3->wmm.tx_pkts_queued))
   return 0;
 }

 return 1;
}
