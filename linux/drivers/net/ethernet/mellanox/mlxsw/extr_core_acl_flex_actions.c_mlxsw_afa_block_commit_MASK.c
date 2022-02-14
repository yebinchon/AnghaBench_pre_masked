
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afa_set {int kvdl_index; struct mlxsw_afa_set* next; struct mlxsw_afa_set* prev; } ;
struct mlxsw_afa_block {int finished; struct mlxsw_afa_set* first_set; int afa; struct mlxsw_afa_set* cur_set; } ;


 scalar_t__ FUNC_0 (struct mlxsw_afa_set*) ;
 int FUNC_1 (struct mlxsw_afa_set*) ;
 struct mlxsw_afa_set* FUNC_2 (int ,struct mlxsw_afa_set*) ;
 int FUNC_3 (struct mlxsw_afa_set*,int ) ;

int FUNC_4(struct mlxsw_afa_block *VAR_0)
{
 struct mlxsw_afa_set *VAR_1 = VAR_0->cur_set;
 struct mlxsw_afa_set *VAR_2;

 VAR_0->cur_set = ((void*)0);
 VAR_0->finished = 1;






 do {
  VAR_2 = VAR_1->prev;
  VAR_1 = FUNC_2(VAR_0->afa, VAR_1);
  if (FUNC_0(VAR_1))




   return FUNC_1(VAR_1);
  if (VAR_2) {
   VAR_2->next = VAR_1;
   FUNC_3(VAR_2, VAR_1->kvdl_index);
   VAR_1 = VAR_2;
  }
 } while (VAR_2);

 VAR_0->first_set = VAR_1;
 return 0;
}
