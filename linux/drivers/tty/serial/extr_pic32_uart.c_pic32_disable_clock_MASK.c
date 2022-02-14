
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_sport {int clk; int ref_clk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct pic32_sport *VAR_0)
{
 VAR_0->ref_clk--;
 FUNC_0(VAR_0->clk);
}
