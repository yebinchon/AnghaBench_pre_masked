
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_port {TYPE_2__* mlxsw_sp; } ;
struct hwtstamp_config {int member_0; } ;
struct TYPE_4__ {TYPE_1__* ptp_ops; } ;
struct TYPE_3__ {int (* hwtstamp_set ) (struct mlxsw_sp_port*,struct hwtstamp_config*) ;} ;


 int FUNC_0 (struct mlxsw_sp_port*,struct hwtstamp_config*) ;

__attribute__((used)) static inline void FUNC_1(struct mlxsw_sp_port *VAR_0)
{
 struct hwtstamp_config VAR_1 = {0};

 VAR_0->mlxsw_sp->ptp_ops->hwtstamp_set(VAR_0, &VAR_1);
}
