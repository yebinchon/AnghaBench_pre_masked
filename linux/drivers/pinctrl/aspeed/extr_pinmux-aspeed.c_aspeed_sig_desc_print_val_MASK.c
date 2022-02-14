
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aspeed_sig_desc {size_t ip; int mask; int disable; int enable; int reg; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (char*,int ,int ,int,int ,int,int) ;

__attribute__((used)) static inline void FUNC_2(
  const struct aspeed_sig_desc *VAR_1, bool VAR_2, u32 VAR_3)
{
 FUNC_1("Want %s%X[0x%08X]=0x%X, got 0x%X from 0x%08X\n",
   VAR_0[VAR_1->ip], VAR_1->reg,
   VAR_1->mask, VAR_2 ? VAR_1->enable : VAR_1->disable,
   (VAR_3 & VAR_1->mask) >> FUNC_0(VAR_1->mask), VAR_3);
}
