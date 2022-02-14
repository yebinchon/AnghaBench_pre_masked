
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afu_irq {int name; int virq; } ;


 int FUNC_0 (int ,struct afu_irq*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct afu_irq *VAR_0)
{
 FUNC_0(VAR_0->virq, VAR_0);
 FUNC_1(VAR_0->virq);
 FUNC_2(VAR_0->name);
}
