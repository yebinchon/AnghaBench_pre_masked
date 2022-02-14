
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int phydev; int name; } ;
struct emac_board_info {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct net_device*) ;
 struct emac_board_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct emac_board_info*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0)
{
 struct emac_board_info *VAR_1 = FUNC_4(VAR_0);

 if (FUNC_6(VAR_1))
  FUNC_0(VAR_1->dev, "shutting down %s\n", VAR_0->name);

 FUNC_7(VAR_0);
 FUNC_5(VAR_0);

 FUNC_8(VAR_0->phydev);

 FUNC_1(VAR_0);

 FUNC_2(VAR_0);

 FUNC_3(VAR_0->irq, VAR_0);

 return 0;
}
