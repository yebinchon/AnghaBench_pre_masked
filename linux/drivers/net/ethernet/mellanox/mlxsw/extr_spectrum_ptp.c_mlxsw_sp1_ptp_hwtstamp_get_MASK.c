
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwtstamp_config {int dummy; } ;
struct TYPE_2__ {struct hwtstamp_config hwtstamp_config; } ;
struct mlxsw_sp_port {TYPE_1__ ptp; } ;



int FUNC_0(struct mlxsw_sp_port *VAR_0,
          struct hwtstamp_config *VAR_1)
{
 *VAR_1 = VAR_0->ptp.hwtstamp_config;
 return 0;
}
