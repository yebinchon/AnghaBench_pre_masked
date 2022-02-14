
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fid_family {int dummy; } ;
struct mlxsw_sp_fid_core {int fid_ht; int vni_ht; struct mlxsw_sp_fid_core* port_fid_mappings; struct mlxsw_sp_fid_family** fid_family_arr; } ;
struct mlxsw_sp {struct mlxsw_sp_fid_core* fid_core; int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlxsw_sp_fid_core* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (struct mlxsw_sp_fid_core*) ;
 struct mlxsw_sp_fid_core* FUNC_2 (int,int ) ;
 unsigned int FUNC_3 (int ) ;
 int * VAR_3 ;
 int FUNC_4 (struct mlxsw_sp*,int ) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_fid_family*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(struct mlxsw_sp *VAR_6)
{
 unsigned int VAR_7 = FUNC_3(VAR_6->core);
 struct mlxsw_sp_fid_core *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_2(sizeof(*VAR_6->fid_core), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_6->fid_core = VAR_8;

 VAR_9 = FUNC_7(&VAR_8->fid_ht, &VAR_4);
 if (VAR_9)
  goto err_rhashtable_fid_init;

 VAR_9 = FUNC_7(&VAR_8->vni_ht, &VAR_5);
 if (VAR_9)
  goto err_rhashtable_vni_init;

 VAR_8->port_fid_mappings = FUNC_0(VAR_7, sizeof(unsigned int),
           VAR_1);
 if (!VAR_8->port_fid_mappings) {
  VAR_9 = -VAR_0;
  goto err_alloc_port_fid_mappings;
 }

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_9 = FUNC_4(VAR_6,
         VAR_3[VAR_10]);

  if (VAR_9)
   goto err_fid_ops_register;
 }

 return 0;

err_fid_ops_register:
 for (VAR_10--; VAR_10 >= 0; VAR_10--) {
  struct mlxsw_sp_fid_family *VAR_11;

  VAR_11 = VAR_8->fid_family_arr[VAR_10];
  FUNC_5(VAR_6, VAR_11);
 }
 FUNC_1(VAR_8->port_fid_mappings);
err_alloc_port_fid_mappings:
 FUNC_6(&VAR_8->vni_ht);
err_rhashtable_vni_init:
 FUNC_6(&VAR_8->fid_ht);
err_rhashtable_fid_init:
 FUNC_1(VAR_8);
 return VAR_9;
}
