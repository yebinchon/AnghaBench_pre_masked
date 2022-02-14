
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct bcm_sf2_priv {scalar_t__* reg_offsets; scalar_t__ reg; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct bcm_sf2_priv *VAR_0, u16 VAR_1)
{
 return FUNC_0(VAR_0->reg + VAR_0->reg_offsets[VAR_1]);
}
