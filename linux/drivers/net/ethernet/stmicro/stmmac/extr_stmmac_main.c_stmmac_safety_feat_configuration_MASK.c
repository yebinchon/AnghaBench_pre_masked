
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ asp; } ;
struct stmmac_priv {int dev; TYPE_1__ dma_cap; int ioaddr; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct stmmac_priv*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct stmmac_priv *VAR_0)
{
 if (VAR_0->dma_cap.asp) {
  FUNC_0(VAR_0->dev, "Enabling Safety Features\n");
  FUNC_1(VAR_0, VAR_0->ioaddr, VAR_0->dma_cap.asp);
 } else {
  FUNC_0(VAR_0->dev, "No Safety Features support found\n");
 }
}
