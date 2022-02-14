
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {scalar_t__ irq_base; } ;
struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct ucb1x00* FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (struct ucb1x00*) ;
 int FUNC_3 (struct ucb1x00*) ;
 unsigned int FUNC_4 (struct ucb1x00*,int ) ;
 int FUNC_5 (struct ucb1x00*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_2)
{
 struct ucb1x00 *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4, VAR_5;

 FUNC_3(VAR_3);
 VAR_4 = FUNC_4(VAR_3, VAR_1);
 FUNC_5(VAR_3, VAR_0, VAR_4);
 FUNC_5(VAR_3, VAR_0, 0);

 for (VAR_5 = 0; VAR_5 < 16 && VAR_4; VAR_5++, VAR_4 >>= 1)
  if (VAR_4 & 1)
   FUNC_0(VAR_3->irq_base + VAR_5);
 FUNC_2(VAR_3);
}
