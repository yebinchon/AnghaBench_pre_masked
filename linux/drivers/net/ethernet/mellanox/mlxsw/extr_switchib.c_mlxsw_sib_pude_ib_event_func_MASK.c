
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ module; } ;
struct mlxsw_sib_port {TYPE_1__ mapping; } ;
typedef enum mlxsw_reg_pude_oper_status { ____Placeholder_mlxsw_reg_pude_oper_status } mlxsw_reg_pude_oper_status ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sib_port *VAR_1,
        enum mlxsw_reg_pude_oper_status VAR_2)
{
 if (VAR_2 == VAR_0)
  FUNC_0("ib link for port %d - up\n",
   VAR_1->mapping.module + 1);
 else
  FUNC_0("ib link for port %d - down\n",
   VAR_1->mapping.module + 1);
}
