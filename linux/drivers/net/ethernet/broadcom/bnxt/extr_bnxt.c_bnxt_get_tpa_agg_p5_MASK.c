
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct rx_agg_cmp {int dummy; } ;
struct bnxt_tpa_info {struct rx_agg_cmp* agg_arr; } ;
struct bnxt_rx_ring_info {struct bnxt_tpa_info* rx_tpa; } ;
struct bnxt {int dummy; } ;



__attribute__((used)) static struct rx_agg_cmp *FUNC_0(struct bnxt *VAR_0,
           struct bnxt_rx_ring_info *VAR_1,
           u16 VAR_2, u16 VAR_3)
{
 struct bnxt_tpa_info *VAR_4 = &VAR_1->rx_tpa[VAR_2];

 return &VAR_4->agg_arr[VAR_3];
}
