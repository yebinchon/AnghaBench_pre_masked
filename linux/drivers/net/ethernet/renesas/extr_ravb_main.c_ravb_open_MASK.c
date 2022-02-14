
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {scalar_t__ chip_id; int * napi; int emac_irq; int * rx_irqs; int * tx_irqs; struct platform_device* pdev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct net_device {int irq; int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct ravb_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_8 (int ,int ,struct net_device*,struct device*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*,struct platform_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_9)
{
 struct ravb_private *VAR_10 = FUNC_4(VAR_9);
 struct platform_device *VAR_11 = VAR_10->pdev;
 struct device *VAR_12 = &VAR_11->dev;
 int VAR_13;

 FUNC_2(&VAR_10->napi[VAR_1]);
 FUNC_2(&VAR_10->napi[VAR_2]);

 if (VAR_10->chip_id == VAR_3) {
  VAR_13 = FUNC_12(VAR_9->irq, VAR_6, VAR_0,
        VAR_9->name, VAR_9);
  if (VAR_13) {
   FUNC_3(VAR_9, "cannot request IRQ\n");
   goto out_napi_off;
  }
 } else {
  VAR_13 = FUNC_8(VAR_9->irq, VAR_7, VAR_9,
          VAR_12, "ch22:multi");
  if (VAR_13)
   goto out_napi_off;
  VAR_13 = FUNC_8(VAR_10->emac_irq, VAR_5, VAR_9,
          VAR_12, "ch24:emac");
  if (VAR_13)
   goto out_free_irq;
  VAR_13 = FUNC_8(VAR_10->rx_irqs[VAR_1], VAR_4,
          VAR_9, VAR_12, "ch0:rx_be");
  if (VAR_13)
   goto out_free_irq_emac;
  VAR_13 = FUNC_8(VAR_10->tx_irqs[VAR_1], VAR_4,
          VAR_9, VAR_12, "ch18:tx_be");
  if (VAR_13)
   goto out_free_irq_be_rx;
  VAR_13 = FUNC_8(VAR_10->rx_irqs[VAR_2], VAR_8,
          VAR_9, VAR_12, "ch1:rx_nc");
  if (VAR_13)
   goto out_free_irq_be_tx;
  VAR_13 = FUNC_8(VAR_10->tx_irqs[VAR_2], VAR_8,
          VAR_9, VAR_12, "ch19:tx_nc");
  if (VAR_13)
   goto out_free_irq_nc_rx;
 }


 VAR_13 = FUNC_6(VAR_9);
 if (VAR_13)
  goto out_free_irq_nc_tx;
 FUNC_7(VAR_9);


 if (VAR_10->chip_id == VAR_3)
  FUNC_10(VAR_9, VAR_10->pdev);

 FUNC_5(VAR_9);


 VAR_13 = FUNC_9(VAR_9);
 if (VAR_13)
  goto out_ptp_stop;

 return 0;

out_ptp_stop:

 if (VAR_10->chip_id == VAR_3)
  FUNC_11(VAR_9);
out_free_irq_nc_tx:
 if (VAR_10->chip_id == VAR_3)
  goto out_free_irq;
 FUNC_0(VAR_10->tx_irqs[VAR_2], VAR_9);
out_free_irq_nc_rx:
 FUNC_0(VAR_10->rx_irqs[VAR_2], VAR_9);
out_free_irq_be_tx:
 FUNC_0(VAR_10->tx_irqs[VAR_1], VAR_9);
out_free_irq_be_rx:
 FUNC_0(VAR_10->rx_irqs[VAR_1], VAR_9);
out_free_irq_emac:
 FUNC_0(VAR_10->emac_irq, VAR_9);
out_free_irq:
 FUNC_0(VAR_9->irq, VAR_9);
out_napi_off:
 FUNC_1(&VAR_10->napi[VAR_2]);
 FUNC_1(&VAR_10->napi[VAR_1]);
 return VAR_13;
}
