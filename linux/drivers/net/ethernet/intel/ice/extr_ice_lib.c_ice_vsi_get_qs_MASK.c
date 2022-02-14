
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {void* rx_mapping_mode; void* tx_mapping_mode; int rxq_map; int alloc_rxq; int txq_map; int alloc_txq; struct ice_pf* back; } ;
struct ice_qs_cfg {void* mapping_mode; int vsi_map_offset; int vsi_map; int scatter_count; int q_count; int pf_map_size; int pf_map; int * qs_mutex; } ;
struct ice_pf {int max_pf_rxqs; int avail_rxqs; int avail_q_mutex; int max_pf_txqs; int avail_txqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct ice_qs_cfg*) ;

__attribute__((used)) static int FUNC_1(struct ice_vsi *VAR_3)
{
 struct ice_pf *VAR_4 = VAR_3->back;
 struct ice_qs_cfg VAR_5 = {
  .qs_mutex = &VAR_4->avail_q_mutex,
  .pf_map = VAR_4->avail_txqs,
  .pf_map_size = VAR_4->max_pf_txqs,
  .q_count = VAR_3->alloc_txq,
  .scatter_count = VAR_1,
  .vsi_map = VAR_3->txq_map,
  .vsi_map_offset = 0,
  .mapping_mode = VAR_3->tx_mapping_mode
 };
 struct ice_qs_cfg VAR_6 = {
  .qs_mutex = &VAR_4->avail_q_mutex,
  .pf_map = VAR_4->avail_rxqs,
  .pf_map_size = VAR_4->max_pf_rxqs,
  .q_count = VAR_3->alloc_rxq,
  .scatter_count = VAR_0,
  .vsi_map = VAR_3->rxq_map,
  .vsi_map_offset = 0,
  .mapping_mode = VAR_3->rx_mapping_mode
 };
 int VAR_7 = 0;

 VAR_3->tx_mapping_mode = VAR_2;
 VAR_3->rx_mapping_mode = VAR_2;

 VAR_7 = FUNC_0(&VAR_5);
 if (!VAR_7)
  VAR_7 = FUNC_0(&VAR_6);

 return VAR_7;
}
