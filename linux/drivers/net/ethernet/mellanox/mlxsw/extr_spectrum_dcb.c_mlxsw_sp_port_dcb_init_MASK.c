
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int trust_state; } ;
struct mlxsw_sp_port {TYPE_2__* dev; TYPE_1__ dcb; } ;
struct TYPE_4__ {int * dcbnl_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp_port*) ;
 int FUNC_1 (struct mlxsw_sp_port*) ;
 int FUNC_2 (struct mlxsw_sp_port*) ;
 int FUNC_3 (struct mlxsw_sp_port*) ;
 int FUNC_4 (struct mlxsw_sp_port*) ;

int FUNC_5(struct mlxsw_sp_port *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto err_port_maxrate_init;
 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  goto err_port_pfc_init;

 VAR_2->dcb.trust_state = VAR_0;
 VAR_2->dev->dcbnl_ops = &VAR_1;

 return 0;

err_port_pfc_init:
 FUNC_2(VAR_2);
err_port_maxrate_init:
 FUNC_0(VAR_2);
 return VAR_3;
}
