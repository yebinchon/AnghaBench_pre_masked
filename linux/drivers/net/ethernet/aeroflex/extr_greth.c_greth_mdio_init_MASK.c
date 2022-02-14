
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int phydev; int dev; } ;
struct greth_private {int irq; TYPE_1__* mdio; struct net_device* netdev; scalar_t__ edcl; } ;
struct TYPE_5__ {char* name; struct greth_private* priv; int write; int read; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (struct greth_private*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,char*,char*,int) ;
 scalar_t__ FUNC_13 (int,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct greth_private *VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;
 struct net_device *VAR_10 = VAR_7->netdev;

 VAR_7->mdio = FUNC_3();
 if (!VAR_7->mdio) {
  return -VAR_0;
 }

 VAR_7->mdio->name = "greth-mdio";
 FUNC_12(VAR_7->mdio->id, VAR_2, "%s-%d", VAR_7->mdio->name, VAR_7->irq);
 VAR_7->mdio->read = VAR_4;
 VAR_7->mdio->write = VAR_5;
 VAR_7->mdio->priv = VAR_7;

 VAR_8 = FUNC_5(VAR_7->mdio);
 if (VAR_8) {
  goto error;
 }

 VAR_8 = FUNC_2(VAR_7->netdev);
 if (VAR_8) {
  if (FUNC_7(VAR_7))
   FUNC_0(&VAR_7->netdev->dev, "failed to probe MDIO bus\n");
  goto unreg_mdio;
 }

 FUNC_10(VAR_10->phydev);


 if (VAR_7->edcl && VAR_3 == 1) {
  FUNC_11(VAR_10->phydev);
  VAR_9 = VAR_6 + 6*VAR_1;
  while (!FUNC_8(VAR_10->phydev) &&
         FUNC_13(VAR_6, VAR_9)) {
  }
  FUNC_9(VAR_10->phydev);
  FUNC_1(VAR_7->netdev);
 }

 return 0;

unreg_mdio:
 FUNC_6(VAR_7->mdio);
error:
 FUNC_4(VAR_7->mdio);
 return VAR_8;
}
