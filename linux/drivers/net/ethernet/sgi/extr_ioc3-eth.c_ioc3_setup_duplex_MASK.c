
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ full_duplex; } ;
struct ioc3_private {int ioc3_lock; int emcr; TYPE_1__ mii; struct ioc3_ethregs* regs; } ;
struct ioc3_ethregs {int emcr; int etcsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct ioc3_private *VAR_3)
{
 struct ioc3_ethregs *VAR_4 = VAR_3->regs;

 FUNC_0(&VAR_3->ioc3_lock);

 if (VAR_3->mii.full_duplex) {
  FUNC_2(VAR_1, &VAR_4->etcsr);
  VAR_3->emcr |= VAR_0;
 } else {
  FUNC_2(VAR_2, &VAR_4->etcsr);
  VAR_3->emcr &= ~VAR_0;
 }
 FUNC_2(VAR_3->emcr, &VAR_4->emcr);

 FUNC_1(&VAR_3->ioc3_lock);
}
