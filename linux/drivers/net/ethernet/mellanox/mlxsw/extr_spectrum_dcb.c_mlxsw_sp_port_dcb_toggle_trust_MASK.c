
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trust_state; } ;
struct mlxsw_sp_port {TYPE_1__ dcb; } ;
typedef enum mlxsw_reg_qpts_trust_state { ____Placeholder_mlxsw_reg_qpts_trust_state } mlxsw_reg_qpts_trust_state ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_port*,int) ;
 int FUNC_1 (struct mlxsw_sp_port*,int) ;

__attribute__((used)) static int
FUNC_2(struct mlxsw_sp_port *VAR_1,
          enum mlxsw_reg_qpts_trust_state VAR_2)
{
 bool VAR_3 = VAR_2 == VAR_0;
 int VAR_4;

 if (VAR_1->dcb.trust_state == VAR_2)
  return 0;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (VAR_4)
  goto err_update_qrwe;

 VAR_1->dcb.trust_state = VAR_2;
 return 0;

err_update_qrwe:
 FUNC_0(VAR_1,
       VAR_1->dcb.trust_state);
 return VAR_4;
}
