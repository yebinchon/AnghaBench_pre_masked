
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp_nve_mc_record {unsigned int num_entries; size_t proto; TYPE_2__* ops; struct mlxsw_sp_nve_mc_entry* entries; int kvdl_index; int list; struct mlxsw_sp* mlxsw_sp; struct mlxsw_sp_nve_mc_list* mc_list; } ;
struct mlxsw_sp_nve_mc_list {int records_list; } ;
struct mlxsw_sp_nve_mc_entry {int valid; } ;
struct mlxsw_sp {int core; TYPE_1__* nve; } ;
typedef enum mlxsw_reg_tnumt_record_type { ____Placeholder_mlxsw_reg_tnumt_record_type } mlxsw_reg_tnumt_record_type ;
struct TYPE_4__ {int type; int (* entry_set ) (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*,char*,int ) ;} ;
struct TYPE_3__ {unsigned int* num_max_mc_entries; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 struct mlxsw_sp_nve_mc_record* FUNC_3 (struct mlxsw_sp_nve_mc_record*,int ) ;
 int FUNC_4 (char*,int,int ,int ,int,int ,unsigned int) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*,char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(struct mlxsw_sp_nve_mc_record *VAR_4)
{
 enum mlxsw_reg_tnumt_record_type VAR_5 = VAR_4->ops->type;
 struct mlxsw_sp_nve_mc_list *VAR_6 = VAR_4->mc_list;
 struct mlxsw_sp *VAR_7 = VAR_4->mlxsw_sp;
 char VAR_8[VAR_0];
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;
 u32 VAR_11 = 0;
 bool VAR_12 = 0;
 int VAR_13;

 if (!FUNC_2(&VAR_4->list, &VAR_6->records_list)) {
  struct mlxsw_sp_nve_mc_record *VAR_14;

  VAR_14 = FUNC_3(VAR_4, VAR_2);
  VAR_11 = VAR_14->kvdl_index;
  VAR_12 = 1;
 }

 FUNC_4(VAR_8, VAR_5, VAR_1,
        VAR_4->kvdl_index, VAR_12,
        VAR_11, VAR_4->num_entries);

 VAR_9 = VAR_7->nve->num_max_mc_entries[VAR_4->proto];
 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  struct mlxsw_sp_nve_mc_entry *VAR_15;

  VAR_15 = &VAR_4->entries[VAR_13];
  if (!VAR_15->valid)
   continue;
  VAR_4->ops->entry_set(VAR_4, VAR_15, VAR_8,
       VAR_10++);
 }

 FUNC_1(VAR_10 != VAR_4->num_entries);

 return FUNC_5(VAR_7->core, FUNC_0(VAR_3), VAR_8);
}
