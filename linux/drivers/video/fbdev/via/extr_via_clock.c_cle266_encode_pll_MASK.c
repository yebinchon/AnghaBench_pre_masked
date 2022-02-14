
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct via_pll_config {int multiplier; int rshift; int divisor; } ;



__attribute__((used)) static inline u32 FUNC_0(struct via_pll_config VAR_0)
{
 return (VAR_0.multiplier << 8)
  | (VAR_0.rshift << 6)
  | VAR_0.divisor;
}
