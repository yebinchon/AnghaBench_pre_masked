
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sja1000_priv {scalar_t__ reg_base; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(const struct sja1000_priv *VAR_0, int VAR_1, u8 VAR_2)
{
 FUNC_0(VAR_2, VAR_0->reg_base + VAR_1 * 4);
}
