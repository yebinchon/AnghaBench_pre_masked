
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_erp_table {scalar_t__ num_ctcam_erps; scalar_t__ num_deltas; int num_atcam_erps; int * ops; int base_index; TYPE_1__* aregion; int num_max_atcam_erps; int erp_core; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlxsw_sp_acl_erp_table*) ;
 int FUNC_1 (struct mlxsw_sp_acl_erp_table*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp_acl_erp_table *VAR_3,
       unsigned int *VAR_4)
{
 (*VAR_4)--;





 if (VAR_3->num_ctcam_erps > 0 || VAR_3->num_deltas > 0)
  return;

 switch (VAR_3->num_atcam_erps) {
 case 2:




  VAR_3->ops = &VAR_2;
  break;
 case 1:





  FUNC_0(VAR_3);
  VAR_3->ops = &VAR_1;
  break;
 case 0:



  FUNC_1(VAR_3);
  FUNC_2(VAR_3->erp_core,
         VAR_3->num_max_atcam_erps,
         VAR_3->aregion->type,
         VAR_3->base_index);
  VAR_3->ops = &VAR_0;
  break;
 default:
  break;
 }
}
