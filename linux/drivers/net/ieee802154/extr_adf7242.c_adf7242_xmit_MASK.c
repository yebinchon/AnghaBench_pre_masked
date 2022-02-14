
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct ieee802154_hw {struct adf7242_local* priv; } ;
struct adf7242_local {scalar_t__ tx_stat; int flags; TYPE_1__* spi; int tx_complete; int work; } ;
struct TYPE_2__ {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct adf7242_local*) ;
 int FUNC_1 (struct adf7242_local*,int ) ;
 int FUNC_2 (struct adf7242_local*) ;
 int FUNC_3 (struct adf7242_local*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12(struct ieee802154_hw *VAR_7, struct sk_buff *VAR_8)
{
 struct adf7242_local *VAR_9 = VAR_7->priv;
 int VAR_10;


 FUNC_7(VAR_9->spi->irq);
 FUNC_10(VAR_4, &VAR_9->flags);
 FUNC_4(&VAR_9->work);
 FUNC_9(&VAR_9->tx_complete);
 FUNC_1(VAR_9, VAR_1);
 FUNC_0(VAR_9);

 VAR_10 = FUNC_3(VAR_9, VAR_8->data, VAR_8->len);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_1(VAR_9, VAR_0);
 if (VAR_10)
  goto err;
 FUNC_8(VAR_9->spi->irq);

 VAR_10 = FUNC_11(&VAR_9->tx_complete,
       VAR_5 / 10);
 if (VAR_10 < 0)
  goto err;
 if (VAR_10 == 0) {
  FUNC_6(&VAR_9->spi->dev, "Timeout waiting for TX interrupt\n");
  VAR_10 = -VAR_3;
  goto err;
 }

 if (VAR_9->tx_stat != VAR_6) {
  FUNC_6(&VAR_9->spi->dev,
   "Error xmit: Retry count exceeded Status=0x%x\n",
   VAR_9->tx_stat);
  VAR_10 = -VAR_2;
 } else {
  VAR_10 = 0;
 }

err:
 FUNC_5(VAR_4, &VAR_9->flags);
 FUNC_2(VAR_9);

 return VAR_10;
}
