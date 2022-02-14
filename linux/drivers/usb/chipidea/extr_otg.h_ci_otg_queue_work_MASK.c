
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {int irq; int work; int wq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct ci_hdrc *VAR_0)
{
 FUNC_0(VAR_0->irq);
 if (FUNC_2(VAR_0->wq, &VAR_0->work) == 0)
  FUNC_1(VAR_0->irq);
}
