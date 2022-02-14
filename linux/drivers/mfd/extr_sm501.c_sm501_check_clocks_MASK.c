
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_devdata {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct sm501_devdata *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_3->regs + VAR_0);
 unsigned long VAR_5 = (VAR_4 & VAR_2);
 unsigned long VAR_6 = (VAR_4 & VAR_1);

 return ((VAR_5 == 0 && VAR_6 != 0) || (VAR_5 != 0 && VAR_6 == 0));
}
