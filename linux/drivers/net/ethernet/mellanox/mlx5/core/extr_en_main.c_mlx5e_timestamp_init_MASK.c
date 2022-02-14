
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_filter; int tx_type; } ;
struct mlx5e_priv {TYPE_1__ tstamp; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct mlx5e_priv *VAR_2)
{
 VAR_2->tstamp.tx_type = VAR_1;
 VAR_2->tstamp.rx_filter = VAR_0;
}
