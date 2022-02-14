
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pcs; } ;
struct stmmac_priv {TYPE_1__* hw; int dev; TYPE_3__ dma_cap; TYPE_2__* plat; } ;
struct TYPE_5__ {int interface; } ;
struct TYPE_4__ {int pcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_7)
{
 int VAR_8 = VAR_7->plat->interface;

 if (VAR_7->dma_cap.pcs) {
  if ((VAR_8 == VAR_0) ||
      (VAR_8 == VAR_1) ||
      (VAR_8 == VAR_2) ||
      (VAR_8 == VAR_3)) {
   FUNC_0(VAR_7->dev, "PCS RGMII support enabled\n");
   VAR_7->hw->pcs = VAR_5;
  } else if (VAR_8 == VAR_4) {
   FUNC_0(VAR_7->dev, "PCS SGMII support enabled\n");
   VAR_7->hw->pcs = VAR_6;
  }
 }
}
