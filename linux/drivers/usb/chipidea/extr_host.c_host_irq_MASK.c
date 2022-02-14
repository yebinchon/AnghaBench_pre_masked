
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {int hcd; int irq; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(struct ci_hdrc *VAR_0)
{
 return FUNC_0(VAR_0->irq, VAR_0->hcd);
}
