
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htc_target {int tx_bndl_mask; int rx_bndl_enable; int tgt_cred_sz; int block_sz; void* max_rx_bndl_sz; void* max_tx_bndl_sz; void* max_xfer_szper_scatreq; void* msg_per_bndl_max; int max_scat_entries; TYPE_1__* dev; } ;
struct TYPE_2__ {int ar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,void*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 void* FUNC_3 (int ,void*) ;

__attribute__((used)) static void FUNC_4(struct htc_target *VAR_4)
{

 VAR_4->msg_per_bndl_max = FUNC_3(VAR_2,
           VAR_4->msg_per_bndl_max);

 if (FUNC_1(VAR_4->dev->ar)) {
  VAR_4->msg_per_bndl_max = 0;
  return;
 }


 VAR_4->msg_per_bndl_max = FUNC_3(VAR_4->max_scat_entries,
           VAR_4->msg_per_bndl_max);

 FUNC_0(VAR_0,
     "htc bundling allowed msg_per_bndl_max %d\n",
     VAR_4->msg_per_bndl_max);


 VAR_4->max_rx_bndl_sz = VAR_4->max_xfer_szper_scatreq;

 VAR_4->max_tx_bndl_sz = FUNC_3(VAR_1,
         VAR_4->max_xfer_szper_scatreq);

 FUNC_0(VAR_0, "htc max_rx_bndl_sz %d max_tx_bndl_sz %d\n",
     VAR_4->max_rx_bndl_sz, VAR_4->max_tx_bndl_sz);

 if (VAR_4->max_tx_bndl_sz)

  VAR_4->tx_bndl_mask = (1 << VAR_3) - 1;

 if (VAR_4->max_rx_bndl_sz)
  VAR_4->rx_bndl_enable = 1;

 if ((VAR_4->tgt_cred_sz % VAR_4->block_sz) != 0) {
  FUNC_2("credit size: %d is not block aligned! Disabling send bundling\n",
       VAR_4->tgt_cred_sz);







  VAR_4->tx_bndl_mask = 0;
 }
}
