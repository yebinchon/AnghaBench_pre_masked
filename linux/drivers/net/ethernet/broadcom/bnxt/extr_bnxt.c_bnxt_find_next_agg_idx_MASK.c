
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bnxt_rx_ring_info {scalar_t__ rx_agg_bmap_size; int rx_agg_bmap; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_2(struct bnxt_rx_ring_info *VAR_0, u16 VAR_1)
{
 u16 VAR_2, VAR_3 = VAR_0->rx_agg_bmap_size;

 VAR_2 = FUNC_1(VAR_0->rx_agg_bmap, VAR_3, VAR_1);
 if (VAR_2 >= VAR_3)
  VAR_2 = FUNC_0(VAR_0->rx_agg_bmap, VAR_3);
 return VAR_2;
}
