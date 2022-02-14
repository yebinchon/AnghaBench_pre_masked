
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct et131x_adapter {TYPE_2__* regs; } ;
struct TYPE_3__ {int pm_csr; } ;
struct TYPE_4__ {TYPE_1__ global; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct et131x_adapter *VAR_1)
{
 u32 VAR_2 = FUNC_0(&VAR_1->regs->global.pm_csr);

 return VAR_0 & VAR_2 ? 1 : 0;
}
