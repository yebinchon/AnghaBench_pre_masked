
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx18 {int sw1_irq_mask; int sw2_irq_mask; int hw2_irq_mask; } ;
typedef int irqreturn_t ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cx18*,int ) ;
 int FUNC_2 (struct cx18*,int,int ,int,int) ;
 int FUNC_3 (struct cx18*,int) ;
 int FUNC_4 (struct cx18*,int) ;

irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct cx18 *VAR_7 = (struct cx18 *)VAR_6;
 u32 VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_1(VAR_7, VAR_3) & VAR_7->sw1_irq_mask;
 VAR_9 = FUNC_1(VAR_7, VAR_4) & VAR_7->sw2_irq_mask;
 VAR_10 = FUNC_1(VAR_7, VAR_0) & VAR_7->hw2_irq_mask;

 if (VAR_8)
  FUNC_2(VAR_7, VAR_8, VAR_3, ~VAR_8, VAR_8);
 if (VAR_9)
  FUNC_2(VAR_7, VAR_9, VAR_4, ~VAR_9, VAR_9);
 if (VAR_10)
  FUNC_2(VAR_7, VAR_10, VAR_0, ~VAR_10, VAR_10);

 if (VAR_8 || VAR_9 || VAR_10)
  FUNC_0("received interrupts SW1: %x	SW2: %x  HW2: %x\n",
      VAR_8, VAR_9, VAR_10);





 if (VAR_8)
  FUNC_3(VAR_7, VAR_8);






 if (VAR_9)
  FUNC_4(VAR_7, VAR_9);

 return (VAR_8 || VAR_9 || VAR_10) ? VAR_1 : VAR_2;
}
