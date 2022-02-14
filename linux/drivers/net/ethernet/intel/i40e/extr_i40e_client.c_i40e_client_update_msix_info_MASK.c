
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_pf {size_t iwarp_base_vector; int * msix_entries; int num_iwarp_msix; struct i40e_client_instance* cinst; } ;
struct TYPE_2__ {int * msix_entries; int msix_count; } ;
struct i40e_client_instance {TYPE_1__ lan_info; int client; } ;



void FUNC_0(struct i40e_pf *VAR_0)
{
 struct i40e_client_instance *VAR_1 = VAR_0->cinst;

 if (!VAR_1 || !VAR_1->client)
  return;

 VAR_1->lan_info.msix_count = VAR_0->num_iwarp_msix;
 VAR_1->lan_info.msix_entries = &VAR_0->msix_entries[VAR_0->iwarp_base_vector];
}
