
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_local {int * phy_dev; TYPE_1__* ndev; scalar_t__ phy_node; } ;
struct net_device {int irq; int name; int dev_addr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,...) ;
 struct net_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int * FUNC_3 (TYPE_1__*,scalar_t__,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int ,int ,int ,int ,struct net_device*) ;
 int VAR_10 ;
 int FUNC_10 (struct net_local*) ;
 int FUNC_11 (struct net_local*) ;
 int VAR_11 ;
 int FUNC_12 (struct net_local*,int ) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_12)
{
 struct net_local *VAR_13 = FUNC_1(VAR_12);
 int VAR_14;


 FUNC_10(VAR_13);

 if (VAR_13->phy_node) {
  u32 VAR_15;

  VAR_13->phy_dev = FUNC_3(VAR_13->ndev, VAR_13->phy_node,
          VAR_10, 0,
          VAR_8);
  if (!VAR_13->phy_dev) {
   FUNC_0(&VAR_13->ndev->dev, "of_phy_connect() failed\n");
   return -VAR_4;
  }


  FUNC_6(VAR_13->phy_dev, VAR_9);


  FUNC_8(VAR_13->phy_dev, VAR_7, 0);


  FUNC_8(VAR_13->phy_dev, VAR_5, VAR_0 |
     VAR_1);


  VAR_15 = FUNC_5(VAR_13->phy_dev, VAR_6);
  VAR_15 |= (VAR_2 | VAR_3);
  FUNC_8(VAR_13->phy_dev, VAR_6, VAR_15);

  FUNC_7(VAR_13->phy_dev);
 }


 FUNC_12(VAR_13, VAR_12->dev_addr);


 VAR_14 = FUNC_9(VAR_12->irq, VAR_11, 0, VAR_12->name, VAR_12);
 if (VAR_14) {
  FUNC_0(&VAR_13->ndev->dev, "Could not allocate interrupt %d\n",
   VAR_12->irq);
  if (VAR_13->phy_dev)
   FUNC_4(VAR_13->phy_dev);
  VAR_13->phy_dev = ((void*)0);

  return VAR_14;
 }


 FUNC_11(VAR_13);


 FUNC_2(VAR_12);

 return 0;
}
