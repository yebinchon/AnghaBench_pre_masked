
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_nve_mc_record {int proto; int list; struct mlxsw_sp_nve_mc_list* mc_list; struct mlxsw_sp* mlxsw_sp; int ops; int kvdl_index; } ;
struct mlxsw_sp_nve_mc_list {int records_list; } ;
struct mlxsw_sp {TYPE_1__* nve; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
struct TYPE_2__ {unsigned int* num_max_mc_entries; } ;


 int VAR_0 ;
 struct mlxsw_sp_nve_mc_record* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlxsw_sp_nve_mc_record*) ;
 struct mlxsw_sp_nve_mc_record* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct mlxsw_sp*,int ,int,int *) ;
 int * VAR_4 ;
 int FUNC_5 (struct mlxsw_sp_nve_mc_record*,int ,unsigned int) ;

__attribute__((used)) static struct mlxsw_sp_nve_mc_record *
FUNC_6(struct mlxsw_sp *VAR_5,
         struct mlxsw_sp_nve_mc_list *VAR_6,
         enum mlxsw_sp_l3proto VAR_7)
{
 unsigned int VAR_8 = VAR_5->nve->num_max_mc_entries[VAR_7];
 struct mlxsw_sp_nve_mc_record *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(FUNC_5(VAR_9, VAR_3, VAR_8),
       VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_4(VAR_5, VAR_2, 1,
      &VAR_9->kvdl_index);
 if (VAR_10)
  goto err_kvdl_alloc;

 VAR_9->ops = VAR_4[VAR_7];
 VAR_9->mlxsw_sp = VAR_5;
 VAR_9->mc_list = VAR_6;
 VAR_9->proto = VAR_7;
 FUNC_3(&VAR_9->list, &VAR_6->records_list);

 return VAR_9;

err_kvdl_alloc:
 FUNC_1(VAR_9);
 return FUNC_0(VAR_10);
}
