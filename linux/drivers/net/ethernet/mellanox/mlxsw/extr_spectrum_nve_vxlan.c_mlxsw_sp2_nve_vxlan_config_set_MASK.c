
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlxsw_sp_nve_config {int learning_en; int ul_tb_id; } ;
struct mlxsw_sp {int core; TYPE_1__* nve; } ;
struct TYPE_2__ {int ul_rif_index; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct mlxsw_sp*,int) ;
 int FUNC_4 (char*,struct mlxsw_sp_nve_config const*) ;
 int FUNC_5 (struct mlxsw_sp*,int ,int *) ;
 int FUNC_6 (struct mlxsw_sp*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_7(struct mlxsw_sp *VAR_2,
          const struct mlxsw_sp_nve_config *VAR_3)
{
 char VAR_4[VAR_0];
 u16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_2, VAR_3->ul_tb_id,
      &VAR_5);
 if (VAR_6)
  return VAR_6;
 VAR_2->nve->ul_rif_index = VAR_5;

 VAR_6 = FUNC_3(VAR_2, VAR_3->learning_en);
 if (VAR_6)
  goto err_vxlan_learning_set;

 FUNC_4(VAR_4, VAR_3);
 FUNC_1(VAR_4, VAR_5);

 VAR_6 = FUNC_2(VAR_2->core, FUNC_0(VAR_1), VAR_4);
 if (VAR_6)
  goto err_tngcr_write;

 return 0;

err_tngcr_write:
 FUNC_3(VAR_2, 0);
err_vxlan_learning_set:
 FUNC_6(VAR_2, VAR_5);
 return VAR_6;
}
