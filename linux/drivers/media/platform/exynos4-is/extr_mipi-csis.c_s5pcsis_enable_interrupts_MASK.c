
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct csis_state {int interrupt_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct csis_state*,int ) ;
 int FUNC_1 (struct csis_state*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct csis_state *VAR_1, bool VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (VAR_2)
  VAR_3 |= VAR_1->interrupt_mask;
 else
  VAR_3 &= ~VAR_1->interrupt_mask;
 FUNC_1(VAR_1, VAR_0, VAR_3);
}
