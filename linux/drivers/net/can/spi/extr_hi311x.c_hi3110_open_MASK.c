
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int irq; int dev; } ;
struct net_device {int dummy; } ;
struct hi3110_priv {int hi3110_lock; int transceiver; int wq; int restart_work; int tx_work; scalar_t__ tx_len; int * tx_skb; scalar_t__ force_quit; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int ,struct hi3110_priv*) ;
 int VAR_7 ;
 int FUNC_7 (struct spi_device*) ;
 int FUNC_8 (struct spi_device*) ;
 int FUNC_9 (int ,int) ;
 int VAR_8 ;
 int FUNC_10 (struct spi_device*) ;
 int FUNC_11 (struct net_device*) ;
 int VAR_9 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct hi3110_priv* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (int ,int *,int ,unsigned long,int ,struct hi3110_priv*) ;

__attribute__((used)) static int FUNC_18(struct net_device *VAR_10)
{
 struct hi3110_priv *VAR_11 = FUNC_14(VAR_10);
 struct spi_device *VAR_12 = VAR_11->spi;
 unsigned long VAR_13 = VAR_3 | VAR_4;
 int VAR_14;

 VAR_14 = FUNC_16(VAR_10);
 if (VAR_14)
  return VAR_14;

 FUNC_12(&VAR_11->hi3110_lock);
 FUNC_9(VAR_11->transceiver, 1);

 VAR_11->force_quit = 0;
 VAR_11->tx_skb = ((void*)0);
 VAR_11->tx_len = 0;

 VAR_14 = FUNC_17(VAR_12->irq, ((void*)0), VAR_7,
       VAR_13, VAR_1, VAR_11);
 if (VAR_14) {
  FUNC_5(&VAR_12->dev, "failed to acquire irq %d\n", VAR_12->irq);
  goto out_close;
 }

 VAR_11->wq = FUNC_1("hi3110_wq", VAR_5 | VAR_6,
       0);
 if (!VAR_11->wq) {
  VAR_14 = -VAR_2;
  goto out_free_irq;
 }
 FUNC_0(&VAR_11->tx_work, VAR_9);
 FUNC_0(&VAR_11->restart_work, VAR_8);

 VAR_14 = FUNC_7(VAR_12);
 if (VAR_14)
  goto out_free_wq;

 VAR_14 = FUNC_11(VAR_10);
 if (VAR_14)
  goto out_free_wq;

 VAR_14 = FUNC_10(VAR_12);
 if (VAR_14)
  goto out_free_wq;

 FUNC_2(VAR_10, VAR_0);
 FUNC_15(VAR_10);
 FUNC_13(&VAR_11->hi3110_lock);

 return 0;

 out_free_wq:
 FUNC_4(VAR_11->wq);
 out_free_irq:
 FUNC_6(VAR_12->irq, VAR_11);
 FUNC_8(VAR_12);
 out_close:
 FUNC_9(VAR_11->transceiver, 0);
 FUNC_3(VAR_10);
 FUNC_13(&VAR_11->hi3110_lock);
 return VAR_14;
}
