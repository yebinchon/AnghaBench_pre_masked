
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int enabled; void* skb_arr; void* len_arr; int pkt_aggr_limit; scalar_t__ start_port; scalar_t__ pkt_cnt; scalar_t__ buf_len; } ;
struct TYPE_3__ {int enabled; int pkt_aggr_limit; scalar_t__ start_port; scalar_t__ pkt_cnt; scalar_t__ buf_len; } ;
struct sdio_mmc_card {scalar_t__ mp_tx_agg_buf_size; scalar_t__ mp_rx_agg_buf_size; int can_ext_scan; int can_auto_tdls; TYPE_2__ mpa_rx; TYPE_1__ mpa_tx; void* mp_regs; int mp_agg_pkt_limit; int mp_data_port_mask; int curr_wr_port; int curr_rd_port; scalar_t__ mp_wr_bitmap; scalar_t__ mp_rd_bitmap; struct mwifiex_sdio_card_reg* reg; int func; } ;
struct mwifiex_sdio_card_reg {int max_mp_regs; int data_port_mask; int start_wr_port; int start_rd_port; int host_int_status_reg; } ;
struct mwifiex_adapter {int host_disable_sdio_rx_aggr; int ext_scan; int auto_tdls; struct sdio_mmc_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mwifiex_adapter*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (struct mwifiex_adapter*,int ,int *) ;
 int FUNC_6 (int ,struct sdio_mmc_card*) ;

__attribute__((used)) static int FUNC_7(struct mwifiex_adapter *VAR_4)
{
 struct sdio_mmc_card *VAR_5 = VAR_4->card;
 const struct mwifiex_sdio_card_reg *VAR_6 = VAR_5->reg;
 int VAR_7;
 u8 VAR_8;

 FUNC_6(VAR_5->func, VAR_5);






 FUNC_5(VAR_4, VAR_5->reg->host_int_status_reg, &VAR_8);


 FUNC_4(VAR_4);


 VAR_5->mp_rd_bitmap = 0;
 VAR_5->mp_wr_bitmap = 0;
 VAR_5->curr_rd_port = VAR_6->start_rd_port;
 VAR_5->curr_wr_port = VAR_6->start_wr_port;

 VAR_5->mp_data_port_mask = VAR_6->data_port_mask;

 VAR_5->mpa_tx.buf_len = 0;
 VAR_5->mpa_tx.pkt_cnt = 0;
 VAR_5->mpa_tx.start_port = 0;

 VAR_5->mpa_tx.enabled = 1;
 VAR_5->mpa_tx.pkt_aggr_limit = VAR_5->mp_agg_pkt_limit;

 VAR_5->mpa_rx.buf_len = 0;
 VAR_5->mpa_rx.pkt_cnt = 0;
 VAR_5->mpa_rx.start_port = 0;

 VAR_5->mpa_rx.enabled = 1;
 VAR_5->mpa_rx.pkt_aggr_limit = VAR_5->mp_agg_pkt_limit;


 VAR_5->mp_regs = FUNC_2(VAR_6->max_mp_regs, VAR_1);
 if (!VAR_5->mp_regs)
  return -VAR_0;


 VAR_5->mpa_rx.skb_arr = FUNC_0(VAR_5->mp_agg_pkt_limit, sizeof(void *),
           VAR_1);
 if (!VAR_5->mpa_rx.skb_arr) {
  FUNC_1(VAR_5->mp_regs);
  return -VAR_0;
 }

 VAR_5->mpa_rx.len_arr = FUNC_0(VAR_5->mp_agg_pkt_limit,
           sizeof(*VAR_5->mpa_rx.len_arr),
           VAR_1);
 if (!VAR_5->mpa_rx.len_arr) {
  FUNC_1(VAR_5->mp_regs);
  FUNC_1(VAR_5->mpa_rx.skb_arr);
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_4,
          VAR_5->mp_tx_agg_buf_size,
          VAR_5->mp_rx_agg_buf_size);


 if (VAR_7 && (VAR_5->mp_tx_agg_buf_size == VAR_3 ||
      VAR_5->mp_rx_agg_buf_size == VAR_3)) {

  VAR_4->host_disable_sdio_rx_aggr = 1;

  VAR_7 = FUNC_3
   (VAR_4, VAR_2,
    VAR_2);
  if (VAR_7) {

   VAR_5->mpa_tx.enabled = 0;
   VAR_5->mpa_rx.enabled = 0;
  }
 }

 VAR_4->auto_tdls = VAR_5->can_auto_tdls;
 VAR_4->ext_scan = VAR_5->can_ext_scan;
 return 0;
}
