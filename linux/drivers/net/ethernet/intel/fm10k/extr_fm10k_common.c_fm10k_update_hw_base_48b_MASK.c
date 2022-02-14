
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct fm10k_hw_stat {int base_h; scalar_t__ base_l; } ;



__attribute__((used)) static void FUNC_0(struct fm10k_hw_stat *VAR_0, u64 VAR_1)
{
 if (!VAR_1)
  return;


 VAR_1 += VAR_0->base_l;
 VAR_0->base_l = (u32)VAR_1;


 VAR_0->base_h += (u32)(VAR_1 >> 32);
}
