
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct bnxt_tpa_idx_map {size_t* agg_id_tbl; } ;
struct bnxt_rx_ring_info {struct bnxt_tpa_idx_map* rx_tpa_idx_map; } ;



__attribute__((used)) static u16 FUNC_0(struct bnxt_rx_ring_info *VAR_0, u16 VAR_1)
{
 struct bnxt_tpa_idx_map *VAR_2 = VAR_0->rx_tpa_idx_map;

 return VAR_2->agg_id_tbl[VAR_1];
}
