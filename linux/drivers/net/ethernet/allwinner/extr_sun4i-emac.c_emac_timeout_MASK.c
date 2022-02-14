
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct emac_board_info {int lock; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct emac_board_info*) ;
 struct emac_board_info* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct emac_board_info*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_0)
{
 struct emac_board_info *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 if (FUNC_4(VAR_1))
  FUNC_0(VAR_1->dev, "tx time out.\n");


 FUNC_8(&VAR_1->lock, VAR_2);

 FUNC_5(VAR_0);
 FUNC_2(VAR_1);
 FUNC_1(VAR_0);

 FUNC_6(VAR_0);
 FUNC_7(VAR_0);


 FUNC_9(&VAR_1->lock, VAR_2);
}
