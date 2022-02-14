
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int dev; } ;
struct mlxsw_sp_rif {int neigh_list; int rif_index; } ;
struct mlxsw_sp_neigh_entry {int rif_list_node; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sp_neigh_entry* FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_neigh_entry*) ;
 struct mlxsw_sp_neigh_entry* FUNC_3 (struct mlxsw_sp*,struct neighbour*,int ) ;
 int FUNC_4 (struct mlxsw_sp_neigh_entry*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_neigh_entry*) ;
 struct mlxsw_sp_rif* FUNC_6 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static struct mlxsw_sp_neigh_entry *
FUNC_7(struct mlxsw_sp *VAR_2, struct neighbour *VAR_3)
{
 struct mlxsw_sp_neigh_entry *VAR_4;
 struct mlxsw_sp_rif *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_2, VAR_3->dev);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_5->rif_index);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_5(VAR_2, VAR_4);
 if (VAR_6)
  goto err_neigh_entry_insert;

 FUNC_2(VAR_2, VAR_4);
 FUNC_1(&VAR_4->rif_list_node, &VAR_5->neigh_list);

 return VAR_4;

err_neigh_entry_insert:
 FUNC_4(VAR_4);
 return FUNC_0(VAR_6);
}
