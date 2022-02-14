
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct rxq_pause_params {int sge_th_hi; scalar_t__ bd_th_hi; int rcq_th_hi; int pri_map; int rcq_th_lo; int bd_th_lo; int sge_th_lo; } ;
struct bnx2x_rxq_setup_params {int max_sges_pkt; int silent_removal_mask; int silent_removal_value; int sb_cq_index; int fw_sb_id; int cache_line_log; int max_tpa_queues; void* mcast_engine_id; void* rss_engine_id; void* sge_buf_sz; void* tpa_agg_sz; int cl_qzone_id; scalar_t__ buf_sz; scalar_t__ rcq_np_map; scalar_t__ rcq_map; int sge_map; int dscr_map; } ;
struct bnx2x_fastpath {scalar_t__ mode; int fw_sb_id; int cl_qzone_id; scalar_t__ rx_buf_size; scalar_t__ rx_comp_mapping; int rx_sge_mapping; int rx_desc_mapping; } ;
struct bnx2x {scalar_t__ rx_ring_size; int afex_def_vlan_tag; scalar_t__ dropless_fc; TYPE_1__* dev; } ;
struct TYPE_2__ {int mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (struct bnx2x_fastpath*) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*) ;
 int VAR_14 ;
 int FUNC_9 (int ) ;
 int VAR_15 ;
 int FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (struct bnx2x*) ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int ,int ,int) ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_14(struct bnx2x *VAR_20,
 struct bnx2x_fastpath *VAR_21, struct rxq_pause_params *VAR_22,
 struct bnx2x_rxq_setup_params *VAR_23)
{
 u8 VAR_24 = 0;
 u16 VAR_25 = 0;
 u16 VAR_26 = 0;

 if (VAR_21->mode != VAR_17) {
  VAR_22->sge_th_lo = FUNC_11(VAR_20);
  VAR_22->sge_th_hi = FUNC_10(VAR_20);


  FUNC_12(VAR_20->dropless_fc &&
    VAR_22->sge_th_hi + VAR_4 >
    VAR_9 * VAR_11);

  VAR_26 = VAR_16;
  VAR_24 = FUNC_9(VAR_20->dev->mtu) >>
   VAR_15;
  VAR_24 = ((VAR_24 + VAR_12 - 1) &
     (~(VAR_12-1))) >> VAR_13;
  VAR_25 = (u16)FUNC_13(VAR_19, VAR_14, 0xffff);
 }


 if (!FUNC_3(VAR_20)) {
  VAR_22->bd_th_lo = FUNC_1(VAR_20);
  VAR_22->bd_th_hi = FUNC_0(VAR_20);

  VAR_22->rcq_th_lo = FUNC_8(VAR_20);
  VAR_22->rcq_th_hi = FUNC_7(VAR_20);




  FUNC_12(VAR_20->dropless_fc &&
    VAR_22->bd_th_hi + VAR_4 >
    VAR_20->rx_ring_size);
  FUNC_12(VAR_20->dropless_fc &&
    VAR_22->rcq_th_hi + VAR_4 >
    VAR_10 * VAR_8);

  VAR_22->pri_map = 1;
 }


 VAR_23->dscr_map = VAR_21->rx_desc_mapping;
 VAR_23->sge_map = VAR_21->rx_sge_mapping;
 VAR_23->rcq_map = VAR_21->rx_comp_mapping;
 VAR_23->rcq_np_map = VAR_21->rx_comp_mapping + VAR_0;




 VAR_23->buf_sz = VAR_21->rx_buf_size - VAR_2 -
      VAR_1 - VAR_7;

 VAR_23->cl_qzone_id = VAR_21->cl_qzone_id;
 VAR_23->tpa_agg_sz = VAR_26;
 VAR_23->sge_buf_sz = VAR_25;
 VAR_23->max_sges_pkt = VAR_24;
 VAR_23->rss_engine_id = FUNC_2(VAR_20);
 VAR_23->mcast_engine_id = FUNC_2(VAR_20);






 VAR_23->max_tpa_queues = FUNC_6(VAR_20);

 VAR_23->cache_line_log = VAR_3;
 VAR_23->fw_sb_id = VAR_21->fw_sb_id;

 if (FUNC_4(VAR_21))
  VAR_23->sb_cq_index = VAR_6;
 else
  VAR_23->sb_cq_index = VAR_5;



 if (FUNC_5(VAR_20)) {
  VAR_23->silent_removal_value = VAR_20->afex_def_vlan_tag;
  VAR_23->silent_removal_mask = VAR_18;
 }
}
