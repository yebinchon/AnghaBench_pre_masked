
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int phydev; } ;
struct fec_enet_private {int quirks; TYPE_1__* pdev; int napi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 struct fec_enet_private* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(struct net_device *VAR_1)
{
 struct fec_enet_private *VAR_2 = FUNC_6(VAR_1);

 FUNC_10(VAR_1->phydev);

 if (FUNC_7(VAR_1)) {
  FUNC_5(&VAR_2->napi);
  FUNC_8(VAR_1);
  FUNC_3(VAR_1);
 }

 FUNC_9(VAR_1->phydev);

 if (VAR_2->quirks & VAR_0)
  FUNC_4();

 FUNC_2(VAR_1);

 FUNC_0(VAR_1, 0);
 FUNC_11(&VAR_2->pdev->dev);
 FUNC_12(&VAR_2->pdev->dev);
 FUNC_13(&VAR_2->pdev->dev);

 FUNC_1(VAR_1);

 return 0;
}
