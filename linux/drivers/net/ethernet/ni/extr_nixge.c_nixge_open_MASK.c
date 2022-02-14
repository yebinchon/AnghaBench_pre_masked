
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct nixge_priv {int dma_err_tasklet; int tx_irq; int rx_irq; int napi; int phy_mode; int phy_node; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct nixge_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct phy_device* FUNC_6 (struct net_device*,int ,int *,int ,int ) ;
 int FUNC_7 (struct phy_device*) ;
 int FUNC_8 (struct phy_device*) ;
 int FUNC_9 (struct phy_device*) ;
 int FUNC_10 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_11 (int *,int ,unsigned long) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_5)
{
 struct nixge_priv *VAR_6 = FUNC_3(VAR_5);
 struct phy_device *VAR_7;
 int VAR_8;

 FUNC_5(VAR_5);

 VAR_7 = FUNC_6(VAR_5, VAR_6->phy_node,
        &VAR_2, 0, VAR_6->phy_mode);
 if (!VAR_7)
  return -VAR_0;

 FUNC_8(VAR_7);


 FUNC_11(&VAR_6->dma_err_tasklet, VAR_1,
       (unsigned long)VAR_6);

 FUNC_1(&VAR_6->napi);


 VAR_8 = FUNC_10(VAR_6->tx_irq, VAR_4, 0, VAR_5->name, VAR_5);
 if (VAR_8)
  goto err_tx_irq;

 VAR_8 = FUNC_10(VAR_6->rx_irq, VAR_3, 0, VAR_5->name, VAR_5);
 if (VAR_8)
  goto err_rx_irq;

 FUNC_4(VAR_5);

 return 0;

err_rx_irq:
 FUNC_0(VAR_6->tx_irq, VAR_5);
err_tx_irq:
 FUNC_9(VAR_7);
 FUNC_7(VAR_7);
 FUNC_12(&VAR_6->dma_err_tasklet);
 FUNC_2(VAR_5, "request_irq() failed\n");
 return VAR_8;
}
