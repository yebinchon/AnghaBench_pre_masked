
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_sf2_priv {int core_reg_align; } ;



__attribute__((used)) static inline u32 FUNC_0(struct bcm_sf2_priv *VAR_0, u32 VAR_1)
{
 return VAR_1 << VAR_0->core_reg_align;
}
