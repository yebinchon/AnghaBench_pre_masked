
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct via_pll_config {int divisor; int rshift; int multiplier; } ;



__attribute__((used)) static inline u32 FUNC_0(struct via_pll_config VAR_0)
{
 return ((VAR_0.divisor - 2) << 16)
  | (VAR_0.rshift << 10)
  | (VAR_0.multiplier - 2);
}
