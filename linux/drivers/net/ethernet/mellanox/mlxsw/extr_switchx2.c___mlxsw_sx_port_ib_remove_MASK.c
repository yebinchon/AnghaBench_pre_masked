
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mlxsw_sx_port {int dummy; } ;
struct mlxsw_sx {struct mlxsw_sx_port** ports; int core; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sx_port*) ;
 int FUNC_1 (int ,size_t,struct mlxsw_sx*) ;
 int FUNC_2 (struct mlxsw_sx_port*,int) ;
 int FUNC_3 (struct mlxsw_sx_port*,int ) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sx *VAR_1, u8 VAR_2)
{
 struct mlxsw_sx_port *VAR_3 = VAR_1->ports[VAR_2];

 FUNC_1(VAR_1->core, VAR_2, VAR_1);
 VAR_1->ports[VAR_2] = ((void*)0);
 FUNC_2(VAR_3, 0);
 FUNC_3(VAR_3, VAR_0);
 FUNC_0(VAR_3);
}
