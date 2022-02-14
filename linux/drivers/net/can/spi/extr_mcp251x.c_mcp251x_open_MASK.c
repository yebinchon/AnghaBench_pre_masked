
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int irq; int dev; } ;
struct net_device {int dummy; } ;
struct mcp251x_priv {int mcp_lock; int transceiver; int wq; int restart_work; int tx_work; scalar_t__ tx_len; int * tx_skb; scalar_t__ force_quit; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct mcp251x_priv*) ;
 int VAR_6 ;
 int FUNC_9 (struct spi_device*) ;
 int FUNC_10 (struct spi_device*) ;
 int FUNC_11 (int ,int) ;
 int VAR_7 ;
 int FUNC_12 (struct spi_device*) ;
 int FUNC_13 (struct net_device*,struct spi_device*) ;
 int VAR_8 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct mcp251x_priv* FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (int ,int *,int ,unsigned long,int ,struct mcp251x_priv*) ;

__attribute__((used)) static int FUNC_20(struct net_device *VAR_9)
{
 struct mcp251x_priv *VAR_10 = FUNC_16(VAR_9);
 struct spi_device *VAR_11 = VAR_10->spi;
 unsigned long VAR_12 = 0;
 int VAR_13;

 VAR_13 = FUNC_18(VAR_9);
 if (VAR_13) {
  FUNC_5(&VAR_11->dev, "unable to set initial baudrate!\n");
  return VAR_13;
 }

 FUNC_14(&VAR_10->mcp_lock);
 FUNC_11(VAR_10->transceiver, 1);

 VAR_10->force_quit = 0;
 VAR_10->tx_skb = ((void*)0);
 VAR_10->tx_len = 0;

 if (!FUNC_6(&VAR_11->dev))
  VAR_12 = VAR_3;

 VAR_13 = FUNC_19(VAR_11->irq, ((void*)0), VAR_6,
       VAR_12 | VAR_2, FUNC_7(&VAR_11->dev),
       VAR_10);
 if (VAR_13) {
  FUNC_5(&VAR_11->dev, "failed to acquire irq %d\n", VAR_11->irq);
  goto out_close;
 }

 VAR_10->wq = FUNC_1("mcp251x_wq", VAR_4 | VAR_5,
       0);
 if (!VAR_10->wq) {
  VAR_13 = -VAR_1;
  goto out_clean;
 }
 FUNC_0(&VAR_10->tx_work, VAR_8);
 FUNC_0(&VAR_10->restart_work, VAR_7);

 VAR_13 = FUNC_9(VAR_11);
 if (VAR_13)
  goto out_free_wq;
 VAR_13 = FUNC_13(VAR_9, VAR_11);
 if (VAR_13)
  goto out_free_wq;
 VAR_13 = FUNC_12(VAR_11);
 if (VAR_13)
  goto out_free_wq;

 FUNC_2(VAR_9, VAR_0);

 FUNC_17(VAR_9);
 FUNC_15(&VAR_10->mcp_lock);

 return 0;

out_free_wq:
 FUNC_4(VAR_10->wq);
out_clean:
 FUNC_8(VAR_11->irq, VAR_10);
 FUNC_10(VAR_11);
out_close:
 FUNC_11(VAR_10->transceiver, 0);
 FUNC_3(VAR_9);
 FUNC_15(&VAR_10->mcp_lock);
 return VAR_13;
}
