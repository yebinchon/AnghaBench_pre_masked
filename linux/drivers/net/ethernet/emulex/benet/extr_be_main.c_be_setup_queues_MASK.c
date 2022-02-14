
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; int num_tx_qs; int num_rx_qs; struct net_device* netdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct be_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_5(VAR_1, VAR_0->num_rx_qs);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_6(VAR_1, VAR_0->num_tx_qs);
 if (VAR_2)
  goto err;

 return 0;
err:
 FUNC_4(&VAR_0->pdev->dev, "queue_setup failed\n");
 return VAR_2;
}
