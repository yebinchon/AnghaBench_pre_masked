
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp {TYPE_2__* nve; } ;
typedef int __be16 ;
struct TYPE_3__ {int udp_dport; } ;
struct TYPE_4__ {TYPE_1__ config; } ;


 int FUNC_0 (struct mlxsw_sp*,int ) ;

int FUNC_1(struct mlxsw_sp *VAR_0)
{
 __be16 VAR_1 = VAR_0->nve->config.udp_dport;

 return FUNC_0(VAR_0, VAR_1);
}
