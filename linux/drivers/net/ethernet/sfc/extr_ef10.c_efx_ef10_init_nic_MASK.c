
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx_indir_table; } ;
struct efx_nic {TYPE_2__ rss_context; TYPE_1__* type; int net_dev; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int must_check_datapath_caps; int must_realloc_vis; int must_restore_piobufs; scalar_t__ n_piobufs; int n_allocated_vis; } ;
struct TYPE_3__ {int (* rx_push_rss_config ) (struct efx_nic*,int,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,scalar_t__) ;
 int FUNC_1 (struct efx_nic*,int ,int ) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*,int) ;
 int FUNC_7 (struct efx_nic*,int,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct efx_nic *VAR_2)
{
 struct efx_ef10_nic_data *VAR_3 = VAR_2->nic_data;
 int VAR_4;

 if (VAR_3->must_check_datapath_caps) {
  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4)
   return VAR_4;
  VAR_3->must_check_datapath_caps = 0;
 }

 if (VAR_3->must_realloc_vis) {

  VAR_4 = FUNC_1(VAR_2, VAR_3->n_allocated_vis,
     VAR_3->n_allocated_vis);
  if (VAR_4)
   return VAR_4;
  VAR_3->must_realloc_vis = 0;
 }

 if (VAR_3->must_restore_piobufs && VAR_3->n_piobufs) {
  VAR_4 = FUNC_0(VAR_2, VAR_3->n_piobufs);
  if (VAR_4 == 0) {
   VAR_4 = FUNC_4(VAR_2);
   if (VAR_4)
    FUNC_2(VAR_2);
  }





  if (VAR_4 == -VAR_0)
   FUNC_5(VAR_2, VAR_1, VAR_2->net_dev,
      "not permitted to restore PIO buffers\n");
  else if (VAR_4)
   FUNC_6(VAR_2, VAR_1, VAR_2->net_dev,
      "failed to restore PIO buffers (%d)\n", VAR_4);
  VAR_3->must_restore_piobufs = 0;
 }


 VAR_4 = VAR_2->type->rx_push_rss_config(VAR_2, 0,
        VAR_2->rss_context.rx_indir_table, ((void*)0));

 return 0;
}
