
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_eth_private {int is_opened; TYPE_2__* pdev; int napi; TYPE_1__* cd; } ;
struct net_device {int irq; int name; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int irq_flags; } ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct sh_eth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_1)
{
 struct sh_eth_private *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 FUNC_6(&VAR_2->pdev->dev);

 FUNC_2(&VAR_2->napi);

 VAR_3 = FUNC_8(VAR_1->irq, VAR_0,
     VAR_2->cd->irq_flags, VAR_1->name, VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_1, "Can not assign IRQ number\n");
  goto out_napi_off;
 }


 VAR_3 = FUNC_11(VAR_1);
 if (VAR_3)
  goto out_free_irq;


 VAR_3 = FUNC_9(VAR_1);
 if (VAR_3)
  goto out_free_irq;


 VAR_3 = FUNC_10(VAR_1);
 if (VAR_3)
  goto out_free_irq;

 FUNC_5(VAR_1);

 VAR_2->is_opened = 1;

 return VAR_3;

out_free_irq:
 FUNC_0(VAR_1->irq, VAR_1);
out_napi_off:
 FUNC_1(&VAR_2->napi);
 FUNC_7(&VAR_2->pdev->dev);
 return VAR_3;
}
