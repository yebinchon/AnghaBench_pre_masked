
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fm10k_hw_stats_q {int dummy; } ;
struct fm10k_hw {int dummy; } ;


 int FUNC_0 (struct fm10k_hw*,struct fm10k_hw_stats_q*,scalar_t__) ;
 int FUNC_1 (struct fm10k_hw*,struct fm10k_hw_stats_q*,scalar_t__) ;

void FUNC_2(struct fm10k_hw *VAR_0, struct fm10k_hw_stats_q *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_2++, VAR_1++) {
  FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
