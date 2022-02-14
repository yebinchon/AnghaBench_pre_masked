
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rx_chain; } ;
struct TYPE_5__ {scalar_t__ rx_chain; } ;
struct il_priv {TYPE_3__ staging; TYPE_2__ active; TYPE_1__* ops; } ;
struct TYPE_4__ {int (* set_rxon_chain ) (struct il_priv*) ;} ;


 int FUNC_0 (struct il_priv*) ;
 int FUNC_1 (struct il_priv*) ;

void
FUNC_2(struct il_priv *VAR_0)
{
 if (VAR_0->ops->set_rxon_chain) {
  VAR_0->ops->set_rxon_chain(VAR_0);
  if (VAR_0->active.rx_chain != VAR_0->staging.rx_chain)
   FUNC_0(VAR_0);
 }
}
