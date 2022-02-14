
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afa_set {struct mlxsw_afa_set* next; } ;
struct mlxsw_afa_block {int afa; struct mlxsw_afa_set* first_set; } ;


 int FUNC_0 (struct mlxsw_afa_block*) ;
 int FUNC_1 (struct mlxsw_afa_block*) ;
 int FUNC_2 (int ,struct mlxsw_afa_set*) ;

void FUNC_3(struct mlxsw_afa_block *VAR_0)
{
 struct mlxsw_afa_set *VAR_1 = VAR_0->first_set;
 struct mlxsw_afa_set *VAR_2;

 do {
  VAR_2 = VAR_1->next;
  FUNC_2(VAR_0->afa, VAR_1);
  VAR_1 = VAR_2;
 } while (VAR_1);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
}
