
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sx {int ports; int core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mlxsw_sx*,int) ;
 int FUNC_3 (struct mlxsw_sx*,int) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sx *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 1; VAR_1 < FUNC_1(VAR_0->core); VAR_1++)
  if (FUNC_2(VAR_0, VAR_1))
   FUNC_3(VAR_0, VAR_1);
 FUNC_0(VAR_0->ports);
}
