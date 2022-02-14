
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct fm10k_ring {scalar_t__ next_to_clean; scalar_t__ next_to_use; scalar_t__ count; int reg_idx; TYPE_1__* q_vector; } ;
struct fm10k_hw {int dummy; } ;
struct fm10k_intfc {struct fm10k_hw hw; } ;
struct TYPE_2__ {struct fm10k_intfc* interface; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct fm10k_hw*,int ) ;
 scalar_t__ FUNC_3 (int) ;

u64 FUNC_4(struct fm10k_ring *VAR_0, bool VAR_1)
{
 struct fm10k_intfc *VAR_2 = VAR_0->q_vector->interface;
 struct fm10k_hw *VAR_3 = &VAR_2->hw;
 u32 VAR_4, VAR_5;

 if (FUNC_3(VAR_1)) {
  VAR_4 = VAR_0->next_to_clean;
  VAR_5 = VAR_0->next_to_use;
 } else {
  VAR_4 = FUNC_2(VAR_3, FUNC_0(VAR_0->reg_idx));
  VAR_5 = FUNC_2(VAR_3, FUNC_1(VAR_0->reg_idx));
 }

 return ((VAR_4 <= VAR_5) ? VAR_5 : VAR_5 + VAR_0->count) - VAR_4;
}
