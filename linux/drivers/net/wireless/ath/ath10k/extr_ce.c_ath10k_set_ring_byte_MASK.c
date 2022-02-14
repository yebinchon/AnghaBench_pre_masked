
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_hw_ce_regs_addr_map {unsigned int lsb; unsigned int mask; } ;



__attribute__((used)) static inline unsigned int
FUNC_0(unsigned int VAR_0,
       struct ath10k_hw_ce_regs_addr_map *VAR_1)
{
 return ((VAR_0 << VAR_1->lsb) & VAR_1->mask);
}
