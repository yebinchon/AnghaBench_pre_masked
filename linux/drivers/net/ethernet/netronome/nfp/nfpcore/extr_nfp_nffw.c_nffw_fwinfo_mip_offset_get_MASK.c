
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nffw_fwinfo {int mip_offset_lo; int loaded__mu_da__mip_off_hi; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u64 FUNC_1(const struct nffw_fwinfo *VAR_0)
{
 u64 VAR_1 = FUNC_0(VAR_0->loaded__mu_da__mip_off_hi);

 return (VAR_1 & 0xFF) << 32 | FUNC_0(VAR_0->mip_offset_lo);
}
