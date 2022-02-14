
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; int end; } ;
struct device {int dummy; } ;
struct net_device {int name; scalar_t__ phydev; struct device dev; } ;
struct emac_priv {TYPE_1__* pdev; int ndev; int dma; int napi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct emac_priv*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 struct emac_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct emac_priv*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (scalar_t__) ;
 struct resource* FUNC_11 (TYPE_1__*,int ,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_2)
{
 struct resource *VAR_3;
 int VAR_4 = 0;
 int VAR_5;
 struct emac_priv *VAR_6 = FUNC_6(VAR_2);
 struct device *VAR_7 = &VAR_2->dev;


 FUNC_9(VAR_2);
 FUNC_5(&VAR_6->napi);

 FUNC_7(VAR_2);
 FUNC_2(VAR_6);
 FUNC_0(VAR_6->dma);
 FUNC_3(VAR_0, 1);

 if (VAR_2->phydev)
  FUNC_10(VAR_2->phydev);


 while ((VAR_3 = FUNC_11(VAR_6->pdev, VAR_1, VAR_4))) {
  for (VAR_5 = VAR_3->start; VAR_5 <= VAR_3->end; VAR_5++)
   FUNC_4(VAR_5, VAR_6->ndev);
  VAR_4++;
 }

 if (FUNC_8(VAR_6))
  FUNC_1(VAR_7, "DaVinci EMAC: %s stopped\n", VAR_2->name);

 FUNC_12(&VAR_6->pdev->dev);
 return 0;
}
