
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev; int irq; } ;
struct greth_private {int napi; TYPE_1__* regs; int irq; } ;
struct TYPE_2__ {int status; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct greth_private*) ;
 int FUNC_4 (struct greth_private*) ;
 int FUNC_5 (struct greth_private*) ;
 int FUNC_6 (struct greth_private*) ;
 int FUNC_7 (struct greth_private*) ;
 int VAR_0 ;
 int FUNC_8 (int *) ;
 struct greth_private* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct greth_private*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int ,int ,char*,void*) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_1)
{
 struct greth_private *VAR_2 = FUNC_9(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3) {
  if (FUNC_10(VAR_2))
   FUNC_2(&VAR_1->dev, "Could not allocate memory for DMA rings\n");
  return VAR_3;
 }

 VAR_3 = FUNC_12(VAR_2->irq, VAR_0, 0, "eth", (void *) VAR_1);
 if (VAR_3) {
  if (FUNC_10(VAR_2))
   FUNC_2(&VAR_1->dev, "Could not allocate interrupt %d\n", VAR_1->irq);
  FUNC_3(VAR_2);
  return VAR_3;
 }

 if (FUNC_10(VAR_2))
  FUNC_1(&VAR_1->dev, " starting queue\n");
 FUNC_11(VAR_1);

 FUNC_0(VAR_2->regs->status, 0xFF);

 FUNC_8(&VAR_2->napi);

 FUNC_4(VAR_2);
 FUNC_6(VAR_2);
 FUNC_5(VAR_2);
 return 0;

}
