
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct pic32_dmt {scalar_t__ regs; int clk; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct pic32_dmt *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_0(VAR_1->clk);
 if (VAR_2)
  return FUNC_1(VAR_1->regs + VAR_0) / VAR_2;

 return 0;
}
