
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_core {int bus_priv; TYPE_1__* bus; } ;
struct TYPE_2__ {int (* read_frc_l ) (int ) ;} ;


 int FUNC_0 (int ) ;

u32 FUNC_1(struct mlxsw_core *VAR_0)
{
 return VAR_0->bus->read_frc_l(VAR_0->bus_priv);
}
