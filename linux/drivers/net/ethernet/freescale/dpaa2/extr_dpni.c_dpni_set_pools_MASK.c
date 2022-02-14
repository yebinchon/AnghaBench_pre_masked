
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_pools_cfg {TYPE_1__* pools; int num_dpbp; } ;
struct dpni_cmd_set_pools {int backup_pool_mask; int * buffer_size; int * dpbp_id; int num_dpbp; } ;
struct TYPE_2__ {int backup_pool; int buffer_size; int dpbp_id; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_5(struct fsl_mc_io *VAR_2,
     u32 VAR_3,
     u16 VAR_4,
     const struct dpni_pools_cfg *VAR_5)
{
 struct fsl_mc_command VAR_6 = { 0 };
 struct dpni_cmd_set_pools *VAR_7;
 int VAR_8;


 VAR_6.header = FUNC_3(VAR_0,
       VAR_3,
       VAR_4);
 VAR_7 = (struct dpni_cmd_set_pools *)VAR_6.params;
 VAR_7->num_dpbp = VAR_5->num_dpbp;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7->dpbp_id[VAR_8] = FUNC_2(VAR_5->pools[VAR_8].dpbp_id);
  VAR_7->buffer_size[VAR_8] =
   FUNC_1(VAR_5->pools[VAR_8].buffer_size);
  VAR_7->backup_pool_mask |=
   FUNC_0(VAR_5->pools[VAR_8].backup_pool, VAR_8);
 }


 return FUNC_4(VAR_2, &VAR_6);
}
