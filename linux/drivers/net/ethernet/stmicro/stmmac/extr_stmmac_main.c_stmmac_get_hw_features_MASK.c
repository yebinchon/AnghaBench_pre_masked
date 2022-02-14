
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int dma_cap; int ioaddr; } ;


 scalar_t__ FUNC_0 (struct stmmac_priv*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct stmmac_priv *VAR_0)
{
 return FUNC_0(VAR_0, VAR_0->ioaddr, &VAR_0->dma_cap) == 0;
}
