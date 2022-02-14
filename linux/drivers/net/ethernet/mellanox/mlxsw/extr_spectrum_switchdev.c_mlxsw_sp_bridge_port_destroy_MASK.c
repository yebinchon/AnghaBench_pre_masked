
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_bridge_port {int vlans_list; int list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_bridge_port*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp_bridge_port *VAR_0)
{
 FUNC_2(&VAR_0->list);
 FUNC_0(!FUNC_3(&VAR_0->vlans_list));
 FUNC_1(VAR_0);
}
