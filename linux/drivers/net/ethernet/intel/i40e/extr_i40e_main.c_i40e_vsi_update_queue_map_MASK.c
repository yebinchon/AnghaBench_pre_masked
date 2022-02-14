
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * tc_mapping; int queue_mapping; int mapping_flags; } ;
struct i40e_vsi_context {TYPE_2__ info; } ;
struct TYPE_3__ {int tc_mapping; int queue_mapping; int mapping_flags; } ;
struct i40e_vsi {TYPE_1__ info; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct i40e_vsi *VAR_0,
          struct i40e_vsi_context *VAR_1)
{




 VAR_0->info.mapping_flags = VAR_1->info.mapping_flags;
 FUNC_0(&VAR_0->info.queue_mapping,
        &VAR_1->info.queue_mapping, sizeof(VAR_0->info.queue_mapping));
 FUNC_0(&VAR_0->info.tc_mapping, VAR_1->info.tc_mapping,
        sizeof(VAR_0->info.tc_mapping));
}
