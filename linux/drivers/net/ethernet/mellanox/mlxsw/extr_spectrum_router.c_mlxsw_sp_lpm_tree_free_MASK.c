
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_lpm_tree {int id; scalar_t__ proto; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_ralxx_protocol { ____Placeholder_mlxsw_reg_ralxx_protocol } mlxsw_reg_ralxx_protocol ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_2,
       struct mlxsw_sp_lpm_tree *VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_1(VAR_4, 0,
        (enum mlxsw_reg_ralxx_protocol) VAR_3->proto,
        VAR_3->id);
 FUNC_2(VAR_2->core, FUNC_0(VAR_1), VAR_4);
}
