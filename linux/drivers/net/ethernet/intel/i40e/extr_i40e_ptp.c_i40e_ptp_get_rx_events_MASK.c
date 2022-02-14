
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {int latch_event_flags; int * latch_events; struct i40e_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i40e_hw*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct i40e_pf *VAR_2)
{
 struct i40e_hw *VAR_3 = &VAR_2->hw;
 u32 VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 VAR_5 = VAR_4 & ~VAR_2->latch_event_flags;
 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  if (VAR_5 & FUNC_0(VAR_6))
   VAR_2->latch_events[VAR_6] = VAR_1;
 }


 VAR_2->latch_event_flags = VAR_4;

 return VAR_4;
}
