
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc_emac_priv {scalar_t__ regs; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct arc_emac_priv *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_0(VAR_2, VAR_0->regs + VAR_1 * sizeof(int));
}
