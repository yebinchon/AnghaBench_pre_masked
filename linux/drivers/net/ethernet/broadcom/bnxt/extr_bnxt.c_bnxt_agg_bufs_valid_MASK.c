
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rx_agg_cmp {int dummy; } ;
struct bnxt_cp_ring_info {int ** cp_desc_ring; } ;
struct bnxt {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rx_agg_cmp*,int ) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_0, struct bnxt_cp_ring_info *VAR_1,
          u8 VAR_2, u32 *VAR_3)
{
 u16 VAR_4;
 struct rx_agg_cmp *VAR_5;

 *VAR_3 = FUNC_0(*VAR_3, VAR_2);
 VAR_4 = FUNC_3(*VAR_3);
 VAR_5 = (struct rx_agg_cmp *)
  &VAR_1->cp_desc_ring[FUNC_2(VAR_4)][FUNC_1(VAR_4)];
 return FUNC_4(VAR_5, *VAR_3);
}
