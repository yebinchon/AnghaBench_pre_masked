
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct net_device {unsigned long base_addr; int dev_addr; } ;
struct TYPE_2__ {int irq; } ;
struct emac_adapter {void* base; void* csr; TYPE_1__ irq; struct net_device* netdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (struct platform_device*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1,
    struct emac_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 char VAR_4[VAR_0];
 int VAR_5 = 0;


 if (FUNC_2(&VAR_1->dev, VAR_4, VAR_0))
  FUNC_5(VAR_3->dev_addr, VAR_4);
 else
  FUNC_4(VAR_3);


 VAR_5 = FUNC_6(VAR_1, 0);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_2->irq.irq = VAR_5;


 VAR_2->base = FUNC_3(VAR_1, 0);
 if (FUNC_0(VAR_2->base))
  return FUNC_1(VAR_2->base);


 VAR_2->csr = FUNC_3(VAR_1, 1);
 if (FUNC_0(VAR_2->csr))
  return FUNC_1(VAR_2->csr);

 VAR_3->base_addr = (unsigned long)VAR_2->base;

 return 0;
}
