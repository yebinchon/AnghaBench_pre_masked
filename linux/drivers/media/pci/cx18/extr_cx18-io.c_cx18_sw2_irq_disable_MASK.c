
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx18 {int sw2_irq_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx18*,int ) ;
 int FUNC_1 (struct cx18*,int,int ) ;

void FUNC_2(struct cx18 *VAR_1, u32 VAR_2)
{
 VAR_1->sw2_irq_mask = FUNC_0(VAR_1, VAR_0) & ~VAR_2;
 FUNC_1(VAR_1, VAR_1->sw2_irq_mask, VAR_0);
}
