
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sx_port {int local_port; struct mlxsw_sx* mlxsw_sx; } ;
struct mlxsw_sx {int core; } ;
typedef enum mlxsw_reg_spmlr_learn_mode { ____Placeholder_mlxsw_reg_spmlr_learn_mode } mlxsw_reg_spmlr_learn_mode ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sx_port *VAR_2,
        enum mlxsw_reg_spmlr_learn_mode VAR_3)
{
 struct mlxsw_sx *VAR_4 = VAR_2->mlxsw_sx;
 char VAR_5[VAR_0];

 FUNC_1(VAR_5, VAR_2->local_port, VAR_3);
 return FUNC_2(VAR_4->core, FUNC_0(VAR_1), VAR_5);
}
