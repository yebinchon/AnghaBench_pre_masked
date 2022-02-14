
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_nve_mc_record {scalar_t__ num_entries; TYPE_1__* ops; int kvdl_index; int list; struct mlxsw_sp_nve_mc_list* mc_list; } ;
struct mlxsw_sp_nve_mc_list {int records_list; } ;
struct mlxsw_sp_nve_mc_entry {int valid; } ;
struct TYPE_2__ {int (* entry_del ) (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mlxsw_sp_nve_mc_record* FUNC_3 (struct mlxsw_sp_nve_mc_record*,int ) ;
 struct mlxsw_sp_nve_mc_record* FUNC_4 (struct mlxsw_sp_nve_mc_record*,int ) ;
 scalar_t__ FUNC_5 (struct mlxsw_sp_nve_mc_record*) ;
 int FUNC_6 (struct mlxsw_sp_nve_mc_record*) ;
 int FUNC_7 (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*) ;
 int FUNC_8 (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*) ;
 int FUNC_9 (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*) ;
 int FUNC_10 (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void
FUNC_12(struct mlxsw_sp_nve_mc_record *VAR_1,
     struct mlxsw_sp_nve_mc_entry *VAR_2)
{
 struct mlxsw_sp_nve_mc_list *VAR_3 = VAR_1->mc_list;

 VAR_2->valid = 0;
 VAR_1->num_entries--;




 if (VAR_1->num_entries != 0) {
  FUNC_6(VAR_1);
  VAR_1->ops->entry_del(VAR_1, VAR_2);
  return;
 }







 if (!FUNC_5(VAR_1)) {
  struct mlxsw_sp_nve_mc_record *VAR_4;

  VAR_4 = FUNC_4(VAR_1, VAR_0);
  FUNC_1(&VAR_1->list);
  FUNC_6(VAR_4);
  FUNC_0(&VAR_1->list, &VAR_3->records_list);
  VAR_1->ops->entry_del(VAR_1, VAR_2);
  return;
 }






 if (FUNC_5(VAR_1) &&
     !FUNC_2(&VAR_3->records_list)) {
  struct mlxsw_sp_nve_mc_record *VAR_5;

  VAR_5 = FUNC_3(VAR_1, VAR_0);
  FUNC_11(VAR_1->kvdl_index, VAR_5->kvdl_index);
  FUNC_6(VAR_5);
  VAR_1->ops->entry_del(VAR_1, VAR_2);
  return;
 }




 VAR_1->ops->entry_del(VAR_1, VAR_2);
}
