
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rx_pause; scalar_t__ tx_pause; } ;
struct mlxsw_sp_port {TYPE_1__ link; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct mlxsw_sp_port *VAR_0)
{
 return VAR_0->link.tx_pause || VAR_0->link.rx_pause;
}
