
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7530_priv {int dummy; } ;
struct mt7530_dummy_poll {int reg; struct mt7530_priv* priv; } ;



__attribute__((used)) static inline void FUNC_0(struct mt7530_dummy_poll *VAR_0,
       struct mt7530_priv *VAR_1, u32 VAR_2)
{
 VAR_0->priv = VAR_1;
 VAR_0->reg = VAR_2;
}
