
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qman_portal {int p; int irq_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;

void FUNC_4(struct qman_portal *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;
 FUNC_1(VAR_5);
 VAR_4 &= VAR_0;
 VAR_3->irq_sources &= ~VAR_4;
 FUNC_3(&VAR_3->p, VAR_1, VAR_3->irq_sources);
 VAR_6 = FUNC_2(&VAR_3->p, VAR_1);




 FUNC_3(&VAR_3->p, VAR_2, ~VAR_6);
 FUNC_0(VAR_5);
}
