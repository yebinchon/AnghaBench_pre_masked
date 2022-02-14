
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; int irq; } ;
struct board_info {int phy_poll; int mii; scalar_t__ dbug_cnt; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_3 (struct board_info*) ;
 int FUNC_4 (struct board_info*,int ,int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int ,int) ;
 struct board_info* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct board_info*) ;
 int FUNC_10 (struct board_info*) ;
 int FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (int ,int ,unsigned int,int ,struct net_device*) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static int
FUNC_14(struct net_device *VAR_5)
{
 struct board_info *VAR_6 = FUNC_8(VAR_5);
 unsigned int VAR_7 = FUNC_5(VAR_5->irq);

 if (FUNC_9(VAR_6))
  FUNC_0(VAR_6->dev, "enabling %s\n", VAR_5->name);




 if (VAR_7 == VAR_3)
  FUNC_1(VAR_6->dev, "WARNING: no IRQ resource flags set.\n");

 VAR_7 |= VAR_2;


 FUNC_4(VAR_6, VAR_0, 0);
 FUNC_6(1);


 FUNC_2(VAR_5);

 if (FUNC_12(VAR_5->irq, VAR_4, VAR_7, VAR_5->name, VAR_5))
  return -VAR_1;



 FUNC_3(VAR_6);


 VAR_6->dbug_cnt = 0;

 FUNC_7(&VAR_6->mii, FUNC_10(VAR_6), 1);
 FUNC_11(VAR_5);


 FUNC_13(&VAR_6->phy_poll, 1);

 return 0;
}
