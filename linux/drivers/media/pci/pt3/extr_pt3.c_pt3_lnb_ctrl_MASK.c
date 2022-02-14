
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt3_board {scalar_t__* regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct pt3_board *VAR_1, bool VAR_2)
{
 FUNC_0((VAR_2 ? 0x0f : 0x0c), VAR_1->regs[0] + VAR_0);
}
