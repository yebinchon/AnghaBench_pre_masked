
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int name; } ;
struct board_info {int phy_poll; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct net_device*) ;
 struct board_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct board_info*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_0)
{
 struct board_info *VAR_1 = FUNC_4(VAR_0);

 if (FUNC_6(VAR_1))
  FUNC_1(VAR_1->dev, "shutting down %s\n", VAR_0->name);

 FUNC_0(&VAR_1->phy_poll);

 FUNC_7(VAR_0);
 FUNC_5(VAR_0);


 FUNC_3(VAR_0->irq, VAR_0);

 FUNC_2(VAR_0);

 return 0;
}
