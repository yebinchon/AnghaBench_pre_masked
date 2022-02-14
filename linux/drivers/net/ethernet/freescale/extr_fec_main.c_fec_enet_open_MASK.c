
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dev; TYPE_2__* phydev; } ;
struct fec_enet_private {int quirks; int wol_flag; TYPE_1__* pdev; int napi; } ;
struct TYPE_5__ {scalar_t__ drv; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 struct fec_enet_private* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int
FUNC_17(struct net_device *VAR_2)
{
 struct fec_enet_private *VAR_3 = FUNC_8(VAR_2);
 int VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_14(&VAR_3->pdev->dev);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_12(&VAR_3->pdev->dev);
 VAR_4 = FUNC_2(VAR_2, 1);
 if (VAR_4)
  goto clk_enable;







 if (VAR_2->phydev && VAR_2->phydev->drv)
  VAR_5 = 0;
 else
  VAR_5 = 1;





 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  goto err_enet_alloc;


 FUNC_5(VAR_2);


 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  goto err_enet_mii_probe;




 if (VAR_5)
  FUNC_10(VAR_2->phydev);

 if (VAR_3->quirks & VAR_0)
  FUNC_6();

 FUNC_7(&VAR_3->napi);
 FUNC_11(VAR_2->phydev);
 FUNC_9(VAR_2);

 FUNC_0(&VAR_2->dev, VAR_3->wol_flag &
     VAR_1);

 return 0;

err_enet_mii_probe:
 FUNC_3(VAR_2);
err_enet_alloc:
 FUNC_2(VAR_2, 0);
clk_enable:
 FUNC_15(&VAR_3->pdev->dev);
 FUNC_16(&VAR_3->pdev->dev);
 FUNC_13(&VAR_3->pdev->dev);
 return VAR_4;
}
