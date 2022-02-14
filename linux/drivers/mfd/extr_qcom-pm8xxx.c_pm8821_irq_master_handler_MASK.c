
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pm_irq_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pm_irq_chip*,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct pm_irq_chip *VAR_0,
          int VAR_1, u8 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 1; VAR_3 < 8; VAR_3++)
  if (VAR_2 & FUNC_0(VAR_3))
   FUNC_1(VAR_0, VAR_1, VAR_3);
}
