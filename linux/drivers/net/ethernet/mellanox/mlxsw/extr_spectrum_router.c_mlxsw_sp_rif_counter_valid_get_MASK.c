
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {int counter_egress_valid; int counter_ingress_valid; } ;
typedef enum mlxsw_sp_rif_counter_dir { ____Placeholder_mlxsw_sp_rif_counter_dir } mlxsw_sp_rif_counter_dir ;





__attribute__((used)) static bool
FUNC_0(struct mlxsw_sp_rif *VAR_0,
          enum mlxsw_sp_rif_counter_dir VAR_1)
{
 switch (VAR_1) {
 case 129:
  return VAR_0->counter_egress_valid;
 case 128:
  return VAR_0->counter_ingress_valid;
 }
 return 0;
}
