
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8727_chg {scalar_t__ irq; int work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,struct lp8727_chg*) ;

__attribute__((used)) static void FUNC_2(struct lp8727_chg *VAR_0)
{
 FUNC_0(&VAR_0->work);

 if (VAR_0->irq)
  FUNC_1(VAR_0->irq, VAR_0);
}
