
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* dev; int device; int hw; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct stmmac_priv*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct stmmac_priv *VAR_0)
{
 if (!FUNC_2(VAR_0->dev->dev_addr)) {
  FUNC_3(VAR_0, VAR_0->hw, VAR_0->dev->dev_addr, 0);
  if (!FUNC_2(VAR_0->dev->dev_addr))
   FUNC_1(VAR_0->dev);
  FUNC_0(VAR_0->device, "device MAC address %pM\n",
    VAR_0->dev->dev_addr);
 }
}
