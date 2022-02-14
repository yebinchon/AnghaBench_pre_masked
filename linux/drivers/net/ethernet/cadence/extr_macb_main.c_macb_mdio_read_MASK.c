
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {struct macb* priv; } ;
struct macb {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct macb*) ;
 int FUNC_3 (struct macb*,int ) ;
 int FUNC_4 (struct macb*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct mii_bus *VAR_10, int VAR_11, int VAR_12)
{
 struct macb *VAR_13 = VAR_10->priv;
 int VAR_14;

 VAR_14 = FUNC_5(&VAR_13->pdev->dev);
 if (VAR_14 < 0)
  goto mdio_pm_exit;

 VAR_14 = FUNC_2(VAR_13);
 if (VAR_14 < 0)
  goto mdio_read_exit;

 FUNC_4(VAR_13, VAR_5, (FUNC_0(VAR_9, VAR_4)
         | FUNC_0(VAR_8, VAR_3)
         | FUNC_0(VAR_6, VAR_11)
         | FUNC_0(VAR_7, VAR_12)
         | FUNC_0(VAR_0, VAR_2)));

 VAR_14 = FUNC_2(VAR_13);
 if (VAR_14 < 0)
  goto mdio_read_exit;

 VAR_14 = FUNC_1(VAR_1, FUNC_3(VAR_13, VAR_5));

mdio_read_exit:
 FUNC_6(&VAR_13->pdev->dev);
 FUNC_7(&VAR_13->pdev->dev);
mdio_pm_exit:
 return VAR_14;
}
