
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int ports; int port_to_module; int core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_sp*) ;
 scalar_t__ FUNC_3 (struct mlxsw_sp*,int) ;
 int FUNC_4 (struct mlxsw_sp*,int) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_sp *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 1; VAR_1 < FUNC_1(VAR_0->core); VAR_1++)
  if (FUNC_3(VAR_0, VAR_1))
   FUNC_4(VAR_0, VAR_1);
 FUNC_2(VAR_0);
 FUNC_0(VAR_0->port_to_module);
 FUNC_0(VAR_0->ports);
}
