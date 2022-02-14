
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; } ;
struct atl1_adapter {TYPE_1__* pdev; int napi; struct net_device* netdev; } ;
typedef int s32 ;
struct TYPE_3__ {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atl1_adapter*) ;
 int FUNC_1 (struct atl1_adapter*) ;
 int FUNC_2 (struct atl1_adapter*) ;
 int FUNC_3 (struct atl1_adapter*) ;
 int FUNC_4 (struct atl1_adapter*) ;
 int VAR_3 ;
 int FUNC_5 (struct atl1_adapter*) ;
 int FUNC_6 (struct atl1_adapter*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct atl1_adapter*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ,int ,int,int ,struct net_device*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static s32 FUNC_16(struct atl1_adapter *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->netdev;
 int VAR_6;
 int VAR_7 = 0;


 FUNC_7(VAR_5);
 FUNC_4(VAR_4);
 FUNC_6(VAR_4);
 VAR_6 = FUNC_0(VAR_4);
 if (FUNC_15(!VAR_6))

  return -VAR_1;

 if (FUNC_15(FUNC_3(VAR_4))) {
  VAR_6 = -VAR_0;
  goto err_up;
 }

 VAR_6 = FUNC_13(VAR_4->pdev);
 if (VAR_6) {
  if (FUNC_10(VAR_4))
   FUNC_8(&VAR_4->pdev->dev,
    "Unable to enable MSI: %d\n", VAR_6);
  VAR_7 |= VAR_2;
 }

 VAR_6 = FUNC_14(VAR_4->pdev->irq, VAR_3, VAR_7,
   VAR_5->name, VAR_5);
 if (FUNC_15(VAR_6))
  goto err_up;

 FUNC_9(&VAR_4->napi);
 FUNC_5(VAR_4);
 FUNC_1(VAR_4);
 FUNC_11(VAR_5);
 return 0;

err_up:
 FUNC_12(VAR_4->pdev);

 FUNC_2(VAR_4);
 return VAR_6;
}
