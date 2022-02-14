
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct et131x_adapter {int netdev; int flags; TYPE_2__* regs; } ;
struct TYPE_3__ {int pm_csr; } ;
struct TYPE_4__ {TYPE_1__ global; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct et131x_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct et131x_adapter*) ;
 int FUNC_3 (struct et131x_adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct et131x_adapter *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_4(&VAR_3->regs->global.pm_csr);


 VAR_4 |= VAR_0;
 VAR_4 &= ~VAR_1;
 FUNC_5(VAR_4, &VAR_3->regs->global.pm_csr);






 FUNC_2(VAR_3);





 FUNC_3(VAR_3);

 FUNC_0(VAR_3);


 VAR_3->flags &= ~VAR_2;

 FUNC_1(VAR_3->netdev);
}
