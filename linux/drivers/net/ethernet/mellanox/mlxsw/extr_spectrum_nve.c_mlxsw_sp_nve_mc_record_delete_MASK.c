
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_nve_mc_record {size_t proto; int num_entries; struct mlxsw_sp_nve_mc_entry* entries; TYPE_1__* mlxsw_sp; } ;
struct mlxsw_sp_nve_mc_entry {int valid; } ;
struct mlxsw_sp_nve {unsigned int* num_max_mc_entries; } ;
struct TYPE_2__ {struct mlxsw_sp_nve* nve; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*) ;
 int FUNC_2 (struct mlxsw_sp_nve_mc_record*) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp_nve_mc_record *VAR_0)
{
 struct mlxsw_sp_nve *VAR_1 = VAR_0->mlxsw_sp->nve;
 unsigned int VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->num_max_mc_entries[VAR_0->proto];
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct mlxsw_sp_nve_mc_entry *VAR_4 = &VAR_0->entries[VAR_3];

  if (!VAR_4->valid)
   continue;
  FUNC_1(VAR_0, VAR_4);
 }

 FUNC_0(VAR_0->num_entries);
 FUNC_2(VAR_0);
}
