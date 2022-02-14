
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct bnxt_tpa_idx_map {size_t* agg_id_tbl; int agg_idx_bmap; } ;
struct bnxt_rx_ring_info {struct bnxt_tpa_idx_map* rx_tpa_idx_map; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (size_t,int ) ;

__attribute__((used)) static u16 FUNC_3(struct bnxt_rx_ring_info *VAR_2, u16 VAR_3)
{
 struct bnxt_tpa_idx_map *VAR_4 = VAR_2->rx_tpa_idx_map;
 u16 VAR_5 = VAR_3 & VAR_1;

 if (FUNC_2(VAR_5, VAR_4->agg_idx_bmap))
  VAR_5 = FUNC_1(VAR_4->agg_idx_bmap,
       VAR_0);
 FUNC_0(VAR_5, VAR_4->agg_idx_bmap);
 VAR_4->agg_id_tbl[VAR_3] = VAR_5;
 return VAR_5;
}
