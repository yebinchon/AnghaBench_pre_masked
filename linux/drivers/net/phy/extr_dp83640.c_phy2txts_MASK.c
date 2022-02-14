
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct phy_txts {int sec_lo; int sec_hi; int ns_lo; int ns_hi; } ;



__attribute__((used)) static u64 FUNC_0(struct phy_txts *VAR_0)
{
 u64 VAR_1;
 u32 VAR_2;

 VAR_2 = VAR_0->sec_lo;
 VAR_2 |= VAR_0->sec_hi << 16;

 VAR_1 = VAR_0->ns_lo;
 VAR_1 |= (VAR_0->ns_hi & 0x3fff) << 16;
 VAR_1 += ((u64)VAR_2) * 1000000000ULL;

 return VAR_1;
}
