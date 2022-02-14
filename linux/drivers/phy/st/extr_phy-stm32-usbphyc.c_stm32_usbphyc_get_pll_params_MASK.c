
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pll_params {int frac; int ndiv; } ;


 unsigned long long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long long,int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_2,
      struct pll_params *VAR_3)
{
 unsigned long long VAR_4, VAR_5, VAR_6;
 VAR_4 = (unsigned long long)VAR_1 * VAR_0;

 VAR_5 = VAR_4;
 FUNC_0(VAR_5, (VAR_2 * 2));
 VAR_3->ndiv = (u8)VAR_5;

 VAR_6 = VAR_4 * (1 << 16);
 FUNC_0(VAR_6, (VAR_2 * 2));
 VAR_6 = VAR_6 - (VAR_5 * (1 << 16));
 VAR_3->frac = (u16)VAR_6;
}
