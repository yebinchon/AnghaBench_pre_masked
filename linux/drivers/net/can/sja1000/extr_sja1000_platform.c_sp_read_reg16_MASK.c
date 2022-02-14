
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sja1000_priv {scalar_t__ reg_base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(const struct sja1000_priv *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->reg_base + VAR_1 * 2);
}
