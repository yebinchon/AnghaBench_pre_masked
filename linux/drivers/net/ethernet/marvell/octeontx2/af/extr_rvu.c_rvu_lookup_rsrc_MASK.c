
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvu_block {int lookup_reg; int addr; } ;
struct rvu {int dummy; } ;


 unsigned long long FUNC_0 (struct rvu*,int ,int ) ;
 int FUNC_1 (struct rvu*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct rvu *VAR_0, struct rvu_block *VAR_1,
      int VAR_2, int VAR_3)
{
 u64 VAR_4;

 VAR_4 = ((u64)VAR_2 << 24) | (VAR_3 << 16) | (1ULL << 13);
 FUNC_1(VAR_0, VAR_1->addr, VAR_1->lookup_reg, VAR_4);


 while (FUNC_0(VAR_0, VAR_1->addr, VAR_1->lookup_reg) & (1ULL << 13))
  ;

 VAR_4 = FUNC_0(VAR_0, VAR_1->addr, VAR_1->lookup_reg);


 if (!(VAR_4 & (1ULL << 12)))
  return -1;

 return (VAR_4 & 0xFFF);
}
