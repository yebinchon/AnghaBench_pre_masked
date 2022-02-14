
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc3_private {struct ioc3_ethregs* regs; } ;
struct ioc3_ethregs {int eier; int emcr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct ioc3_private *VAR_0)
{
 struct ioc3_ethregs *VAR_1 = VAR_0->regs;

 FUNC_1(0, &VAR_1->emcr);
 FUNC_1(0, &VAR_1->eier);
 FUNC_0(&VAR_1->eier);
}
