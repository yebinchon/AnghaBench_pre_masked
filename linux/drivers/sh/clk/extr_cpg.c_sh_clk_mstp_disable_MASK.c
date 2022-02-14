
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int enable_bit; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (int,struct clk*) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_0)
{
 FUNC_1(FUNC_0(VAR_0) | (1 << VAR_0->enable_bit), VAR_0);
}
