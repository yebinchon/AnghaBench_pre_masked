
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_ring {int next_to_clean; int count; } ;


 int FUNC_0 (struct i40e_ring*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct i40e_ring *VAR_0)
{
 u32 VAR_1 = VAR_0->next_to_clean + 1;

 VAR_1 = (VAR_1 < VAR_0->count) ? VAR_1 : 0;
 VAR_0->next_to_clean = VAR_1;
 FUNC_1(FUNC_0(VAR_0, VAR_1));
}
