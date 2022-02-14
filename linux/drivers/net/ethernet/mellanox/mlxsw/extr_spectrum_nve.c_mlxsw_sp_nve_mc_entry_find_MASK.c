
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
struct mlxsw_sp_nve_mc_record {size_t proto; TYPE_1__* ops; struct mlxsw_sp_nve_mc_entry* entries; TYPE_2__* mlxsw_sp; } ;
struct mlxsw_sp_nve_mc_entry {int valid; } ;
struct mlxsw_sp_nve {unsigned int* num_max_mc_entries; } ;
struct TYPE_4__ {struct mlxsw_sp_nve* nve; } ;
struct TYPE_3__ {scalar_t__ (* entry_compare ) (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*,union mlxsw_sp_l3addr*) ;} ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*,union mlxsw_sp_l3addr*) ;

__attribute__((used)) static struct mlxsw_sp_nve_mc_entry *
FUNC_1(struct mlxsw_sp_nve_mc_record *VAR_0,
      union mlxsw_sp_l3addr *VAR_1)
{
 struct mlxsw_sp_nve *VAR_2 = VAR_0->mlxsw_sp->nve;
 unsigned int VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->num_max_mc_entries[VAR_0->proto];
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct mlxsw_sp_nve_mc_entry *VAR_5;

  VAR_5 = &VAR_0->entries[VAR_4];
  if (!VAR_5->valid)
   continue;
  if (VAR_0->ops->entry_compare(VAR_0, VAR_5, VAR_1))
   return VAR_5;
 }

 return ((void*)0);
}
