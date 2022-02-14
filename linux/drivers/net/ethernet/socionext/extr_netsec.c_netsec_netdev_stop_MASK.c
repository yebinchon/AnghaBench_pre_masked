
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netsec_priv {int dev; TYPE_1__* ndev; int napi; } ;
struct net_device {int phydev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct netsec_priv*) ;
 int FUNC_2 (int *) ;
 struct netsec_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct netsec_priv*,int) ;
 int FUNC_6 (struct netsec_priv*) ;
 int FUNC_7 (struct netsec_priv*,int ) ;
 int FUNC_8 (struct netsec_priv*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_3)
{
 int VAR_4;
 struct netsec_priv *VAR_5 = FUNC_3(VAR_3);

 FUNC_4(VAR_5->ndev);
 FUNC_0();

 FUNC_2(&VAR_5->napi);

 FUNC_8(VAR_5, VAR_0, ~0);
 FUNC_6(VAR_5);

 FUNC_1(VAR_5->ndev->irq, VAR_5);

 FUNC_7(VAR_5, VAR_2);
 FUNC_7(VAR_5, VAR_1);

 FUNC_10(VAR_3->phydev);
 FUNC_9(VAR_3->phydev);

 VAR_4 = FUNC_5(VAR_5, 0);

 FUNC_11(VAR_5->dev);

 return VAR_4;
}
