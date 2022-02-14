
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_tcam_erif_list {int erif_sublists; } ;
struct mlxsw_sp_mr_erif_sublist {int list; int rigr2_kvdl_index; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_mr_erif_sublist* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlxsw_sp_mr_erif_sublist*) ;
 struct mlxsw_sp_mr_erif_sublist* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct mlxsw_sp*,int ,int,int *) ;

__attribute__((used)) static struct mlxsw_sp_mr_erif_sublist *
FUNC_5(struct mlxsw_sp *VAR_3,
    struct mlxsw_sp_mr_tcam_erif_list *VAR_4)
{
 struct mlxsw_sp_mr_erif_sublist *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);
 VAR_6 = FUNC_4(VAR_3, VAR_2,
      1, &VAR_5->rigr2_kvdl_index);
 if (VAR_6) {
  FUNC_1(VAR_5);
  return FUNC_0(VAR_6);
 }

 FUNC_3(&VAR_5->list, &VAR_4->erif_sublists);
 return VAR_5;
}
