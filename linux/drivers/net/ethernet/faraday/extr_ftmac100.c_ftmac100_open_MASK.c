
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct ftmac100 {int irq; int napi; scalar_t__ tx_pending; scalar_t__ tx_pointer; scalar_t__ tx_clean_pointer; scalar_t__ rx_pointer; } ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct ftmac100*) ;
 int FUNC_2 (struct ftmac100*) ;
 int FUNC_3 (struct ftmac100*) ;
 int VAR_0 ;
 int FUNC_4 (struct ftmac100*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,char*,...) ;
 struct ftmac100* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_1)
{
 struct ftmac100 *VAR_2 = FUNC_7(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_6(VAR_1, "failed to allocate buffers\n");
  goto err_alloc;
 }

 VAR_3 = FUNC_9(VAR_2->irq, VAR_0, 0, VAR_1->name, VAR_1);
 if (VAR_3) {
  FUNC_6(VAR_1, "failed to request irq %d\n", VAR_2->irq);
  goto err_irq;
 }

 VAR_2->rx_pointer = 0;
 VAR_2->tx_clean_pointer = 0;
 VAR_2->tx_pointer = 0;
 VAR_2->tx_pending = 0;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  goto err_hw;

 FUNC_5(&VAR_2->napi);
 FUNC_8(VAR_1);

 FUNC_2(VAR_2);

 return 0;

err_hw:
 FUNC_0(VAR_2->irq, VAR_1);
err_irq:
 FUNC_3(VAR_2);
err_alloc:
 return VAR_3;
}
