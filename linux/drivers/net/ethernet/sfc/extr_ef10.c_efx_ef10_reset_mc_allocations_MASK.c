
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int context_id; } ;
struct efx_nic {unsigned int vf_count; TYPE_1__ rss_context; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int must_realloc_vis; int must_restore_rss_contexts; int must_restore_filters; int must_restore_piobufs; int must_probe_vswitching; TYPE_2__* vf; int vport_id; } ;
struct TYPE_4__ {scalar_t__ vport_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_1(struct efx_nic *VAR_2)
{
 struct efx_ef10_nic_data *VAR_3 = VAR_2->nic_data;





 VAR_3->must_realloc_vis = 1;
 VAR_3->must_restore_rss_contexts = 1;
 VAR_3->must_restore_filters = 1;
 VAR_3->must_restore_piobufs = 1;
 FUNC_0(VAR_2);
 VAR_2->rss_context.context_id = VAR_0;


 VAR_3->must_probe_vswitching = 1;
 VAR_3->vport_id = VAR_1;





}
