
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmpe {int * regs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct stmpe*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct stmpe *VAR_7, unsigned int VAR_8,
       bool VAR_9)
{
 unsigned int VAR_10 = 0;

 if (VAR_8 & VAR_3)
  VAR_10 |= VAR_0;
 else
  VAR_10 &= ~VAR_0;

 if (VAR_8 & VAR_4)
  VAR_10 |= VAR_1;
 else
  VAR_10 &= ~VAR_1;

 if (VAR_8 & VAR_5)
  VAR_10 |= VAR_2;
 else
  VAR_10 &= ~VAR_2;

 return FUNC_0(VAR_7, VAR_7->regs[VAR_6], VAR_10,
    VAR_9 ? VAR_10 : 0);
}
