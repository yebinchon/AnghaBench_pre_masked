
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sge {TYPE_1__* adapter; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct sge *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3->adapter->regs + VAR_0);

 FUNC_1(VAR_4 & ~VAR_2, VAR_3->adapter->regs + VAR_0);
 FUNC_1(0, VAR_3->adapter->regs + VAR_1);
}
