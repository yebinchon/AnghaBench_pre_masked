
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_span_respin_work {int work; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct mlxsw_sp_span_respin_work* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_2)
{
 struct mlxsw_sp_span_respin_work *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 FUNC_0(&VAR_3->work, VAR_1);
 VAR_3->mlxsw_sp = VAR_2;

 FUNC_2(&VAR_3->work);
}
