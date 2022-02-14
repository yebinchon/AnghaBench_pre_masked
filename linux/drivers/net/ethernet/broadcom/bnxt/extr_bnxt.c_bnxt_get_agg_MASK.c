
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rx_agg_cmp {int dummy; } ;
struct bnxt_cp_ring_info {int ** cp_desc_ring; } ;
struct bnxt {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct rx_agg_cmp *FUNC_4(struct bnxt *VAR_0,
           struct bnxt_cp_ring_info *VAR_1,
           u16 VAR_2, u16 VAR_3)
{
 struct rx_agg_cmp *VAR_4;

 VAR_2 = FUNC_3(FUNC_0(VAR_2, VAR_3));
 VAR_4 = (struct rx_agg_cmp *)
  &VAR_1->cp_desc_ring[FUNC_2(VAR_2)][FUNC_1(VAR_2)];
 return VAR_4;
}
