
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt3_board {scalar_t__* regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pt3_board*,int ) ;

int FUNC_2(struct pt3_board *VAR_2)
{
 FUNC_0(VAR_2->regs[0] + VAR_1);
 return FUNC_1(VAR_2, VAR_0);
}
