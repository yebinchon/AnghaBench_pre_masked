
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cvm_mmc_slot {int cached_switch; } ;



__attribute__((used)) static bool FUNC_0(struct cvm_mmc_slot *VAR_0, u64 VAR_1)
{

 u64 VAR_2 = 0x3001070fffffffffull;

 return (VAR_0->cached_switch & VAR_2) != (VAR_1 & VAR_2);
}
