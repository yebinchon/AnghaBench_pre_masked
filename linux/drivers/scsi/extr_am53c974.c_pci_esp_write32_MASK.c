
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct esp {scalar_t__ regs; } ;


 void FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct esp *VAR_0, u32 VAR_1, unsigned long VAR_2)
{
 return FUNC_0(VAR_1, VAR_0->regs + (VAR_2 * 4UL));
}
