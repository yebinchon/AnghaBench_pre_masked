
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct rx_agg_cmp {int dummy; } ;
struct bnxt_tpa_info {scalar_t__ agg_count; struct rx_agg_cmp* agg_arr; } ;
struct bnxt_rx_ring_info {struct bnxt_tpa_info* rx_tpa; } ;
struct bnxt {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (struct rx_agg_cmp*) ;
 size_t FUNC_2 (struct bnxt_rx_ring_info*,size_t) ;

__attribute__((used)) static void FUNC_3(struct bnxt *VAR_1, struct bnxt_rx_ring_info *VAR_2,
    struct rx_agg_cmp *VAR_3)
{
 u16 VAR_4 = FUNC_1(VAR_3);
 struct bnxt_tpa_info *VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_4);
 VAR_5 = &VAR_2->rx_tpa[VAR_4];
 FUNC_0(VAR_5->agg_count >= VAR_0);
 VAR_5->agg_arr[VAR_5->agg_count++] = *VAR_3;
}
