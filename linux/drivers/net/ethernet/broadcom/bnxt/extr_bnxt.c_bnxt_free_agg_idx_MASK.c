
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnxt_tpa_idx_map {int agg_idx_bmap; } ;
struct bnxt_rx_ring_info {struct bnxt_tpa_idx_map* rx_tpa_idx_map; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bnxt_rx_ring_info *VAR_0, u16 VAR_1)
{
 struct bnxt_tpa_idx_map *VAR_2 = VAR_0->rx_tpa_idx_map;

 FUNC_0(VAR_1, VAR_2->agg_idx_bmap);
}
