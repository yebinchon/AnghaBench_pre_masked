
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct unimac_mdio_priv {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_3(struct unimac_mdio_priv *VAR_2, u32 VAR_3)
{



 if (FUNC_0(VAR_1) && FUNC_0(VAR_0))
  return FUNC_1(VAR_2->base + VAR_3);
 else
  return FUNC_2(VAR_2->base + VAR_3);
}
