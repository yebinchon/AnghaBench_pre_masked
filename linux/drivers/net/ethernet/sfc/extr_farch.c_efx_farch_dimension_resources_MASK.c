
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siena_nic_data {unsigned int vf_buftbl_base; } ;
struct efx_nic {unsigned int n_tx_channels; unsigned int n_extra_tx_channels; unsigned int n_rx_channels; unsigned int n_channels; unsigned int vi_scale; unsigned int vf_count; unsigned int tx_dc_base; unsigned int rx_dc_base; int net_dev; TYPE_1__* type; struct siena_nic_data* nic_data; } ;
typedef int efx_qword_t ;
struct TYPE_2__ {scalar_t__ (* sriov_wanted ) (struct efx_nic*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (struct efx_nic*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*,unsigned int,unsigned int) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct efx_nic*) ;

void FUNC_5(struct efx_nic *VAR_9, unsigned VAR_10)
{
 unsigned VAR_11, VAR_12, VAR_13;





 VAR_13 = VAR_9->n_tx_channels + VAR_9->n_extra_tx_channels;



 VAR_12 = ((VAR_9->n_rx_channels * VAR_1 +
         VAR_13 * VAR_3 * VAR_1 +
         VAR_9->n_channels * VAR_2)
        * sizeof(efx_qword_t) / VAR_0);
 VAR_11 = FUNC_1(VAR_9->n_channels, VAR_13 * VAR_3);
 VAR_9->tx_dc_base = VAR_10 - VAR_11 * VAR_7;
 VAR_9->rx_dc_base = VAR_9->tx_dc_base - VAR_11 * VAR_6;
}
