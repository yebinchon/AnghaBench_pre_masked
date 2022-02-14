
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge {TYPE_1__* adapter; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct sge *VAR_3)
{
 FUNC_0(VAR_2, VAR_3->adapter->regs + VAR_0);
 FUNC_0(0xffffffff, VAR_3->adapter->regs + VAR_1);
}
