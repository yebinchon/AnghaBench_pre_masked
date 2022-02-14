
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bcm_sf2_priv {scalar_t__ core; } ;


 scalar_t__ FUNC_0 (struct bcm_sf2_priv*,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct bcm_sf2_priv *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_1, VAR_0->core + VAR_3);
}
