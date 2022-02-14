
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmmac_priv {int ioaddr; int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct stmmac_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct stmmac_priv *VAR_0, u32 VAR_1)
{
 FUNC_0(VAR_0->dev, "DMA TX processes started in channel %d\n", VAR_1);
 FUNC_1(VAR_0, VAR_0->ioaddr, VAR_1);
}
