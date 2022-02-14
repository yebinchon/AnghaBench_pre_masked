
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int asp; } ;
struct stmmac_priv {int sstats; TYPE_1__ dma_cap; int ioaddr; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct stmmac_priv*) ;
 int FUNC_1 (struct stmmac_priv*,int ,int ,int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct stmmac_priv *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_1->dev,
   VAR_1->ioaddr, VAR_1->dma_cap.asp, &VAR_1->sstats);
 if (VAR_2 && (VAR_2 != -VAR_0)) {
  FUNC_0(VAR_1);
  return 1;
 }

 return 0;
}
