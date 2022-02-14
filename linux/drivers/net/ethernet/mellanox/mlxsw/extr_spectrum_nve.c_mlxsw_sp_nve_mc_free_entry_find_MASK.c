
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_nve_mc_record {size_t proto; struct mlxsw_sp_nve_mc_entry* entries; TYPE_1__* mlxsw_sp; } ;
struct mlxsw_sp_nve_mc_entry {scalar_t__ valid; } ;
struct mlxsw_sp_nve {unsigned int* num_max_mc_entries; } ;
struct TYPE_2__ {struct mlxsw_sp_nve* nve; } ;



__attribute__((used)) static struct mlxsw_sp_nve_mc_entry *
FUNC_0(struct mlxsw_sp_nve_mc_record *VAR_0)
{
 struct mlxsw_sp_nve *VAR_1 = VAR_0->mlxsw_sp->nve;
 unsigned int VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->num_max_mc_entries[VAR_0->proto];
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_0->entries[VAR_3].valid)
   continue;
  return &VAR_0->entries[VAR_3];
 }

 return ((void*)0);
}
