
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int afa; int afa_ops; int core; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct mlxsw_sp*) ;

int FUNC_3(struct mlxsw_sp *VAR_1)
{
 VAR_1->afa = FUNC_2(FUNC_0(VAR_1->core,
           VAR_0),
      VAR_1->afa_ops, VAR_1);
 return FUNC_1(VAR_1->afa);
}
