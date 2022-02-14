
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sib {int ports; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mlxsw_sib*,int) ;
 int FUNC_2 (struct mlxsw_sib*,int) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sib *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++)
  if (FUNC_1(VAR_1, VAR_2))
   FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_1->ports);
}
