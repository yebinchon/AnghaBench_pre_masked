
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z8530_channel {int* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct z8530_channel*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct z8530_channel *VAR_3, int VAR_4)
{
 if (VAR_4)
  VAR_3->regs[5] |= (VAR_2 | VAR_0);
 else
  VAR_3->regs[5] &= ~(VAR_2 | VAR_0);
 FUNC_0(VAR_3, VAR_1, VAR_3->regs[5]);
}
