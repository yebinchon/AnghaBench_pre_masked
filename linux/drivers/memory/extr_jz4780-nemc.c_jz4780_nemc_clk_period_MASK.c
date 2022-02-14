
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4780_nemc {int clk; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long,unsigned long) ;

__attribute__((used)) static uint32_t FUNC_2(struct jz4780_nemc *VAR_0)
{
 unsigned long VAR_1;

 VAR_1 = FUNC_0(VAR_0->clk);
 if (!VAR_1)
  return 0;


 return FUNC_1(1000000000000ull, VAR_1);
}
