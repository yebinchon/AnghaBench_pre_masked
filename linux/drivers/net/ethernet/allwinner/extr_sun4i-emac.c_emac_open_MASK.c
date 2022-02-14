
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; int irq; int name; } ;
struct emac_board_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct emac_board_info*) ;
 int FUNC_4 (int ,struct net_device*) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct emac_board_info* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct emac_board_info*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int *,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2)
{
 struct emac_board_info *VAR_3 = FUNC_6(VAR_2);
 int VAR_4;

 if (FUNC_7(VAR_3))
  FUNC_0(VAR_3->dev, "enabling %s\n", VAR_2->name);

 if (FUNC_10(VAR_2->irq, &VAR_1, 0, VAR_2->name, VAR_2))
  return -VAR_0;


 FUNC_3(VAR_3);
 FUNC_1(VAR_2);

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 < 0) {
  FUNC_4(VAR_2->irq, VAR_2);
  FUNC_5(VAR_2, "cannot probe MDIO bus\n");
  return VAR_4;
 }

 FUNC_9(VAR_2->phydev);
 FUNC_8(VAR_2);

 return 0;
}
