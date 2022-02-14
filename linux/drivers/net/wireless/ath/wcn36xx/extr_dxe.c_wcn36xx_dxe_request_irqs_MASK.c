
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {int tx_irq; int rx_irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct wcn36xx*) ;
 int FUNC_2 (int ,int ,int ,char*,struct wcn36xx*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct wcn36xx *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->tx_irq, VAR_2,
     VAR_0, "wcn36xx_tx", VAR_3);
 if (VAR_4) {
  FUNC_3("failed to alloc tx irq\n");
  goto out_err;
 }

 VAR_4 = FUNC_2(VAR_3->rx_irq, VAR_1, VAR_0,
     "wcn36xx_rx", VAR_3);
 if (VAR_4) {
  FUNC_3("failed to alloc rx irq\n");
  goto out_txirq;
 }

 FUNC_0(VAR_3->rx_irq);

 return 0;

out_txirq:
 FUNC_1(VAR_3->tx_irq, VAR_3);
out_err:
 return VAR_4;

}
