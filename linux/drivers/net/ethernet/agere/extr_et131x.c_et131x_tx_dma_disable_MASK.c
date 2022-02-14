
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct et131x_adapter {TYPE_2__* regs; } ;
struct TYPE_3__ {int csr; } ;
struct TYPE_4__ {TYPE_1__ txdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct et131x_adapter *VAR_2)
{

 FUNC_0(VAR_0 | VAR_1,
        &VAR_2->regs->txdma.csr);
}
