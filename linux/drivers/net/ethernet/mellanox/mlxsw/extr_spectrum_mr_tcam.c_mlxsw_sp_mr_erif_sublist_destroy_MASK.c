
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_erif_sublist {int rigr2_kvdl_index; int list; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_mr_erif_sublist*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_sp*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp *VAR_1,
     struct mlxsw_sp_mr_erif_sublist *VAR_2)
{
 FUNC_1(&VAR_2->list);
 FUNC_2(VAR_1, VAR_0,
      1, VAR_2->rigr2_kvdl_index);
 FUNC_0(VAR_2);
}
