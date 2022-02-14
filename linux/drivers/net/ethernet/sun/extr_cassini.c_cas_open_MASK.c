
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct cas {int hw_running; int opened; int pm_mutex; int napi; int dev; TYPE_1__* pdev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct cas*) ;
 int FUNC_1 (struct cas*) ;
 int FUNC_2 (struct cas*) ;
 int FUNC_3 (struct cas*,int) ;
 int VAR_4 ;
 int FUNC_4 (struct cas*,unsigned long) ;
 int FUNC_5 (struct cas*,int ) ;
 int FUNC_6 (struct cas*) ;
 int FUNC_7 (struct cas*) ;
 int FUNC_8 (struct cas*,int ) ;
 scalar_t__ FUNC_9 (struct cas*) ;
 int FUNC_10 (struct cas*) ;
 int FUNC_11 (struct cas*,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*) ;
 struct cas* FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*) ;
 scalar_t__ FUNC_18 (int ,int ,int ,int ,void*) ;

__attribute__((used)) static int FUNC_19(struct net_device *VAR_5)
{
 struct cas *VAR_6 = FUNC_16(VAR_5);
 int VAR_7, VAR_8;
 unsigned long VAR_9;

 FUNC_12(&VAR_6->pm_mutex);

 VAR_7 = VAR_6->hw_running;




 if (!VAR_6->hw_running) {

  FUNC_4(VAR_6, VAR_9);





  FUNC_5(VAR_6, 0);
  VAR_6->hw_running = 1;
  FUNC_11(VAR_6, VAR_9);
 }

 VAR_8 = -VAR_1;
 if (FUNC_9(VAR_6) < 0)
  goto err_unlock;


 if (FUNC_0(VAR_6) < 0)
  goto err_tx_tiny;


 FUNC_7(VAR_6);
 FUNC_8(VAR_6, VAR_2);






 if (FUNC_18(VAR_6->pdev->irq, VAR_4,
   VAR_3, VAR_5->name, (void *) VAR_5)) {
  FUNC_15(VAR_6->dev, "failed to request irq !\n");
  VAR_8 = -VAR_0;
  goto err_spare;
 }





 FUNC_4(VAR_6, VAR_9);
 FUNC_1(VAR_6);
 FUNC_3(VAR_6, !VAR_7);
 VAR_6->opened = 1;
 FUNC_11(VAR_6, VAR_9);

 FUNC_17(VAR_5);
 FUNC_13(&VAR_6->pm_mutex);
 return 0;

err_spare:
 FUNC_6(VAR_6);
 FUNC_2(VAR_6);
err_tx_tiny:
 FUNC_10(VAR_6);
err_unlock:
 FUNC_13(&VAR_6->pm_mutex);
 return VAR_8;
}
