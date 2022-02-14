
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 struct mlxsw_sp_rif* FUNC_1 (struct mlxsw_sp*,int) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_rif*,int ) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_rif*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(void *VAR_2, bool VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_2;
 int VAR_5;

 FUNC_4();
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->core, VAR_0); VAR_5++) {
  struct mlxsw_sp_rif *VAR_6 = FUNC_1(VAR_4, VAR_5);

  if (!VAR_6)
   continue;
  if (VAR_3)
   FUNC_2(VAR_4, VAR_6,
         VAR_1);
  else
   FUNC_3(VAR_4, VAR_6,
        VAR_1);
 }
 FUNC_5();
 return 0;
}
