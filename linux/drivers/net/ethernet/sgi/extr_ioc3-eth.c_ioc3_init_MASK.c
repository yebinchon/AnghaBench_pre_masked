
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ioc3_private {int ehar_h; int ehar_l; int ioc3_timer; struct ioc3_ethregs* regs; } ;
struct ioc3_ethregs {int ersr; int ehar_l; int ehar_h; int ertr; int ercsr; int etcdc; int erbar; int emcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 struct ioc3_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2)
{
 struct ioc3_private *VAR_3 = FUNC_2(VAR_2);
 struct ioc3_ethregs *VAR_4 = VAR_3->regs;

 FUNC_1(&VAR_3->ioc3_timer);

 FUNC_5(VAR_0, &VAR_4->emcr);
 FUNC_3(&VAR_4->emcr);
 FUNC_4(4);
 FUNC_5(0, &VAR_4->emcr);
 FUNC_3(&VAR_4->emcr);


 FUNC_5(VAR_1, &VAR_4->erbar);
 FUNC_3(&VAR_4->etcdc);
 FUNC_5(15, &VAR_4->ercsr);
 FUNC_5(0, &VAR_4->ertr);
 FUNC_0(VAR_2);
 FUNC_5(VAR_3->ehar_h, &VAR_4->ehar_h);
 FUNC_5(VAR_3->ehar_l, &VAR_4->ehar_l);
 FUNC_5(42, &VAR_4->ersr);
}
