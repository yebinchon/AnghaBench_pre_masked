
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port {int dummy; } ;
struct mlxsw_sp {struct mlxsw_sp_port** ports; int core; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_port*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_1)
{
 struct mlxsw_sp_port *VAR_2 =
    VAR_1->ports[VAR_0];

 FUNC_1(VAR_1->core);
 VAR_1->ports[VAR_0] = ((void*)0);
 FUNC_0(VAR_2);
}
