
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nic {int watchdog; int napi; TYPE_2__* netdev; TYPE_1__* pdev; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nic*) ;
 int FUNC_2 (struct nic*) ;
 int FUNC_3 (struct nic*) ;
 int FUNC_4 (struct nic*) ;
 int VAR_1 ;
 int FUNC_5 (struct nic*) ;
 int FUNC_6 (struct nic*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct nic*,int *) ;
 int VAR_2 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(struct nic *VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_5(VAR_3)))
  return VAR_4;
 if ((VAR_4 = FUNC_1(VAR_3)))
  goto err_rx_clean_list;
 if ((VAR_4 = FUNC_4(VAR_3)))
  goto err_clean_cbs;
 FUNC_7(VAR_3->netdev);
 FUNC_8(VAR_3, ((void*)0));
 FUNC_9(&VAR_3->watchdog, VAR_2);
 if ((VAR_4 = FUNC_12(VAR_3->pdev->irq, VAR_1, VAR_0,
  VAR_3->netdev->name, VAR_3->netdev)))
  goto err_no_irq;
 FUNC_11(VAR_3->netdev);
 FUNC_10(&VAR_3->napi);


 FUNC_3(VAR_3);
 return 0;

err_no_irq:
 FUNC_0(&VAR_3->watchdog);
err_clean_cbs:
 FUNC_2(VAR_3);
err_rx_clean_list:
 FUNC_6(VAR_3);
 return VAR_4;
}
