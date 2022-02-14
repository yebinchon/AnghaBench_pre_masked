
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct via_pll_config {int rshift; } ;


 int FUNC_0 (int,struct via_pll_config) ;

__attribute__((used)) static inline u32 FUNC_1(u32 VAR_0,
 struct via_pll_config VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) >> VAR_1.rshift;
}
