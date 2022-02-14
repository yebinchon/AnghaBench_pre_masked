
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tx_cmp {int dummy; } ;
struct bnxt_cp_ring_info {struct tx_cmp** cp_desc_ring; int cp_raw_cons; } ;
struct bnxt {int dummy; } ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tx_cmp*,int ) ;

__attribute__((used)) static inline int FUNC_4(struct bnxt *VAR_0, struct bnxt_cp_ring_info *VAR_1)
{
 u32 VAR_2 = VAR_1->cp_raw_cons;
 u16 VAR_3 = FUNC_2(VAR_2);
 struct tx_cmp *VAR_4;

 VAR_4 = &VAR_1->cp_desc_ring[FUNC_1(VAR_3)][FUNC_0(VAR_3)];

 return FUNC_3(VAR_4, VAR_2);
}
