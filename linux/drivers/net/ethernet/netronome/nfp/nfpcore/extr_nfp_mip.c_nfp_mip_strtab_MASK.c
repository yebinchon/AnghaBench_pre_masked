
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_mip {int strtab_size; int strtab_addr; } ;


 int FUNC_0 (int ) ;

void FUNC_1(const struct nfp_mip *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 *VAR_1 = FUNC_0(VAR_0->strtab_addr);
 *VAR_2 = FUNC_0(VAR_0->strtab_size);
}
