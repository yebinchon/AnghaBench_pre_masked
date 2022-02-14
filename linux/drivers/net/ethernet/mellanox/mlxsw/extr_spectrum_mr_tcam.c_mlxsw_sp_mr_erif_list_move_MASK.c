
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_tcam_erif_list {int kvdl_index; int erif_sublists; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_sp_mr_tcam_erif_list *VAR_0,
           struct mlxsw_sp_mr_tcam_erif_list *VAR_1)
{
 FUNC_0(&VAR_1->erif_sublists, &VAR_0->erif_sublists);
 VAR_0->kvdl_index = VAR_1->kvdl_index;
}
