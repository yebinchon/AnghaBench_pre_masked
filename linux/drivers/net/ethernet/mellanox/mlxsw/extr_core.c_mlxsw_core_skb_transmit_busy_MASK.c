
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_tx_info {int dummy; } ;
struct mlxsw_core {int bus_priv; TYPE_1__* bus; } ;
struct TYPE_2__ {int (* skb_transmit_busy ) (int ,struct mlxsw_tx_info const*) ;} ;


 int FUNC_0 (int ,struct mlxsw_tx_info const*) ;

bool FUNC_1(struct mlxsw_core *VAR_0,
      const struct mlxsw_tx_info *VAR_1)
{
 return VAR_0->bus->skb_transmit_busy(VAR_0->bus_priv,
        VAR_1);
}
