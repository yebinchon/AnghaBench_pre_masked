
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {int bypass_txq; } ;
struct TYPE_2__ {int (* is_port_ready ) (struct mwifiex_private*) ;} ;
struct mwifiex_adapter {int priv_num; TYPE_1__ if_ops; struct mwifiex_private** priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mwifiex_private*) ;

int FUNC_2(struct mwifiex_adapter *VAR_0)
{
 struct mwifiex_private *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->priv_num; VAR_2++) {
  VAR_1 = VAR_0->priv[VAR_2];
  if (!VAR_1)
   continue;
  if (VAR_0->if_ops.is_port_ready &&
      !VAR_0->if_ops.is_port_ready(VAR_1))
   continue;
  if (!FUNC_0(&VAR_1->bypass_txq))
   return 0;
 }

 return 1;
}
