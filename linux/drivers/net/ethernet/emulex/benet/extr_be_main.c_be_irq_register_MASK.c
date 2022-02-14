
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; int irq; } ;
struct be_adapter {int isr_registered; TYPE_1__* pdev; int * eq_obj; struct net_device* netdev; } ;
struct TYPE_2__ {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*) ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct be_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 int VAR_4;

 if (FUNC_3(VAR_2)) {
  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4 == 0)
   goto done;

  if (FUNC_1(VAR_2))
   return VAR_4;
 }


 VAR_3->irq = VAR_2->pdev->irq;
 VAR_4 = FUNC_4(VAR_3->irq, VAR_1, VAR_0, VAR_3->name,
        &VAR_2->eq_obj[0]);
 if (VAR_4) {
  FUNC_2(&VAR_2->pdev->dev,
   "INTx request IRQ failed - err %d\n", VAR_4);
  return VAR_4;
 }
done:
 VAR_2->isr_registered = 1;
 return 0;
}
